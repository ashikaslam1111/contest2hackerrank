#include<stdio.h>
int main()
{
    int n,k, i,x;
    int arr[100];
    scanf("%d",&n);
    scanf("%d",&k);
    x=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]<k)
        {
            x++;
        }
    }
    printf("%d",x);
    return 0;
}
