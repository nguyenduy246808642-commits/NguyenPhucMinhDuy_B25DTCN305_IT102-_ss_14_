#include<stdio.h>
long long giai_thua(int n){
	long long luu=1;
	int i;
	for(i=1; i<=n; i++){
		luu*=i;
	}
	return luu;
} 
int main(){
	int n;
	printf("nhap mot so nguyen bat ki:");
	scanf("%d",&n);
	printf("giai thua la:%lld",giai_thua(n));
}
