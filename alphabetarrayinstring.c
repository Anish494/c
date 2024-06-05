#include <stdio.h>
#include <string.h>
int main() {
    char ch[50],tem;
    int i, j;
 	printf("\n Enter a string that you want to be arranged in alphabetical order : ");
 	gets(ch);
 	int slen = strlen(ch);
 	for (i = 0; i < slen - 1; i++) {
   		for (j = i + 1; j < slen; j++) {
     		if (ch[i] > ch[j])
             {
       			tem = ch[i];
       			ch[i] = ch[j];
       			ch[j] = tem;
     		}
   		}
 	}
    printf("The string after operation is ::\n");
 	puts(ch);
 	return 0;
}