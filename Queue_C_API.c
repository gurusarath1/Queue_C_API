#include <stdio.h>
#include <stdlib.h>
#include "Queue_C_API.h"

Queue CreateQueue(int size)
{
        Queue Q;
        Q.Front = 0;
        Q.Rear = 0;
        Q.Size = size;
        QUEUE_DATA* d = (QUEUE_DATA*)malloc(sizeof(QUEUE_DATA) * size);
        Q.Data = d;
        Q.NumElementsInQueue = 0;
        return Q;
}


Queue_errorCode enqueue(Queue* q_ptr, QUEUE_DATA x)
{
        if(!Queue_isFull(q_ptr))
        {
                q_ptr->Data[q_ptr->Rear] = x;

                q_ptr->NumElementsInQueue += 1;
                q_ptr->Rear++;
                if(q_ptr->Rear >= q_ptr->Size)
                {
                        q_ptr->Rear = 0;
                }
                return SUCCESS;
        }

        printf("\nQueue is Full!");
        return FAILURE;
}

Queue_errorCode dequeue(Queue* q_ptr, QUEUE_DATA* x)
{
        if(!Queue_isEmpty(q_ptr))
        {
                *x = q_ptr->Data[q_ptr->Front];

                q_ptr->NumElementsInQueue -= 1;
                q_ptr->Front += 1;
                if(q_ptr->Front >= q_ptr->Size)
                {
                        q_ptr->Front = 0;
                }

                return SUCCESS;
	}

	printf("\nQueue is Empty!");
	return FAILURE;
}

Queue_YES_NO Queue_isEmpty(Queue* q_ptr)
{
        if(q_ptr->NumElementsInQueue <= 0)
        {
                return Queue_YES;
        }

        return Queue_NO;
}


Queue_YES_NO Queue_isFull(Queue* q_ptr)
{
        if(q_ptr->NumElementsInQueue >= q_ptr->Size)
        {
                return Queue_YES;
        }

        return Queue_NO;
}

