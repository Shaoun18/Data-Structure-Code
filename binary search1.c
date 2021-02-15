#include<stdio.h>
int *binary_search(int a[],int n,int x)
{
    int left,right,mid,i;
    left= 0;
    right = n - 1;
    while(left<=right)
    {
        mid=(left+right)/2;

        if(a[mid]== x)
        {
            return mid;
        }
        if(a[mid] < x)

        {
            left=mid+1;
        }
        else
        {
            right = mid - 1;
        }
    return -1;
    }
}

int main()
{
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    int *m,x,i,n;
    printf("Enter Your Array Size: ");
    scanf("%d",&n);
    printf("Enter Your Value: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Your Item: ");
    scanf("%d",&x);
    m=binary_search(a,n,x);
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
