#include<stdio.h>
#include<string.h>
int main()
{
	char answer;
	char answerfx[30];
//	ln(1+x)
	printf("ln(1+x)的等价无穷小为：");
	scanf("%c",&answer);
	fflush(stdin);
	if(answer=='x'){
		printf("right\n");
	}
	else{
		printf("wrong\n");
	}
//	e^x-1
	printf("e^x-1的无穷小为：");
	scanf("%c",&answer);
	fflush(stdin);
	if (answer=='x'){
			printf("right\n");
	}
	else{
		printf("wrong\n");
	}
//	a^x-1
	printf("a^x-1的等价无穷小为；");
	scanf("%s",&answerfx);
	fflush(stdin);
	char fx[5] = {'x','l','n','a'};
	char xlna1[20] = {'x','*','l','n','a'};
	char lnax[20] = {'(','l','n','a',')','*','x'};
	char xlna2[20] = {'(','l','n','a',')','x'};
	if(strcmp(fx,answerfx)==0||strcmp(answerfx,xlna1)==0||
	strcmp(answerfx,lnax)==0||strcmp(answerfx,xlna2)==0) {
		printf("right\n");
	}
	else {
		printf("wrong\n");
	}
//	[(1+x)^a]-1
	printf("[(1+x)^a]-1的等价无穷小为；");
	scanf("%s",&answerfx);
	fflush(stdin);
	char ax[3] = {'a','x'};
	char xa[10] = {'x','a'};
	if (strcmp(answerfx,ax)==0||strcmp(answerfx,xa)==0) {
		printf ("right\n");
	}
	else {
		printf("wrong\n"); 
	}
//	arctanx
	printf("arctanx的等价无穷小为；");
	scanf("%c",&answer);
	fflush(stdin);
	if (answer='x') {
		printf("right\n");
	}	
	else {
		printf("wrong\n");
	} 
//	[(1+x)^(1/n)]-1
	printf("[(1+x)^(1/n)]-1的等价无穷小为；");
	scanf("%s",&answerfx);
	fflush(stdin);
	char fx2 [7] = {'(','1','/','n',')','x'};
	char fx3[10] = {'x','(','1','/','n',')'};
	if (strcmp(fx2,answerfx)==0||strcmp(answerfx,fx3)==0) {
		printf("right\n");
	}
	else {
		printf("wrong\n");
	}
	printf("导数环节\n");
	printf("（tan x）的导数为；");
	scanf("%s",answerfx);
	fflush(stdin);
//	tan
	char tand[7] = {'s','e','c','^','2','x'};
	char tan2[15] = {'(','s','e','c','x',')','(','s','e','c','x',')'};
	char tan3[15] = {'(','s','e','c','x',')','*','(','s','e','c','x',')'};
	char tan4[15] = {'s','e','c','x','s','e','c','x',')'};
	if (strcmp(answerfx,tand)==0||strcmp(answerfx,tan2)==0||
	strcmp(answerfx,tan3)==0||strcmp(answerfx,tan4)==0) {
		printf ("right\n");
	}
	else {
		printf ("wrong\n");
	}
//	sec
	printf ("(sec x)的导函数为；");
	char secd[9] = {'s','e','c','x','t','a','n','x'};
	char secd2[10] = {'t','a','n','x','s','e','c','x'};
	scanf ("%s",&answerfx);
	fflush(stdin);
	if(strcmp(answerfx,secd)==0||strcmp(answerfx,secd2)==0) {
		printf ("right\n");
	} 
	else {
		printf ("wrong\n");
	}
//	arcsin
	printf ("(arcsin x)的导数；");
	char asd[30] = {'1','/','(','1','-','x','^','2',')','^','(','1','/','2',')'};
	char asd2[35] = {'1','/','[','(','1','-','x','^','2',')','^','(','1','/','2',')',']'};
	char asd3[30] = {'1','/','(','1','-','x','^','2',')','^','0','.','5'};
	char asd4[30] = {'1','/','[','(','1','-','x','^','2',')','^','0','.','5',']'};
	scanf ("%s",&answerfx);
	fflush(stdin);
	if (strcmp(answerfx,asd)==0||strcmp(answerfx,asd2)==0||
	strcmp(answerfx,asd3)==0||strcmp(answerfx,asd4)==0) {
		printf ("right\n");
	}
	else {
		printf ("wrong\n");
	}
//	arctan
	printf("(arctan x)的导数为:");
	scanf("%s",&answerfx);
	fflush(stdin);
	char art[20] = {'1','/','(','1','+','x','^','2',')'};
	char art2[20] = {'1','/','[','1','+','x','^','2',']'};
	if (strcmp(answerfx,art)==0||strcmp(answerfx,art2)==0) {
		printf("right\n");
	}
	else {
		printf ("wrong\n");
	}
//	cot
	printf("(cot x)的导数；");
	scanf("%s",&answerfx);
	fflush(stdin);
	char cot[20] = {'-','c','s','c','^','2','x'};
	char cot2[20] = {'-','c','s','c','x','c','s','c','x'};
	char cot3[20] = {'-','(','c','s','c','x',')','(','c','s','c','x',')'};
	char cot4[20] = {'(','-',')','(','c','s','c','x',')','(','c','s','c','x',')'};
	if (strcmp(answerfx,cot)==0||strcmp(answerfx,cot2)==0||
	strcmp(answerfx,cot3)==0||strcmp(answerfx,cot4)==0) {
		printf ("right\n");
	}
	else {
		printf("wrong\n");
	}
//	csc
	printf("(csc x)的导数；");
	scanf ("%s",answerfx);
	fflush(stdin);
	char csc[20] = {'-','c','s','c','x','c','o','t','x'};
	if (strcmp(answerfx,csc)==0) {
		printf("right\n");
	}
	else {
		printf ("wrong\n");
	}
//	arcc
	printf("(arccos x)的导数；");
	scanf("%s",&answerfx);
	fflush(stdin);
	char acox[20] = {'-','1','/','(','1','-','x','^','2',')','^','0','.','5'};
	char acox2[20] = {'-','1','/','(','1','-','x','^','2',')','^','1','/','2'};
	char acox3[20] = {'-','1','/','[','(','1','-','x','^','2',')','^','0','.','5',']'};
	char acox4[20] = {'(','-',')','1','/','[','(','1','-','x','^','2',')','^','0','.','5',']'};
	char acox5[20] = {'(','-',')','1','/','[','(','1','-','x','*','x',')','^','0','.','5',']'};
	char acox6[20] = {'(','-',')','1','/','[','(','1','-','x','x',')','^','0','.','5',']'};
	char acox7[20] = {'-','1','/','(','1','-','x','*','x',')','^','1','/','2'};
	char acox8[20] = {'-','1','/','(','1','-','x','x',')','^','1','/','2'};
	char acox9[20] = {'-','1','/','[','(','1','-','x','^','2',')','^','1','/','2',']'};
	if (strcmp(answerfx,acox)==0||strcmp(answerfx,acox2)==0||
	strcmp(answerfx,acox3)==0||strcmp(answerfx,acox7)==0||
	strcmp(answerfx,acox4)==0||strcmp(answerfx,acox8)==0||
	strcmp(answerfx,acox5)==0||strcmp(answerfx,acox9)==0||
	strcmp(answerfx,acox6)==0) {
		printf("right\n");
	}
	else {
		printf ("wrong\n");
	}
//acot
	printf("(artcot x)的导数；");
	scanf ("%s",answerfx);
	fflush(stdin);
	char acot[20] = {'-','1','/','(','1','+','x','^','2',')'};
	char acot2[20] = {'-','1','/','[','1','+','x','^','2',']'};
	if (strcmp(answerfx,acot)==0||strcmp(answerfx,acot2)==0) {
		printf ("right\n");
	}
	else {
		printf ("wrong\n");
	}
	return 0;
}
