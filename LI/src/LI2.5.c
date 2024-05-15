#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 11

typedef struct {
    int key;
    int value;
} item;

typedef struct {
    item* entries;
    size_t capacity;
    size_t length;
    hash_table *next;
} hash_table;

hash_table* create_hash_table(size_t capacity) {
    hash_table* table = malloc(sizeof(hash_table));
    table->entries = malloc(capacity * sizeof(item));
    table->capacity = capacity;
    table->length = 0;
    return table;
}

int hash_function(int key, int table_size) {
    return key % table_size;
}

void insert_open_addressing(hash_table* table, int key, int value) {
    int index = hash_function(key, table->capacity);
    while (table->entries[index].key!= -1) 
    {
        if (table->entries[index].key == key) 
        {
            printf("%d EXISTS\n", key);
            return;
        }
        index = (index + 1) % table->capacity;
    }
    table->entries[index].key = key;
    table->entries[index].value = value;
    printf("%d -> %d\n", index, key);
    table->length++;
}

void insert_linked_list(hash_table* table, int key, int value) 
{
    item* new_item = malloc(sizeof(item));
    new_item->key = key;
    new_item->value = value;
    new_item->next = table->entries[table->length].next;
    table->entries[table->length].next = new_item;
    table->length++;
    printf("%d -> %d\n", table->length - 1, key);
}

void insert_cuckoo(hash_table* table1, hash_table* table2, int key, int value) 
{
    int index1 = hash_function(key, table1->capacity);
    int index2 = hash_function(key, table2->capacity);
    if (table1->entries[index1].key == -1) {
        table1->entries[index1].key = key;
        table1->entries[index1].value = value;
        printf("0 %d -> %d\n", index1, key);
    } else if (table2->entries[index2].key == -1) {
        table2->entries[index2].key = key;
        table2->entries[index2].value = value;
        printf("1 %d -> %d\n", index2, key);
    } else {
        int temp_key = table1->entries[index1].key;
        int temp_value = table1->entries[index1].value;
        table1->entries[index1].key = key;
        table1->entries[index1].value = value;
        insert_cuckoo(table2, table1, temp_key, temp_value);
    }
}

void delete_open_addressing(hash_table* table, int key) {
    int index = hash_function(key, table->capacity);
    while (table->entries[index].key!= -1) {
        if (table->entries[index].key == key) {
            table->entries[index].key = -1;
            printf("OK\n");
            return;
        }
        index = (index + 1) % table->capacity;
    }
    printf("NO\n");
}

void delete_linked_list(hash_table* table, int key) {
    item* current = table->entries;
    while (current->next!= NULL) {
        if (current->next->key == key) {
            item* temp = current->next;
            current->next = current->next->next;
            free(temp);
            printf("OK\n");
            return;
        }
        current = current->next;
    }
    printf("NO\n");
}

void delete_cuckoo(hash_table* table1, hash_table* table2, int key) {
    int index1 = hash_function(key, table1->capacity);
    int index2 = hash_function(key, table2->capacity);
    if (table1->entries[index1].key == key) {
        table1->entries[index1].key = -1;
        printf("OK\n");
    } else if (table2->entries[index2].key == key) {
        table2->entries[index2].key = -1;
        printf("OK\n");
    } else {
        printf("NO\n");
    }
}

void print_open_addressing(hash_table* table) {
    for (size_t i = 0; i < table->capacity; i++) {
        if (table->entries[i].key!= -1) {
            printf("%d\t%d\n", i, table->entries[i].key);
        }
    }
}

void print_linked_list(hash_table* table) {
    for (size_t i =0; i < table->capacity; i++) {
        item* current = table->entries[i].next;
        if (current == NULL) {
            continue;
        }
        printf("%d: ", i);
        while (current != NULL) {
            printf("%d ", current->key);
            current = current->next;
        }
        printf("\n");
    }
}

void print_cuckoo(hash_table* table1, hash_table* table2) {
    for (size_t i = 0; i < table1->capacity; i++) {
        if (table1->entries[i].key != -1) {
            printf("0 %d -> %d\n", i, table1->entries[i].key);
        }
    }
    for (size_t i = 0; i < table2->capacity; i++) {
        if (table2->entries[i].key != -1) {
            printf("1 %d -> %d\n", i, table2->entries[i].key);
        }
    }
}

int main() {
    // Open addressing
    hash_table* table_open = create_hash_table(TABLE_SIZE);
    insert_open_addressing(table_open, 11, 11);
    insert_open_addressing(table_open, 22, 22);
    insert_open_addressing(table_open, 33, 33);
    insert_open_addressing(table_open, 44, 44);
    insert_open_addressing(table_open, 154, 154);
    insert_open_addressing(table_open, 1694, 1694);
    print_open_addressing(table_open);

    // Linked list
    hash_table* table_linked = create_hash_table(TABLE_SIZE);
    insert_linked_list(table_linked, 21, 21);
    insert_linked_list(table_linked, 10, 10);
    insert_linked_list(table_linked, 11, 11);
    print_linked_list(table_linked);

    // Cuckoo hashing
    hash_table* table1 = create_hash_table(TABLE_SIZE);
    hash_table* table2 = create_hash_table(TABLE_SIZE);
    insert_cuckoo(table1, table2, 6, 6);
    insert_cuckoo(table1, table2, 1, 1);
    insert_cuckoo(table1, table2, 11, 11);
    insert_cuckoo(table1, table2, 16, 16);
    insert_cuckoo(table1, table2, 21, 21);
    insert_cuckoo(table1, table2, 26, 26);
    print_cuckoo(table1, table2);

    return 0;
}