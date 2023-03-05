/**
Method 1:-
Compare with all powers of 2 with number .
e.g
x=1
for(i=0;i<31;i++)
    x=x*2;
    if x==n
    true
    else false


Method 2:-
If number of set bit in a number is 1 the it is a power of 2.
e.g
00000000000000000000000000000001 = 1 = 2^0
00000000000000000000000000000010 = 2 = 2^1
00000000000000000000000000000100 = 4 = 2^2
00000000000000000000000000001000 = 8 = 2^3
.
.
.
01000000000000000000000000000000 = 2^30
*/
#include<iostream>

using namespace std;

int main()
{
    int n,set_bits=0;
    cin>>n;

    while(n!=0)
    {
        int bit=n&1;
        if (bit==1)
            set_bits++;
        n=n>>1;
    }

    if(set_bits==1)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
