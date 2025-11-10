#include<stdio.h>
int sum(int a, int b);

int main(){
	int a,b;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	int result = sum(a,b);
	printf("tong la %d",result);
	return 0;
}
int sum(int a, int b){
	return a+b;
}
