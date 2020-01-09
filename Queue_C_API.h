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

