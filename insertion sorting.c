#include<stdio.h>

int main()
{
    int a[6],temp,i,j,item;

    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<6;i++)
    {
        item = a[i];
        j = i - 1;
        while(j>=0 && a[j] > item)

        {
                a[j+1] = a[j];
                j = j - 1;
        }
        a[j+1] = item;
    }
    printf("result\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
}
