#include<iostream>
using namespace std;
int main()
{
int m,n;   //Declaring two variable one is 'm' and another is 'n' variable
cout<<"Enter the size of rows in your matrix:";   //From user input size of rows
cin>>m;  //size of rows will assign 'm' variable

cout<<"Enter the size of columns in your matrix:";  //From user input size of columns
cin>>n;  //size of columns will assign 'n' variable

int A[m][n];  //Declaring a matrix which row number will be 'm' and column number will be 'n'
cout<<"Enter elements for A matrix:"<<"\n";
//From user input for 'A' matrix
for(int i=0; i<m; i++)
{
   for(int j=0; j<n; j++)
    {
      cout<<"A["<<i<<"]["<<j<<"]=";
      cin>>A[i][j];
    }
}
cout<<"\n";

//output A matrix
for(int i=0;i<m; i++)
{
   for(int j=0; j<n; j++)
   {
    cout<<A[i][j]<<"   ";
   }
   cout<<"\n";
}
cout<<"\n";

int sum=0;  //Declaration and initialization 'sum' variable

for(int i=0; i<m; i++)
{
  for(int j=0; j<n; j++)
  {
    sum=sum+A[i][j];
  }
}

cout<<"Addition of matrix elements is :"<<sum<<"\n";  //Print the value of 'sum' variable

return 0;
}
