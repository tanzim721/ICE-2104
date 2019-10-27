#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,i,j,a[10],b[10];

    scanf("%d",&n);
    printf("Enter the element A : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    scanf("%d",&m);
    printf("Enter the element B : ");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);

    }
    printf("A={");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\b}");
    printf("\n\n");

    printf("B={");
    for(j=0;j<m;j++)
    {
        printf("%d,",b[j]);
    }
    printf("\b}");
    printf("\n\n");

    printf("R={");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]>b[j])
            {
                printf("(%d,%d),",a[i],b[j]);
            }
        }
    }
    printf("\b}");
    printf("\n\n");

    printf("This relation in the matrix are :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]>b[j])
            {
                printf("\t1");
            }
            else
            {
                printf("\t0");
            }
        }
        printf("\n");
    }

    return 0;
}

