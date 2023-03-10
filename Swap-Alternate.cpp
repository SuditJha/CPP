#include<iostream>

using namespace std;

void swap_alternate(int a[], int n )
{
    int i=0;
    ///while(i<n-1)
    ///{
       /// int t=a[i];
     ///   a[i]=a[i+1];
   ///     a[i+1]=t;
///
   ///     i+=2;
///    }

    for(i=0;i<n-1;i+=2)
    {
        swap(a[i],a[i+1]);
    }
}

void print_Array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()

{
    int a[100],i,n;
    cout<<"Enter Size"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    swap_alternate(a,n);
    print_Array(a,n);
}
