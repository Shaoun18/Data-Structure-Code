#include<stdio.h>

int main()

{
    int n,i,j,result;

    scanf("%d", &n);

    result = 0;

    for(i=0;i<n;i++)
        for(j = 0;j<n;j++)
    {
        result = result +1;
    }

    for(i=0;i<n;i++)
    {
        result = result +1;
    }

    printf("n = %d,result = %d\n", n,result);

    return 0;
}



