#include <stdio.h>
#include "help.h"

int main(void)
{
   ST_queue_t queue;
   createEmptyQueue(&queue);
   for (size_t i = 0; i <= 50; i++)
   {
      enqueue(&queue, i);
   }

   for (size_t i = 0; i < 3; i++)
   {
      dequeue(&queue);
   }
   
   printQueue(&queue);
   
}