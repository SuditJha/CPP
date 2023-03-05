/// Program to find maximum and minimum from an array

/**
Inbuilt max(),min() functions in c++ can be used to
find max/min between two values.
*/

/**
When we pass An array as a parameter , we send the
----ADDRESS---- of the first element of the array.

i.e.

PASS BY REFERENCE occurs when passing an array.

*/

#include<iostream>
using namespace std;

int get_max(int num[], int n)
{
    int maxi= INT_MIN;

    for(int i=0;i<n;i++){
        maxi=max(maxi,num[i]);
       /// if(num[i]>max)
         ///   max=num[i];
    }
    return maxi;
}

int get_min(int num[], int n)
{
    int mini= INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
       /// if(num[i]<min)
         ///   min=num[i];
    }
    return mini;
}
///Sum of elements of array.

int sum_array(int num[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+num[i];

    }
    return s;
}

int main()
{
    cout<<"Size"<<endl;
    int size;
    cin>>size;

    int num[100];
    cout<<"Enter " << size <<" Elements "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>num[i];

    }

    ///cout<<"Max Value is : "<<get_max(num,size)<<endl;
    ///cout<<"Min Value is : "<<get_min(num,size)<<endl;
    cout<<"Sum is: "<<sum_array(num,size)<<endl;
    return 0;
}


