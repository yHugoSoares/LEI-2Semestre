#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max 6

typedef struct staticQueue {
    int front;
    int length;
    int values [Max];
} QUEUE, *SQueue;

typedef struct dinQueue {
    int size;
    int front;
    int length;
    int *values;
} dinQueue, *DQueue;


SQueue SinitQueue() 
{
    SQueue sq1 = malloc(sizeof(struct staticQueue)); // Allocate memory for the QUEUE struct
    if (sq1 == NULL) return NULL;                   // If memory allocation fails, return -1
    
    sq1->front = 0; // Set front to 0
    sq1->length = 0; // Set length to 0
    
    return sq1; // Return a pointer to the QUEUE struct
}

int SisEmptyQ(SQueue q) 
{
    return q->length == 0; // Return 1 if length is 0, 0 otherwise
}

int Senqueue(SQueue q, int *x) 
{
    if (q->length == Max) return 1; // If length is equal to Max, return -1
    
    q->values[(q->front + q->length) % Max] = *x; // Add x to the end of the queue
    q->length++; // Increment length
    
    return 0;
}

int Sdequeue(SQueue q, int *x)
{
    if (SisEmptyQ(q)) return 1; // If queue is empty, return 1

    (*x) = q->values[q->front]; // Set x to the value at the front of the queue

    q->front = (q->front + 1) % Max; // Increment front
    q->length--; // Decrement length

    return 0;
}

int Sfront (SQueue q, int *x)
{
    if (SisEmptyQ(q)) return 1; // If queue is empty, return 1

    (*x) = q->values[q->front]; // Set x to the value at the front of the queue

    return 0;
}

int dupQueue(dinQueue q1)
{
    DQueue q = malloc(sizeof(struct dinQueue)); // Allocate memory for the QUEUE struct
    if (q == NULL) return NULL;

    q->size = Max;
    q->front = 0;
    q->length = 0;
    q->values = malloc(sizeof(int) * q->size); // Allocate memory for the values array

    if (q->values == NULL) 
    {
        free(q);
        return NULL;
    }
}

int main()
{
    SinitQueue();
    return 0;
}