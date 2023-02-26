
/**
------------------Negative decimal to Binary-----------
1. Convert The Negative number to Positive number.
2. find the 2's Complement of the Number.


*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    ///-------Failed-------
    n=abs(n);
    int answer=0,bit,i=0;
    while(n!=0)
    {
        bit=n&1;
        cout<<bit<<endl;
        //bit=!bit;
        cout<<bit<<endl;;
        answer=(bit*pow(10,i))+answer;
        n=n>>1;
        i++;
    }
    //answer=answer|1;
    cout<<answer;
    return 0;
}
