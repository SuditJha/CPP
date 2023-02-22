/** --------Question----------
Given an array of integers A[] and an integer sum.Find a pair in the array
with the given sum.
Test case:
A[]=[3,6,1,2,8]     sum = 14
Output:     6 8
*/

/**
----------------Brute Force---------------
Starting from first element and finding the sum with every other element
A[]=[....]
n-array length
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
        {
        if(a[j]+a[i]==sum)
            print(a[i],a[j])
        }
}

Time Complexity-- O(n*n)
*/

/**


-------------------Optimised---------------
1. Sort the array
2.Use Two pointer technique.
Two pointer - A left pointer pointing leftmost element and a right
pointer pointing rightmost element.
3.Add the left and right
4. if left+right > required sum
        right--
    if left+right<required sum
        left++
    if left+right==required sum
        print a[left],a[right]
    if left===right
        Not found

5.Repeat 4 till left==right.
6.End

Time Complexity--O(n)

*/

/**
------------------Note-----------------
sort()-A function in stl library of c++ programmng language.
        It returs a sorted array.
        */


#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    int n,sum;

    cout<<"Enter length of array"<<endl;
    cin>>n;

    int a[n];//array declaration

    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter Sum"<<endl;
    cin>>sum;

    sort(a,a+n); ///this function returns a sorted array.
    int l=0,r=n-1;

    while(l<r)
    {
        if(a[l]+a[r]==sum)
        {
            cout<<a[l]<<" "<<a[r]<<endl;
            break;
        }
        else
        {
            if((a[l]+a[r])>sum)
                r--;
            else
                l++;
        }
    }
    return 0;
}
