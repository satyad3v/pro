#include <stdio.h> 
#include <string.h>

  

int main() 
{
	FILE *fp = fopen("satya.txt", "r"); 
	char buff[100], word[100];
	int count=0;
	
	scanf("%s", word);
	
	while(fscanf(fp, "%s", buff) != EOF ){
		if(strcmp(buff, word)==0)
		count++;
	}
	printf("No. of Occurrence is %d\n", count);
	fclose(fp);
  
  return 0; 
} 