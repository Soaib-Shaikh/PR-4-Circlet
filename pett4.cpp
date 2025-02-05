#include<iostream>
using namespace std;

//          5
//        4 5 4
//      3 4 5 4 3
//    2 3 4 5 4 3 2
//  1 2 3 4 5 4 3 2 1


int main()
{
    int i,j,k;

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
            if(j<i)
            { 
                cout<<"  ";
            }
            else
            {
                cout<<j<<" ";
            }
        }
        for(k=4;k>=1;k--)
        {
            if(k<i)
            {
                cout<<" ";
            }
            else
            {
                cout<<k<<" ";
            }

        }

        cout<<endl;
    }

    return 0;
}