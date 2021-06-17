#include<stdio.h>

void bubble_sort(int arr[],int n)
{
	int r,temp,i;
	for(r=1;r<=n-1;r++)
	for(i=0;i<=n-1-r;i++)
	if(arr[i]>arr[i+1])
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
}
int main()
{
	int i,n,arr[10];
	printf("enter the number of elements:\n");
	scanf("%d",n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
    scanf("%d",&arr[i]);
}
    bubble_sort(arr,n);
    printf(" the elements are:\n");
	for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
	
}
