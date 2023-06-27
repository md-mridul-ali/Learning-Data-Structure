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

int sum=0;   //Declaration and initialization 'sum' variable

cout<<"Even numbers are in array elements : ";

//Find the even numbers in array elements by using 'for loop'
for(int i=0; i<n; i++)
{
 if(array[i]%2==0)
 {
   cout<<array[i]<<"   ";   //Print the even numbers
   sum=sum+array[i];   //summation of even numbers and assign in 'sum' variable
 }
}
cout<<"\n"<<"\n";
cout<<"Summation of even numbers in array elements : "<<sum<<"\n";  //Print the value of 'sum' variable

getch();
}
