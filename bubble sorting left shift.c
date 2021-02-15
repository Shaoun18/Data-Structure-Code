#include<stdio.h>
int *bubble_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>1;j--)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
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
    m=bubble_sort(array,n);
    printf("Output.\n");
    for(i=1;i<=n;i++)
    {
        *m++;
        printf("%d\n",*m);
    }
}
