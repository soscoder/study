//������������������ý��в��Ե����ӡ����磺
#include <stdio.h>
void fun(char str[]);
int main()
{

  char str[20];

  scanf("%s",str);
 fun(str);
  printf("%s", str);

  return 0;

}

/* ����������д�� */
int my_strlen(const char* str){
	int count=0;
//	assert(str!=NULL);
	while(*str!='\0')
	{
		count++;str++;
	} 
	return count;
}
void fun(char str[]){
	int len=my_strlen(str);
	int i=0,j=0;
	char t='0';
	for(i=0;i<len;i++){
		t=str[i];
		for(j=i+1;j<len;j++){
			if(str[j]==t)str[j]='\0';
		}
	}
	for(i=0;i<len;i++){
		if(str[i]!='\0')printf("%c",str[i]);
	}
	str[0]='\0';//����������J������������������  
}

