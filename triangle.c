#include <stdio.h>

int main(void){
	int a,b,c;
	scanf("%d\n%d\n%d\n",&a,&b,&c);
	if(a==60 && b==60 && c==60){
		printf("Equilateral");
	}
	else if(a+b+c == 180){
		if(a==b || b==c || a==c){
			printf("Isosceles");
		}
		else if(a!=b && b!=c && a!=c){
			printf("Scalene");
		}
	}
	else{
		printf("Error");
	}
}
