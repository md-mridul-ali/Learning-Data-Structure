#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int n;   //Declare a variable('n') which data type is integer
cout<<"Enter array size : ";   //Input array size from user
cin>>n;  //Assign array size in 'n' variable

int array[n];
cout<<"Enter array elements : "<<"\n";

//Input array elements and assign in 'array[]' variable
for(int i=0; i<n; i++)
{
  cout<<"array["<<i<<"]=";
  cin>>array[i];
}

cout<<"\n";

cout<<"Array elements are : ";

//Print the array elements
for(int i=0; i<n; i++)
{
  cout<<array[i]<<"   ";
}
cout<<"\n"<<"\n";

int sum=0;
//Summation of even indexed numbers of an array and assign in 'sum'variable
for(int i=0; i<n; i=i+2)
{
   sum=sum+array[i];
}
cout<<"Summation of even indexed numbers of an array :"<<sum<<"\n";  //print the value of 'sum' variable
getch();
}
