/**
---------------------Equilibrium Index-----------------------
-------------------------------------------------------------

Question:-
----------
Given an Array of Integers A[] find the equilibrium index in
given array.

Test case 1:-   [-3,7,0,5,3,1]
Output:- 3

Test Case 2:-   [7,1,10,0,12,2,32]
Output:- -1
-------------------------------------------------------------

------------------------Brute Force--------------------------
A[n];
for loop i=0,i=n
    for loop j=0,j<i
        sum_Lhs=sum_Lhs+a[j]
    for loop k=i+1,k<n
        sum_rhs=sum_rhs+a[k]

    if(sum_Lhs=sum_rhs)
        print i
        break

Time Complexity = O(n*n)

------------------------------------------------------------

-----------------------Optimized----------------------------
Time Complexity = O(n)

*/


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;

    cout<<"Ente length of array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
                sum=sum+a[i];

    }

    int lhs_sum=0,rhs_sum=0,flag=0;

    for(int i=0;i<n;i++)
    {
        sum=sum-a[i];
        if(lhs_sum==sum)
        {
            cout<<i<<endl;
            flag=1;
            break;
        }
        else
        {
            lhs_sum=lhs_sum+a[i];
        }

    }

    if(flag==0)
        cout<<"-1";
    return 0;
}
