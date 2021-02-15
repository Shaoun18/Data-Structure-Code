#include<stdio.h>
int *insertion_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=n-1;i>=1;i--)
    {
        temp=arr[i];
        for(j=i+1;(j<=n)&&(arr[j]<temp);j++)
        {
            arr[j-1]=arr[j];
        }
        arr[j-1]=temp;
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
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    m=insertion_sort(array,n);
    printf("Output.\n");
    for(i=1;i<=n;i++)
    {
        *m++;
        printf("%d\n",*m);
    }
}


