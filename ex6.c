#include<stdio.h>
int so_hoan_hao(int n){
	int sum=0;
	int i;
	for(i=1; i<n; i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int a,b;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	
	if(so_hoan_hao(a)){
		printf("\ntrue\n");
	}else{
		printf("\nfalse\n");
	}
	
	if(so_hoan_hao(b)){
		printf("\ntrue\n");
	}else{
		printf("\nfalse\n");
	}
} 

