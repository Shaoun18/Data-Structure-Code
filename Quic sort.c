#include<stdio.h>
int main()
{

    int A[10]={8,7,9,6,5,66,2656,2,65,4};
    int i;
    for(i=0;i<=9;i++)
    {
        printf("%d\n",A[i]);

    }
    printf("\n\nFinal Array\n\n");
    qsort(A,0,9);
    for(i=0;i<=9;i++)
    {
        printf("%d\n",A[i]);

    }
    return 0;

}
int partition (int A[10],int p,int r)
{
    int temp, i,j,x;

    x = A[r];
    i = p-1;
    for(j=p;j<=r;j++)
    {
        if(A[j] < x)
        {
                i++;
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
        }
    }
            i++;
            temp = A[i];
            A[i]  = A[r];
            A[r] = temp;
            return i;
}
void qsort(int A[10],int p,int r)
{
    int q;
    if(p<r)
    {
        q = partition(A,p,r);
        qsort(A,p,q-1);
        qsort(A,q+1,r);
    }
}
