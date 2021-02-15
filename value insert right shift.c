#include<stdio.h>
int *value_insert(int arr[],int n,int k,int item)
{
    int i;
    for(i=n;i>=k;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[k]=item;
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
    printf("Enter Your Item: ");
    scanf("%d",&item);
    m=value_insert(array,n,k,item);
    printf("Output.\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",*m);
        *m++;
    }
}

