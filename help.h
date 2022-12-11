#define QUEUE_SIZE 20

typedef struct queue
{
   int elements[QUEUE_SIZE];
   int rear;
   int front;
}ST_queue_t;

typedef enum Status
{
   OK, EMPTY_QUEUE, FULL_QUEUE
}EN_status_t;

EN_status_t enqueue(ST_queue_t *queue, int data);
void createEmptyQueue(ST_queue_t *queue);
EN_status_t dequeue(ST_queue_t *queue);
void printQueue(ST_queue_t *queue);