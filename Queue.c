#include<stdio.h>
#define Q_size 5

typedef struct
{
    int data[Q_size + 1];
    int head, tail;
}Queue;

int main()
{
    Queue my_q;
    int item;

    my_q.head = 0;
    my_q.tail = 0;

    enqueue(&my_q,1);
    printf("tail = %d\n",my_q.tail);
    enqueue(&my_q,2);
    printf("tail = %d\n",my_q.tail);

    printf("beginning head = %d\n", my_q.head);

    item = dequeue(&my_q);
    printf("item = %d, head = %d\n", item,my_q.head);
    item = dequeue(&my_q);
    printf("item = %d, head = %d\n", item,my_q.head);
    item = dequeue(&my_q);

    printf("item = %d,head = %d\n",item,my_q.head);
}

void enqueue (Queue *q, int item)
{
    if ((q->tail + 1) % (Q_size + 1) == q->head);
    {
        printf("Queue is full\n");
        return;
    }
    q->data [q->tail] = item;
    q-> tail = (q->tail +1)%(Q_size +1);
}

void dequeue (Queue *q)
{
    int item;

    if (q-> tail == q-> head)
    {
        printf("Queue is empty\n");
        return-1;
    }

    item = q->data[q->head];

    q->head = (q->head +1) % (Q_size + 1);

    return item;
}
