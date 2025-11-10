#include<stdio.h>
int ucln(int a, int b) {
    if (a<0)
	a = -a;
    if (b < 0)
	 b = -b;
    while (b != 0) {
        int temp =a%b;
        a =b;
        b =temp;
    }
    return a;
}

int main() {
    int x,y;
    printf("Nhap hai so nguyen: ");
    scanf("%d%d", &x,&y);
    printf("Uoc chung lon nhat cua %d va %d la:%d\n",x,y,ucln(x, y));
}


