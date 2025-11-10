#include <stdio.h>

int maxOfArray(int arr[], int n) {
	int maxValue = arr[0];
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		}
	}
	return maxValue;
	
}

int main() {
	int n1,i;
	int arr[100];
	printf("nhap phan tu:");
	scanf("%d", &n1);
	for ( i = 0; i < n1; i++) {
		printf("arr[%d]:",i);
		scanf("%d", &arr[i]);
	}

	printf("%d ", maxOfArray(arr, n1));

	return 0;
}
