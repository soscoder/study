#include<stdio.h>
int main(){
	double g=-1;
	while(g<0||g>100){
		scanf("%lf",&g);
	}
	//
	if(g>=90){
		printf("score=%.1lf,grade=A",g);
	}
	else {
		if(g>=80)printf("score=%.1lf,grade=B",g);
		else {
			if(g>=70)printf("score=%.1lf,grade=C",g);
			else {
				if(g>=60)printf("score=%.1lf,grade=D",g);
				else printf("score=%.1lf,grade=E",g);
			}
		}
	}
	return 0;
}
