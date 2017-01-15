/*把数组A的内容复制到数组B中*/
/*int型*/ 
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
