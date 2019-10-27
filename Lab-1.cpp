#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[10],cn=0;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("A={");
    for(i=1;i<=n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\b}");
    printf("\n");

    printf("R1={");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[j]%a[i]==0)
            {
                printf("(%d,%d),",a[i],a[j]);
                cn++;
        }
    }
  }
  printf("\b}");
  printf("\n");

  printf("count = %d\n",cn);

  printf("R2={");
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      {
          if(a[j]>a[i])
          printf("(%d,%d),",a[i],a[j]);

      }
  }
  printf("\b}");
  printf("\n");
  return 0;

}

