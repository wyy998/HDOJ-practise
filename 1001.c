#include<stdio.h>

int main(void)
{
    int n,i;
    int sum;
    while( scanf("%d",&n) != EOF)
    {
        sum = 0;
        for( i=1; i<=n; ++i)
        {
            sum += i;
        }
        printf("%d\n\n",sum);
    }

    return 0;
}