#include<stdio.h>
#include<conio.h>

int main() {
	
	int base;
	printf("enter base");
	scanf("%d",&base);
	int height;
	printf("enter height");
	scanf("%d",&height);
	float area=(base*height)/2;
	printf("the %f for %d and %d",area,base,height);
	return 0;
}
