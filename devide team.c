#include <stdio.h>
int main()
{
    int num, k;
    scanf("%d", &num);
    int ara1[num], ara2[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &ara1[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i < num; i++)
    {
        ara2[i] = ara1[k + i];
    }
    for (int i = 0; i < k; i++)
    {
    ara2[(num - k) + i] = ara1[i];
    }
    for (int i = 0; i < num; i++){
        printf("%d ", ara2[i]);}
    return 0;
}
