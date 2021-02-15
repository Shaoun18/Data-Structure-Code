#include<stdio.h>
int *value_change(int arr[],int n)
{
    int i;
    for(i=2;i<5;i++)
    {
        arr[i]=i;
    }
    return arr;
}



int main()
{
    int array[10]={0,0,0,0,0,0,0,0,0,0};
    int *m,i,n;
    printf("Enter Your Array Size: ");
    scanf("%d",&n);
    printf("Enter Your Value: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    m=value_change(array,n);
    printf("Output.\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*m);
        *m++;
    }
}
