//C program to delete an element to an array Data Structure at any specified index.
#include <stdio.h>
int deletion(int arr[], int current_no_values, int pos)
{
    if (pos < 0 || pos >= current_no_values)
    {
        printf("Invalid position for deletion.\n");
        return current_no_values;
    }
    for (int i = pos; i < current_no_values - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return current_no_values - 1;
}
int main()
{
    int array[100] = {12, 13, 7, 8, 9, 1, 3, 2};
    int current_values = 8;
    int position;

    do
    {
        printf("\nBefore Deletion : ");
        for (int i = 0; i < current_values; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");

        printf("Enter the position to delete(use -1 to exit): ", current_values - 1);
        scanf("%d", &position);

        if (position == -1)
        {
            break;
        }
        if (position < 0 || position >= current_values)
        {
            printf("Invalid position. Retry\n");
        }

        current_values = deletion(array, current_values, position);

        printf("\nAfter Deletion : ");
        for (int i = 0; i < current_values; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");

    } while (1);

    return 0;
}
