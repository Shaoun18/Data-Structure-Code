#include<stdio.h>
int *arraypass(int arr[],int maxstk,int*front)
{
    int i;
    if(*front==maxstk+1)
    {
        printf("Underflow.\n");
        return arr;
    }
    arr[*front]=0;
    *front=*front+1;
    return arr;
}
int main()
{
    int *p,n;
    int i,front,item,max=5;
    int arr[6]={0,0,0,0,0,0};

    for(i=1;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    front=1;
     for(i=1;i<=6;i++)
     {
     p=arraypass(arr,max,&front);
     }
     printf("Delete\nfront in main=%d\n", front);
     for(i=1;i<=5;i++)
     {
        *p++;
        printf("in main array[%d] =%d\n",i,*p);
     }
}

