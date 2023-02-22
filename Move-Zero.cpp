/**
-----------------------Move Zero---------------

-----------------------------------------------

Question:-
----------
Moves Zeroes to the end of the array.
Do not change the sequence of other elements.

Test case 1:- A[]=[3,0,0,1,0]
Output:-    [3,1,0,0,0]

Test case 2:- A[]=[1,0,5,0,0,3]
Output:-    [1,5,3,0,0,0]
-----------------------------------------------

Brute Force Approach :-
-----------------------

1. Create a temporary array with same size as that of given array.
2. Start a for loop and copy the non zero elements from the original
    array to the temporary array.
3. Then copy the 0's from original array to temporary array.
4. Finally copy the newly created array to Original Array.


Time Complexity-O(n)
Space Complexity-O(n)

-----------------------------------------------

Optimized Approach:-
--------------------

1. Initialize the array.
2. count =0
3. for loop i=0 - i<size
      if array[i]!=0
            array[count]=array[i]

4. while count<n
        array[count]=0

5. Print the new array.


Time complexity= O(n)
Space complexity = O(1)

*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{

    int n,i;
    cout<<"Enter the number of elements in The array"<<endl;
    cin>>n;
/// A counter is used to bring non zero elements to left of array
    int a[n];
    int count=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
/// Bringing the non zero elements to the left of the array.
    for(i=0;i<n;i++)
    {

        if(a[i]!=0)
        {
            a[count]=a[i];
            count++;
        }
    }
/// Filing the remaining array with 0's
    while(count<n)
    {

        a[count]=0;
        count++;
    }
///Printing The Array
    for(i=0;i<n;i++)
        cout<<" "<<a[i];


    return 0;
}
