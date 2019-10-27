#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,k;
    cout<<"Enter the value:";
    cin>>n;
    cout<<"Enter the first matrix R1:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the second matrix R2:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Find matrix the intersection of R1 and R2:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==b[i][j])
            {
                cout<<"\t"<<a[i][j];
            }
            else
            {
                cout<<"\t"<<"0";
            }
        }
        cout<<endl;
    }
    cout<<"Find matrix the union of R1 and R2:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]==b[i][j])
                {
                    cout<<"\t"<<a[i][j];
                }
                else
                {
                    if(a[i][j]==0)
                    {
                        cout<<"\t"<<b[i][j];
                    }
                    else
                    {
                        cout<<"\t"<<a[i][j];
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

