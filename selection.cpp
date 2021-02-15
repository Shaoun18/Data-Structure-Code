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
        for(j=i+1;j<6;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("result\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
}
