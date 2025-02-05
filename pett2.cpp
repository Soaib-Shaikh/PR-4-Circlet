#include<iostream>
using namespace std;

//  11
//  12 13
//  14 15 16
//  17 18 19 20


int main()
{
    int i,j,n,num=11;

    cout<<"Enter numbers of rows: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }

        cout<<endl;
    }

    return 0;
}