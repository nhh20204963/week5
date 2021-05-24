#include <stdio.h>

int main(){
	double a, b;
	printf("Nhap a = ");scanf("%lf", &a);
	printf("Nhap b = ");scanf("%lf", &b);
	if(a > b){
		printf("%.2lf > %.2lf", a, b);
	}
	if(a < b){
		printf("%.2lf < %.2lf", a, b);
	}
	if(a == b){
		printf("%.2lf = %.2lf", a, b);
	}
}
