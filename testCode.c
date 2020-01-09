#include <stdio.h>
#include <stdlib.h>
#include "Queue_C_API.h"

int main()
{

        Queue Q;
	QUEUE_DATA temp;

        Q = CreateQueue(5);

        enqueue(&Q, 1);
        enqueue(&Q, 2);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        enqueue(&Q, 3);
        enqueue(&Q, 4);
        enqueue(&Q, 5);
        enqueue(&Q, 6);
        enqueue(&Q, 7);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d\n", temp);




        enqueue(&Q, 33);
        enqueue(&Q, 44);
        enqueue(&Q, 56);
        enqueue(&Q, 66);
        enqueue(&Q, 76);



	int n=0;
	QUEUE_DATA* a;

	a = queueToArray(&Q, &n);

	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d\n", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d", temp);

        dequeue(&Q, &temp);
        printf("\nDequeued value = %d\n", temp);

	return 0;
}
