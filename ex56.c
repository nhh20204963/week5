#include <stdio.h>

int main(){
	int n;
	printf("So hoc sinh cua nhom la ");
	scanf("%d", &n);
	printf("the number of students in the smallest class is %d\n", n / 7);
	printf("the number of student in the largest class is %d\n", (n + 6)/ 7);
	printf("the average number of student per class is %.2f\n", n / 7.00);
	printf("the number of classes of above average size is %d\n", n % 7);
	printf("the number of classes of at most average size", n % 7);
	printf("the number of students in classes of larger than average %d\n", (n % 7) * (n + 6) / 7);
	printf("the number of classes of exactly average size is %d\n", (n % 7 == 0) ? 7 : 0);
}
