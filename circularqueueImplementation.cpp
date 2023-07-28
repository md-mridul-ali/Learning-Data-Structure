#include<iostream>
#define n 5
using namespace std;
class circularQueue
{
public:
    int front = -1;
    int rear = -1;
    int queue[n];

void enqueue(int x)
{
    if(((rear+1)%n)== front)
        {
           cout<<"Queue is full"<<"\n";
        }
    else if(front == -1 && rear == -1)
        {
           front = rear =0;
           queue[rear]=x;
        }
    else
        {
           rear = (rear+1)%n;
           queue[rear]=x;
        }
}
void dequeue()
{
   if(front == -1 && rear == -1)
      {
         cout<<"Queue is empty"<<"\n";
      }
    else if(front == rear)
        {
           front = rear = -1;
        }
    else
        {
           cout<<"Dequeued element is :"<<queue[front]<<"\n";
           front = (front+1)%n;
        }
}
void peek()
{
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty"<<"\n";
        }
    else
        {
           cout<<"\nFront element is :"<<queue[front]<<"\n";
        }
}
void display()
{
    int i=front;
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty"<<"\n";
        }
    else
        {
           cout<<"Queue elements are :";
           while(i != rear)
              {
                 cout<<queue[i]<<"   ";
                 i =(i+1)%n;
              }
              cout<<queue[rear];
        }
}
};
int main()
{
    circularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.peek();
    q.dequeue();
    q.dequeue();
    q.display();
}
