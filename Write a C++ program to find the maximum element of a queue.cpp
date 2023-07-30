#include<iostream>
#define n 5
using namespace std;

class Queue
{
public:

int queue[n];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear==n-1)
        {
          cout<<"\nQueue is full "<<"\n";
        }
    else if(front == -1 && rear == -1)
        {
           front = rear = 0;
           queue[rear]=x;
        }
        else
            {
               rear++;
               queue[rear]=x;
            }

}
void dequeue()
{
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<"\n";
        }
    else if(front == rear)
        {
          front = rear = -1;
        }
    else
        {
          cout<<"Dequeued element is :"<<queue[front]<<"\n";
          front++;
        }

}
void peek()
{
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<"\n";
        }
    else
        {
           cout<<"\nFront element is :"<<queue[front]<<"\n";
        }

}
void display()
{
   if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<"\n";
        }
        else
            {
                cout<<"Queue elements are :";
              for(int i=front; i<=rear; i++)
                {
                   cout<<queue[i]<<"   ";
                }
            }

}
int maximum()
{
    int i;
    int max = queue[i];
    for(int i=front; i<=rear; i++)
        {
           if(max<queue[i])
              {
                max=queue[i];
              }
        }
     cout<<"Maximum element is :"<<max<<"\n";

}

};
int main()
{
   Queue q;

  q.enqueue(30);
  q.enqueue(50);
  q.enqueue(35);
  q.enqueue(40);
  q.enqueue(20);
  q.display();
  q.peek();
  q.maximum();

  return 0;
}

