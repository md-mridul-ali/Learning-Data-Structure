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
void maximum()
{
    int max = stack[top];
    for(int i=top; i>=0; i--)
        {
           if(max < stack[i])
               {
                  max = stack[i];
               }
        }
        cout<<"Maximum element is :"<<max<<"\n";
}
void minimum()
{
    int min = stack[top];
    for(int i=top; i>=0; i--)
        {
           if(min > stack[i])
               {
                  min = stack[i];
               }
        }
        cout<<"Minimum element is :"<<min<<"\n";
}

};
int main()
{
  stack s;
  s.push(22);
  s.push(10);
  s.push(15);
  s.push(28);
  s.push(20);
  s.display();
  s.peek();
  s.maximum();
  s.minimum();

  return 0;
}


