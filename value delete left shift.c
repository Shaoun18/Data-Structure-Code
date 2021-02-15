#include<stdio.h>
int *value_delete(int arr[],int n,int k)
{
    int i,item;
    item=arr[k];

    for(i=k;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return arr;
}



int main()
{
    int array[10]={0,0,0,0,0,0,0,0,0,0};
    int *m,i,n,k,item;
    printf("Enter Your Array Size: ");
    scanf("%d",&n);
    printf("Enter Your Value: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter Your Location: ");
    scanf("%d",&k);
    m=value_delete(array,n,k);
    printf("Output.\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",*m);
        *m++;
    }
}




