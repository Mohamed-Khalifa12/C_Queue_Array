#include <stdio.h>
#include "help.h"

void createEmptyQueue(ST_queue_t *queue)
{
   queue->front = -1;
   queue->rear = -1;
}

int isEmpty(ST_queue_t *queue)
{
   if(queue->front == -1 && queue->rear == -1)
      return 1;
   return 0;
}

int isFull(ST_queue_t *queue)
{
   if(queue->rear == QUEUE_SIZE -1)
      return 1;
   return 0;
}

EN_status_t enqueue(ST_queue_t *queue, int data)
{
   if(isFull(queue))
      return FULL_QUEUE;

   if(isEmpty(queue))
      queue->front++;
   queue->elements[++queue->rear] = data;
   return OK;
}

EN_status_t dequeue(ST_queue_t *queue)
{
   if(isEmpty(queue))
      return EMPTY_QUEUE;

   if(queue->front == queue->rear && queue->front == QUEUE_SIZE)
   {
      queue->front = -1;
      queue->rear = -1;
   }
   else
      queue->front++;
   return OK;
}

void printQueue(ST_queue_t *queue)
{
   if(isEmpty(queue)){
      printf("Empty queue");
      return;
   }

   printf("The Values in the Queue is :\t");
   for (size_t i = queue->front; i <= queue->rear; i++)
   {
      printf("%d\t", queue->elements[i]);
   }
}