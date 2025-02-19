//C program to insert an element to an array Data Structure at any specified index.
#include<stdio.h>

int insert(int arr[],int current_no_values, int insert_value, int pos)
{
    int i;

    for(i = current_no_values - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];

        arr[pos] = insert_value;
    }
}

int main()
{
    int array[100] = {12,13,7,8,9,1,3,2};
    int current_values = 8;
    int value,i, position;

    printf("\nBefore insertion : ");
    for (int i = 0; i < current_values; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    value = 12;
    position = 3;

    insert(array, current_values,value,position);
    current_values++;

    printf("\nAfter insertion : ");
    for (int i = 0; i < current_values; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
