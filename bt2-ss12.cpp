#include <stdio.h>
void array(int arr[],int size){
	printf("Cac phan tu trong mang la: ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	array(arr,n);
	return 0; 
} 
