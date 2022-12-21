#include <stdio.h>
#include <stdlib.h>
#include "third.h"

#define ARRAY_MAXSIZE 50

int main()
{
    int *arr = malloc(sizeof(int)*ARRAY_MAXSIZE);
    for (int i = 0; i < ARRAY_MAXSIZE; i++)
    {
        scanf(" %d",(arr+i));
    }
    
    // int arr[] = {75, 43 ,28,29,70,23};
    // printf("inputarr[");
    // for (int i = 0; i < ARRAY_MAXSIZE; i++)
    // {
    //     printf("%d,",*(arr+i));
    // }
    // printf("]\n");
    // shift_element(arr,2);
    insertion_sort(arr,ARRAY_MAXSIZE);

    for (int i = 0; i < ARRAY_MAXSIZE-1; i++)
    {
        printf("%d,",*(arr+i));
    }
    printf("%d\n",*(arr+ARRAY_MAXSIZE-1));


    free(arr);

    return 0;
}