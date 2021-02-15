#include<stdio.h>

int main()
{
    int a[6],temp,i,j;

    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("result\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
}
