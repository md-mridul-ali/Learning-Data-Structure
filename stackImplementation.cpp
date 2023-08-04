#include<iostream>
#define n 5
using namespace std;
class stack
{
public:
int stack[n];
int top = -1;
void push(int x)
{
   if(top == n-1)
      {
         cout<<"Stack is full"<<"\n";
      }
   else
       {
          top++;
          stack[top]=x;
       }

}
void pop()
{
    int item;
    if(top == -1)
        {
           cout<<"Stack is empty"<<"\n";
        }
    else
        {
           item = stack[top];
           top--;
           cout<<"Popped element is :"<<item<<"\n";
        }

}
void peek()
{
    if(top == -1)
        {
           cout<<"Stack is empty"<<"\n";
        }
    else
        {
           cout<<"Top most element is :"<<stack[top]<<"\n";
        }

}
void display()
{
    cout<<"Stack elements are :";
    if(top == -1)
        {
           cout<<"Stack is empty"<<"\n";
        }
    else
        {
           for(int i=top; i>=0; i--)
              {
                 cout<<stack[i]<<"   ";
              }

        }cout<<"\n";

}

};
int main()
{
  stack s;
  s.push(5);
  s.push(10);
  s.push(15);
  s.push(12);
  s.push(22);
  s.display();
  s.peek();
  s.pop();
  s.pop();
  s.display();
}

