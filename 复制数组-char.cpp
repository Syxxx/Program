/*把数组A的内容复制到数组B中*/
/*char型*/ 
#include <stdio.h>
#include <string.h>
#define N 5
int main()
{
	char a[N],b[N];
	gets(a); 
	strcpy(b,a);
	puts(b);
	return 0;
}
