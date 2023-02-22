/**
Program to Print Number of trailing Zeroes in N!
*/

//Brute Force Method--Finding the factorial
//and then dividing it by 10 till f%10!=0.
//Cons-- factorial of large numbers is
//inefficient. Also Integer overload possible.

/**
-----------Optimized Method-------------
The Number of trailing zeroes in the factorial of a
number is due to the multiplication of the prime factors
(2,5).
If we find the minimum between the Numbers of factors
of 2 and 5 we will get the number of trailing zeroes.

As the number of 5 is always less than the number of 2's
in the factorial, We can get the number of trailing 0's
after finding the number of factors of 5 in the number.
*/

/**
-------Time Complexities----------
--Optimised-O(n)
*/

#include<iostream>
using namespace std;
int main()
{

    int n;//Input Variable
    cout<<"Enter A Number"<<endl;
    cin>>n;


/**
    int f=1;

    for(int i=1;i<n;i++)
    {
        f=f*i;
    }
*/

    int number_of_zeroes=0,q;
// To find the number of 5's in the number.
    while(n!=0)
    {
        q=n/5;
        number_of_zeroes=number_of_zeroes+q;
        n=n/5;
    }
    cout<<"Number Of Zeroes : "<<number_of_zeroes<<endl;

    return 0;
}
