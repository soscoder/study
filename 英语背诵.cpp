#include<stdio.h>
#include<string.h>
int main(){
	int a=1;
	printf("%d",a=++a);
//	acid
	printf("acid");
	char acid[5] = {'a','c','i','d',};
	char acid2[] = "ËáµÄ";
	char answerfx[15],answerfx2[15];
	scanf("%s %s",&answerfx,&answerfx2);
	fflush(stdin);
	if (strcmp(answerfx,acid)==0||strcmp(answerfx2,acid2)==0) {
		printf("<(£þ¦á£þ)¨J[GO!]\n");		 
	}
	else {
		printf("wrong\n"); 
	}
	return 0;
}
