#include <stdio.h>
int tinhtong(int a, int b){
	return a+b;
}
int main(){
	int n1,n2,sum;
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&n1);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&n2);
	sum=tinhtong(n1,n2);
	printf("Tong cua %d va %d la %d",n1,n2,sum);
	return 0;
}
