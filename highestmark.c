#include <stdio.h>
int main()
{
    int i,n,x;
    scanf("%d",&n);
    int ara[107];
    x=ara[0];
    for( i=0 ; i<n ; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(int i=0; i<n ; i++)
    {
        if(ara[i]>x)
        {
            x=ara[i];
        }
    }
    for(int i=0; i<n ; i++)
    {
        ara[i]=x-ara[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
