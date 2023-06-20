#include<iostream>
using namespace std;
int main()
{
int m,n;
cout<<"Enter the size of rows in your matrix:";
cin>>m;

cout<<"Enter the size of colums in your matrix:";
cin>>n;

int A[m][n];  //'A' is matrix whose row number is 'm' and column number is 'n'
cout<<"Enter elements for A matrix:"<<"\n";

// Input 'A' matrix
for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<"A["<<i<<"]["<<j<<"]=";
cin>>A[i][j];
}
}
cout<<"\n";

int B[m][n];  //'B' is a matrix whose row number is 'm' and column number is 'n'
cout<<"Enter elements for B matrix:"<<"\n";

//Input 'B' matrix
for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<"B["<<i<<"]["<<j<<"]=";
cin>>B[i][j];
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

//output B matrix
for(int i=0;i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<B[i][j]<<"   ";
}
cout<<"\n";
}

cout<<"\n";

int C[m][n];   // 'C' is a new matrix whose row number is 'm' and column number is 'n'and which stored in summation of 'A' and 'B' matrix

//Summation of 'A' and 'B' matrix and assign in 'C' matrix
for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
C[i][j]=A[i][j]+B[i][j];
}
}
cout<<"\n";
// print the after addition 'C' matrix
for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<C[i][j]<<"   ";
}
cout<<"\n";
}

return 0;
}
