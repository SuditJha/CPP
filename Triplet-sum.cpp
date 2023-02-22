///----------Triplet Sum--------------

/**
------Question----------
Given an Array A[] and an integer sum. Find the triplet of the array
with a given sum.

Test Case 1: A[]=[2,14,7,5,3]       sum=22
Output: 14 5 3

Test Case 2: A[]=[-3,6,18,4,2]      sum=19
Output: -3 18 4
*/

/**
------------------Brute Force-------------
Using Three nested loop.

Time Complexity -- O(n*n*n)
*/

/**
-----------------Optimized Approach-----------
1. Sort The given array.
2. Start for loop from 1st Element of array.
3. Initialise L,R
        L=i+1   R=n-1
    result=A[i]+A[L]+A[R]
    while(L>H)
        if result<sum
            L++
        else if result>sum
            R++
        else
            print A[i],A[L],A[R]

Time Complexity - O(n*n)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    cout<<"Enter a Length of Array : ";
    cin>>n;

    int a[n];
    cout<<"\nEnter Array elements"<<endl;
    for (int i=0;i<n;i++)
        cin>>a[i];

    int l=0,r=n-1,i,result=0,f=0;

    cout<<"Enter the Sum : ";
    int sum;
    cin>>sum;


    for (i=1;i<n;i++)
    {
        while(l<r)
        {
            result=a[i]+a[l]+a[r];
            if(result<sum)
                l++;
            else if(result>sum)
                r--;
            else
            {
                f=1;
                cout<<a[i]<<" "<<a[l]<<" "<<a[r];
                break;
            }
        }
        if(f==1)
            break;
    }

    if(f==0)
        cout<<"Sum Not Present"<<endl;

    return 0;

}
