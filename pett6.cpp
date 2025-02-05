#include<iostream>
using namespace std;

// * * * * * * *
// * 
// *
// * * * * * * *
//             *
//             *
// * * * * * * *
int main()
{
    int i,j;
    int n=7;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n/2 || i==n-1)
            {
                cout<<"* ";
            }
            else if (i < n/2 && j==0)
            {
                cout<<"* ";
            }
            else if (i > n/2 && j==n-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;

    }

    return 0;
}