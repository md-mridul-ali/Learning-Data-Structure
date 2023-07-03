#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter your array size : ";
cin>>n;

int array[n];
cout<<"Enter array elements : "<<"\n";
for(int i=0; i<n; i++)
{
 cout<<"array["<<i<<"]=";
 cin>>array[i];
}
cout<<"\n";
cout<<"Array elements are : ";
for(int i=0; i<n; i++)
{
  cout<<array[i]<<"   ";
}
cout<<endl;

int fst,sec,thrd;
for(int i=0; i<n; i++)
{
  if(array[i]>fst)
  {
    thrd=sec;
    sec=fst;
    fst=array[i];
  }
     else if(array[i]>sec)
     {
        thrd=sec;
        sec=array[i];
     }
         else if(array[i]>thrd)
         {
            thrd=array[i];
         }
}
cout<<"Three largest elements are :"<<fst<<"  "<<sec<<"   "<<thrd<<"\n";

return 0;
}
