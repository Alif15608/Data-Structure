
#include<iostream>
#define Q_SIZE 5
using namespace std;

typedef struct{

    int data[Q_SIZE + 1];
    int head, tail;

}Queue;



void enqueue(Queue *q, int item){

    if((q -> tail+1) % (Q_SIZE + 1) == q -> head)
    {
        cout<<" Queue is full !"<<endl;
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (Q_SIZE + 1);



}

int dequeue(Queue *q){

    int item;

    if(q->tail == q->head)
    {
        cout<<"Queue is empty ! "<<endl;
        return -1;

    }
    item = q->data[q->head];
    q->head = (q->head +1) % (Q_SIZE + 1);

    return item;

}

int main()

{

    Queue my_q;
    int item;

    my_q.head = 0;
    my_q.tail = 0;



    enqueue(&my_q, 1);
    cout<<"tail = "<<my_q.tail<<endl;

    enqueue(&my_q, 2);
    cout<<"tail = "<<my_q.tail<<endl;

    enqueue(&my_q, 3);
    cout<<"tail = "<<my_q.tail<<endl;

    enqueue(&my_q, 4);
    cout<<"tail = "<<my_q.tail<<endl;

    enqueue(&my_q, 5);
    cout<<"tail = "<<my_q.tail<<endl;

    enqueue(&my_q, 6);
    cout<<"tail = "<<my_q.tail<<endl;



    cout<<"beginning head = "<<my_q.head<<endl;
    item = dequeue(&my_q);
    cout<<"item = "<<item<<", head = "<<my_q.head<<endl;
    item = dequeue(&my_q);
    cout<<"item = "<<item<<", head = "<<my_q.head<<endl;
    item = dequeue(&my_q);
    cout<<"item = "<<item<<", head = "<<my_q.head<<endl;
    item = dequeue(&my_q);
    cout<<"item = "<<item<<", head = "<<my_q.head<<endl;
    item = dequeue(&my_q);
    cout<<"item = "<<item<<", head = "<<my_q.head<<endl;
    item = dequeue(&my_q);
    cout<<"item = "<<item<<", head = "<<my_q.head<<endl;


}
