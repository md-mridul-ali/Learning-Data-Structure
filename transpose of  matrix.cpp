#include<iostream>
using namespace std;
int main()
{
int m,n;  //Declaring two integer variable one is 'm' and another is 'n' variable
cout<<"Enter the size of rows in your matrix:";   // From user input size of rows
cin>>m;   // size of rows will be assign in 'm' variable

cout<<"Enter the size of colums in your matrix:";   //From user input size of columns
cin>>n;   // size of columns will be assign in 'n' variable

//Input 'A' matrix
int A[m][n];
for(int i=0; i<m; i++)
{
 for(int j=0; j<n; j++)
 {
  cout<<"A["<<i<<"]["<<j<<"]=";
 cin>>A[i][j];
 }
}
cout<<"\n";
for(int i=0; i<m; i++)
{
   for(int j=0; j<n; j++)
   {
    cout<<A[i][j]<<"   ";
   }
   cout<<"\n";
}
cout<<"\n";
//Transpose matrix

for(int i=0;i<n; i++)
{
 for(int j=0; j<m; j++)
 {
   cout<<A[j][i]<<"   ";
 }
 cout<<"\n";
}

return 0;
}
