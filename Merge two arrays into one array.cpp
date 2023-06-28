#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int m,n;
cout<<"Enter the array size for array1 : ";
cin>>m;

cout<<"Enter the array size for array2 : ";
cin>>n;

int array1[m];
int array2[n];
cout<<"\n";

cout<<"Enter the elements for array1 : "<<"\n";
for(int i=0; i<m; i++)
{
  cout<<"array1["<<i<<"]=";
  cin>>array1[i];
}

cout<<"\n";

cout<<"Enter the elements for array2 : "<<"\n";
for(int j=0; j<n; j++)
{
  cout<<"array2["<<j<<"]=";
  cin>>array2[j];
}
cout<<"\n";

cout<<"Array1 elements are : ";
for(int i=0; i<m; i++)
{
   cout<<array1[i]<<"   ";
}

cout<<"\n"<<"\n";

cout<<"Array2 elements are : ";

for(int j=0; j<n; j++)
{
   cout<<array2[j]<<"   ";
}

cout<<"\n"<<"\n";

int array3[m+n];

for(int i=0; i<m; i++)
{
  array3[i]=array1[i];
}

for(int j=0; j<n; j++)
{
  array3[j+m]=array2[j];
}

cout<<"final array : ";

for(int i=0; i<m+n; i++)
{
  cout<<array3[i]<<"  ";
}

getch();
}
