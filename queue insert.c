#include<stdio.h>
int *arraypass(int arr[],int maxstk,int*rear,int value)
{
    int i;
    if(*rear==maxstk)
    {
        printf("overflow.\n");
        return arr;
    }
    *rear=*rear+1;
    arr[*rear]=value;
    return arr;
}
int main()
{
    int *p,n;
    int i,rear,item,max=10;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};

     printf("Rear:");
     scanf("%d",&rear);
     for(i=1;i<=3;i++)
     {
      printf("enter the value to be inserted: ");
     scanf("%d",&item);
     p=arraypass(arr,max,&rear,item);
     }
     printf("INSERT\nRear in main=%d\n", rear);
     for(i=1;i<10; i++)
     {
        *p++;
        printf("in main array[%d] =%d\n",i,*p);
     }
}
