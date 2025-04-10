#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void insert(int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Linkedlist is Empty\n");
        return;
    }
    ptr->data = value;
    ptr->next = NULL;

    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        struct Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = ptr;
    }
}

void traverse()
{
    struct Node *current = head;
    if (current == NULL)
    {
        printf("Empty\n");
    } else {
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

void search(int value)
{
    struct Node *current = head;
    int status = 0;

    if (current == NULL)
    {
        printf("Empty\n");
        return;
    }
    else
    {
        while (current != NULL)
        {
            if (current->data == value)
            {
                status = 1;
                break;
            }
            current = current->next;
        }

        if (status)
        {
            printf("Match Found\n");
        } else
        {
            printf("No Match\n");
        }
    }
}

void delete_element(int value)
{
    struct Node *current = head;
    struct Node *previous = NULL;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (head->data == value) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        printf("Element %d deleted\n", value);
        return;
    }

    while (current != NULL && current->data != value)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        printf("Element %d not found\n", value);
        return;
    }

    previous->next = current->next;
    free(current);
    printf("Element %d deleted\n", value);
}

int main()
{
    printf("1. Insert.\n");
    printf("2. Traverse.\n");
    printf("3. Search.\n");
    printf("4. Delete.\n");
    printf("5. Exit.\n");

    int select, value;

    while (1)
    {
        printf("Select operation to perform on the linked list: ");
        scanf("%d", &select);

        switch (select)
        {
            case 1:
                printf("\nEnter the Value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                printf("\nValues In the linked List\n");
                traverse();
                break;
            case 3:
                printf("\nEnter the Value to Search: ");
                scanf("%d", &value);
                search(value);
                break;
            case 4:
                printf("\nEnter the Value to Delete: ");
                scanf("%d", &value);
                delete_element(value);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid selection\n");
        }
    }
    return 0;
}
