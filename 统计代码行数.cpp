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
    printf("����%d��\n", line+1); //ĩ�� 
    return 0; 
}
