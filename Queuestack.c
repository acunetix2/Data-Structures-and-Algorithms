#include<stdio.h>
#include<stdbool.h>
#define SIZE 10

int stack[SIZE];
int rear = -1;
int front = -1;

void push(int value)
{
    if(isFull())
    {
        printf("The Queue is Full!");
    }
    else if(front == -1 && front == -1)
    {
        front++;
        stack[front] = value;
        rear++;
    }
    else
    {
        rear++;
        stack[rear] = value;
    }
}
bool isEmpty()
{
    if(front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull()
{
    if(rear + 1 == SIZE)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void pop()
{
    if(isEmpty())
    {
        printf("The queue is Empty!");
    }
    else if(front == 0 && rear == 0)
    {
        printf("\n%d",stack[front]);
        front--;
        rear--;
    }
    else
    {
        printf("\n%d",stack[front]);
        front--;
    }
}
void enqueue(int data)
{
    push(data);
}
void dequeue()
{
    pop();
}
