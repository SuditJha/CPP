/// Pair Sum i.e sum of two elements is equal to target in an array.
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void pair_sum(int arr[],int n, int target)
{
    int l=0,i,r=n-1,f=0;
    while(l<r)
    {
        int s=arr[l]+arr[r];
        if(s>target)
            r--;
        else if(s<target)
            l++;
        else
        {
            f=1;
            cout<<arr[l]<<" "<<arr[r]<<endl;
            break;
        }

    }
    if(f==0)
        cout<<"Not Found";
}

int main()
{

    cout<<"Enter the size of Array"<<endl;
    int n,arr[100],i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    sort(arr,arr+n);
    int target;
    cout<<"Target"<<endl;
    cin>>target;
    pair_sum(arr,n,target);
    return 0;
}
