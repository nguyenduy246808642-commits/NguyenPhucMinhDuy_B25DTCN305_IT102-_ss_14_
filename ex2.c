#include<stdio.h>
void nhap_mang(int n, int arr[]){
	int i;
	for(i=0; i<n; i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
}
void in_mang(int n, int arr[]){
	int i;
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int n,arr[100];
	printf("nhap phan tu:");
	scanf("%d",&n);
	
	nhap_mang(n, arr);
	printf("mang vua nhap la:");
	in_mang(n, arr);
	
	return 0;
}

