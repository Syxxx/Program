/*������A�����ݸ��Ƶ�����B��*/
/*int��*/ 
#include <stdio.h>
#define N 5
int main()
{
	int a[N],b[N];
	int i;
	for (i=0;i<N;i++)
	    scanf("%d",&a[i]);
	for (i=0;i<N;i++)
	{
		b[i]=a[i];
	}
		for (i=0;i<N;i++)
	    printf("%d ",b[i]);
	return 0;
}
