///Program to find intersection between two Arrays.

#include<iostream>

using namespace std;

bool intersection(int x, int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        if(x==arr[i])
            return true;
    }
    return false;
}

int main()
{
    int arr1[100],arr2[100],arr_intersect[100],c=0,m,n,i;
    cout<<"Enter the number of elements for FIRST array "<<endl;
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>arr1[i];

    }

    cout<<"Enter the number of elements for SECOND array "<<endl;
    cin>>m;
    for( i=0;i<m;i++)
    {
        cin>>arr2[i];

    }

    for(i=0;i<n;i++)
    {
        if(intersection(arr1[i],arr2,m))
            arr_intersect[c++]=arr1[i];
    }

    cout<< "Intersected Elements"<<endl;
    for( i=0;i<c;i++)
    {
        cout<<arr_intersect[i]<< " ";

    }
    return 0;
}
