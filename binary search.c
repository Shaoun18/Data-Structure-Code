#include<stdio.h>
int *binary_search(int arr[],int n,int item)
{
    int i,loc=0,beg=1,end=n,mid=(beg+end)/2;
    while(beg<=end)
    {
        if(item<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(arr[mid]==item)
    {
        loc=mid;
        return loc;
    }
    return loc;
}

int main()
{
    int array[10]={0,0,0,0,0,0,0,0,0,0};
    int *m,i,n,item;
    printf("Enter Your Array Size: ");
    scanf("%d",&n);
    printf("Enter Your Value: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter Your Item: ");
    scanf("%d",&item);
    m=binary_search(array,n,item);
    printf("Output.\n");
    if(m==0)
    {
        printf("Value Not Found.");
    }
    else
    {
        printf("Value Location Is : %d",m);
    }
}


