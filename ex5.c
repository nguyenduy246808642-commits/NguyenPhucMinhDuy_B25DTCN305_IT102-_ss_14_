#include<stdio.h>
int prime(int n){
	int snt=0;
	int i;
	for(i=0; i<n; i++){
		if(n%i==0) ++snt;	
	}
	if(snt==2){
		return 1;
	}else{
		return 0;
	}
} 
int main(){
	int n;
	printf("nhap vao day:");
	scanf("%d",&n);
	
	if(prime(n)){
		printf("true");
	}else{
		printf("false");
	}
}

