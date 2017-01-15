#include <stdio.h>
#define N 5
int a[N],b[N];
void bubblesort() //冒泡排序 从小到大 
{
	int i,j,temp; 
 	for (i=1;i<N;i++)
	{
		for (j=0;j<N-i;j++)
		{
			if (b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	for (i=1;i<=N;i++) 
		printf("%d ",b[i]);
} 
void quicksort(int left,int right) //快排 从大到小 
{
	int i,j,t,temp;
	if (left>right)
	 return;
	temp=a[left];
	i=left;
	j=right;
	while(i!=j)
	{
		while(a[j]>=temp&&i<j)
			j--;
		while(a[j]<=temp&&i<j)
			i++;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[left]=a[i];
	a[i]=temp;
	quicksort(left,i-1);
	quicksort(i+1,right);
}
int main()
{
	int i;
	for (i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	bubblesort();
	printf("\n");
	quicksort(1,N);
	for (i=N;i>0;i--)
		printf("%d ",a[i]); 
	return 0;
 } 
