#include<stdio.h>
int *linear_search(int arr[],int n,int item)
{
    int i,loc=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]==item)
        {
            loc=i;
            return loc;
        }
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
    m=linear_search(array,n,item);
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

