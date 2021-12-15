#include<stdio.h>
int main(){
	int i=0,m=0,count=0;
	scanf("%d",&m);
	if(m<=1)printf("ERROR£¡");
	else {
		if(m<35)printf("NOT FOUND£¡");
		else {
			for(i=35;i<=m;i++){
				if(i%5==0&&i%7==0){
					printf("%5d",i);
					count++;
					if(count%5==0)printf("\n");
					
				}
			}
		}
	}
	return 0;
}
