#include <stdio.h>
#include <stdlib.h>
#include "Queue_C_API.h"

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


	return 0;
}
