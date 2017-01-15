    /*查找整数数组A中有没有5*/
    #include <stdio.h>
    #define N 5
    int main()
    {
    	int a[N],i;
    	for (i=0;i<N;i++)
    	    scanf("%d",&a[i]);
    	for (i=0;i<N;i++)
    	{
    		if (a[i]==5)
    		{
    			printf("Yes");
    			break;
    		}
    	}
    	if (i==N)
    		printf("No");
    	return 0;
    }
