
 // Time complexity for binarySearch = order(log N)


#include <stdio.h>

int binarySearch(int a[],int n,int k)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if (a[mid]==k)
        {
            return mid;
        }
        else if(a[mid]<k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[10],i,n,k;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The %d numbers are: ",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter number which you want to search: ");
    scanf("%d",&k);
    int result = binarySearch(a,n,k);
    if (result == -1)
    {
        printf("%d is not present in the array",k);
    }
    else
    {
        printf("The number %d is present at index %d ",k,result);
    }
    return 0;
}