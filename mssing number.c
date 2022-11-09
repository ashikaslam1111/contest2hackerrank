
#include <stdio.h>
int main()
{
    int T,S,A,B,C,sum=0;
    scanf("%d",&T);
    for(int i = 0 ; i  < T ; i++)
    {
        scanf("%d%d%d%d",&S,&A,&B,&C);
        sum = S-(A+B+C);
        printf("%d\n",sum);
    }
    return 0;
}







