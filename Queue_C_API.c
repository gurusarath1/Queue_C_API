#include <stdio.h>
#include <stdlib.h>

typedef int QUEUE_DATA;

typedef enum Queue_errorCode {

        SUCCESS,
        FAILURE

}Queue_errorCode;


typedef struct Queue {

        int Front;
        int Rear;
        int Size;
        int NumElementsInQueue;
        QUEUE_DATA* Data;

}Queue;

typedef enum Queue_YES_NO {

        Queue_NO,
        Queue_YES

}Queue_YES_NO;



Queue CreateQueue(int size);
Queue_errorCode enqueue(Queue* q_ptr, QUEUE_DATA x);
Queue_errorCode dequeue(Queue* q_ptr, QUEUE_DATA* x);
Queue_YES_NO Queue_isEmpty(Queue* q_ptr);
Queue_YES_NO Queue_isFull(Queue* q_ptr);



int main()
{

        Queue Q;

        Q = CreateQueue(5);

        enqueue(&Q, 1);
        enqueue(&Q, 2);
        enqueue(&Q, 3);
        enqueue(&Q, 4);
        enqueue(&Q, 5);
        enqueue(&Q, 6);
        enqueue(&Q, 7);


        QUEUE_DATA temp;

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);


	return 0;
}


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

