#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int m;
cout<<"Enter the size of rows and columns : ";
cin>>m;


int l_sum=0,r_sum=0,T_sum;

int array[m][m];
cout<<"Enter array elements : "<<"\n";

for(int i=0; i<m; i++)
{
  for(int j=0; j<m; j++)
  {

    cout<<"array["<<i<<"]["<<j<<"]=";
    cin>>array[i][j];
  }
}

cout<<"\n";

for(int i=0; i<m; i++)
{
   for(int j=0; j<m; j++)
    {
       if(i==j)
      {
         l_sum=l_sum + array[i][j];
      }
          if((i+j)==m-1)
           {
              r_sum=r_sum + array[i][j];
           }
      cout<<array[i][j]<<"   ";
   }
cout<<"\n";
}
cout<<"\n";

T_sum=l_sum + r_sum;
cout<<"Summation of left diagonal elements of a matrix  :"<<l_sum<<"\n";
cout<<"Summation of right diagonal elements of a matrix  :"<<r_sum<<"\n";
cout<<"Total summation of diagonal elements of a matrix : "<<T_sum<<"\n";

getch();
}
