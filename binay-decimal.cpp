
/**
 --------------------Decimal to binary----------------
 x>>1 .... is same as x/2.....it removes one bit from right
 n&1=0(for even....last bit & 1=0.1=0)
 n&1=1(for odd)
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int answer=0,i=0;
    while(n!=0)
    {
        int bit=n&1;
        answer=(bit*pow(10,i))+answer;
        n=n>>1;
        i++;
    }
    cout<<answer<<endl;
///-----------Binary to Decimal----------
    int ans=0;
    i=0;
    while(answer!=0)
    {
        int bit=answer%10;
        if(bit==1)
            ans=ans+pow(2,i);
        i++;
        answer=answer/10;
    }

    cout<<ans;
    return 0;
}
