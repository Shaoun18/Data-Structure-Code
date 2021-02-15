#include<stdio.h>
int *selection_sort(int arr[],int n)
{
    int i,j,temp,min;
    for(i=1;i<=n;i++)
    {
        min=i;
        for(j=i+1;j<=n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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
    m=selection_sort(array,n);
    printf("Output.\n");
    for(i=1;i<=n;i++)
    {
        *m++;
        printf("%d\n",*m);
    }
}
