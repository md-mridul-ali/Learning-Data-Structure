#include<iostream>
using namespace std;
class product
{
public:
    int n;
    string p_name;
    int p_id;
    string p_catagory;
    int price;
produc(string pn, int id, string ca, int p)
{
    pn=p_name;
    id=p_id;
    ca=p_catagory;
    p=price;
}

};
void bubbleSort(product arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j].price > arr[j+1].price)
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void selectionSort(product arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j].price < arr[min].price)
            {
                min=j;
                swap(arr[min],arr[i]);
            }
        }

    }

}
void showdetails(product arr[], int n)
{
    cout<<"Product information : "<<"\n";
    for (int i = 0; i < n; ++i)
    {
        cout <<"Product name:" << arr[i].p_name <<"   "<<"Product id:" << arr[i].p_id  <<"   "<<"Product catagory:" << arr[i].p_catagory <<"   "<<"Product price:" << arr[i].price <<"\n";
    }
    cout<<"\n\n";
}

int main()
{
    int n;
    cout<<"Enter total number of product : ";
    cin>>n;
    cout<<"\n";
    product p1[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter product name:";
        cin>>p1[i].p_name;

        cout<<"Enter product id:";
        cin>>p1[i].p_id;

        cout<<"Enter product catagory:";
        cin>>p1[i].p_catagory;

        cout<<"Enter product price:";
        cin>>p1[i].price;
        cout<<"\n";
    }


    bubbleSort(p1,n);
    cout<<"After bubble sort :"<<"\n";
    showdetails(p1,n);

    selectionSort(p1,n);
    cout<<"After selection sort :"<<"\n";
    showdetails(p1,n);

    return 0;
}
