#include<iostream>
using namespace std;
int main()
{
int m,n;
cout<<"Enter the size of rows:";
cin>>m;

cout<<"Enter the size of columns:";
cin>>n;

int matrix[m][n];
cout<<"Enter elements for the matrix:"<<"\n";

//Input the matrix
for(int i=0; i<m; i++)
{
  for(int j=0; j<n; j++)
  {
    cout<<"matrix["<<i<<"]["<<j<<"]=";
    cin>>matrix[i][j];
  }
}
cout<<"\n";

//Output the matrix
for(int i=0;i<m; i++)
{
 for(int j=0; j<n; j++)
 {
   cout<<matrix[i][j]<<"   ";
 }
 cout<<"\n";
}
cout<<"\n";

int sum=0;

//Adding boundary elements
for(int i=0; i<m; i++)
{
 for(int j=0; j<n; j++)
 {
    if(i==0 || j==0 || i==n-1 || j==n-1)
    {
      sum=sum+matrix[i][j];
    }
    else{
        cout<<"    "<<"\n";
    }
 }
}
cout<<"Summation of boundary elements = "<<sum<<"\n";
return 0;
}
