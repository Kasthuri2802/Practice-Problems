# include <stdio.h>

int transitionPoint(int a[],int n)
{
    int left = 0;
    int right = n-1;
    int flag = 0;
    if(n==1 && a[0]==0)
    {
        return -1;
    }
    while(left<=right)
    {
        int mid = (left + right)/2;
        if(a[mid]==1 && a[mid-1]==0)
        {
            return mid;
        }
        else if (a[mid]==1 && a[mid-1]==1)
        {
            flag = 1;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    if(flag==0)
        {
            return -1;
        }
}
int main ()
{
    int a[10],i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered numbers are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int result = transitionPoint(a,n);
    if(result==-1)
    {
        printf("\nThere is no transition point in the array");
    }
    else
    {
        printf("\nThere is transition point at the index %d",result);
    }
    return 0;

}