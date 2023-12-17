// Space complexity = 0(1)
// Time complexity = 0(n^2)

# include <stdio.h>
# include <stdlib.h>

int BubbleSort(int a[],int n)
{
    int i,j,temp,flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("The numbers are already in ascending order");
        exit(0);
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[5],i,n;
    n = printf("Enter number of elements: ");
    scanf("%d",&n);
    for (i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int result = BubbleSort(a,n);
    return 0;
}
