/**
---------------------Zero Sum--------------------
-------------------------------------------------

Question:-
----------

Given an array of Integer A and find a sub array with 0 sum.

Test case 1:-   A[]=[3,-2,1,-4,2,7,6]
Output:- true

Test case 2:-   A[]=[2,4,5,6,-9]
Output:- false
------------------------------------------------

---------------------Brute Force----------------

1. for loop i=0,i=n
2.      for loop j=i,j=n
3.          sum=sum+a[j]
            if(sum==0)
                find-sub-array=true;
                break;

Time complexity = O(n*n)

------------------------------------------------

--------------------Optimized-------------------



*/


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{

    int n,i, sum=0;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }

    unordered_map<int,int> mp;

    int find_sub=0;

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];

        if(sum==0)
            find_sub=1;
        else
        {
            if(mp[sum]>0)
            {

                find_sub=1;
            }
            else
                mp[sum]++;

        }
    }

    if(find_sub==1)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
