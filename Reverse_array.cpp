#include<iostream>

using namespace std;

void reverse(int arr[],int n)
{

    for(int i=0;i<n/2;i++)
    {
        int t=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=t;
    }
}

int main()
{

    int arr[100];
    int n;
    cin>>n;
    cout<<"Array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    reverse(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}
