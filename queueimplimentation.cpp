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
          cout<<"Queue is full "<<"\n";
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
           cout<<"Front element is :"<<queue[front]<<"\n";
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
                cout<<"Queue elements are :"<<"\n";
              for(int i=front; i<=rear; i++)
                {
                   cout<<queue[i]<<"\n";
                }
            }

}

};
int main()
{
   Queue l;

  l.enqueue(1);
  l.enqueue(2);
  l.enqueue(3);
  l.enqueue(4);
  l.enqueue(5);
  l.dequeue();
  l.display();
  l.enqueue(10);

  return 0;
}
