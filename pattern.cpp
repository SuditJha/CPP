/**
1 2 3
1 2 3
1 2 3
*/

#include<iostream>
using namespace std;

int i,j,k;

/**
Pattern 1:-

1 2 3
1 2 3
1 2 3

*/


void pattern1()
{
    for(i=1;i<4;i++)
    {
        for (j=1;j<4;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

/**
Pattern 2:-

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/

void pattern2(int n)
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j+i-1<<" ";
        }
        cout<<endl;
    }
}

/**
Pattern 3:-

1234554321
1234**4321
123****321
12******21
1********1


*/

void pattern3(int n)
{
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
            cout<<j;
        for(j=1;j<=2*(n-i);j++)
            cout<<"*";
        for(j=i;j>0;j--)
            cout<<j;
        cout<<endl;

    }
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    pattern1();
    cout<<endl;
    pattern2(n);
    cout<<endl;
    pattern3(n);
    return 0;
}
