#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count=0;
	int num=arr[0];
	for(int i=1;i<n;i++)
	{
		if(num!=arr[i])
		count++;
	}
	printf("%d",count);
}
