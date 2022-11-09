#include <stdio.h>
int main()
{
    int n, i,k;
    int arr[n];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (int i=1+k; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }

    for (int i=1; i <=k; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
