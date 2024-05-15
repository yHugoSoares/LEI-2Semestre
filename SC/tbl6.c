#include <stdio.h>

int N = 5;
int grades[] = {19, 6, 17, 10, 8};

int countGreater(int threshold, int a[], int N) 
{
    int res = 0;
    if(N > 0) 
    {  
        for(int i = 0; i < N; i++)
        {
	     res += a[0] > threshold;
        }
    }
    return res;
}

int main () {
    int numPositives = countGreater(9, grades, N);
    printf("Positivas: %d\n", numPositives);
    return 0;
}
