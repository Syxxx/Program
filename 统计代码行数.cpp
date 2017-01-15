#include <stdio.h>
int main() 
{
	freopen("code.txt","r",stdout);
	freopen("line.txt","w",stdout);
    FILE *fp=NULL;  
    char c;  
    int line=0; 
    fp=fopen("code.txt", "r"); 
    while((c=fgetc(fp))!=EOF) 
    { 
        if(c=='\n') 
		line++;   
    } 
    fclose(fp);   
    printf("共有%d行\n", line+1); //末行 
    return 0; 
}
