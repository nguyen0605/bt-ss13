#include <stdio.h> 
int findMaxNumber(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int size;
	printf("Nhap vao kich thuoc cua mang: ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("Nhap vao gia tri arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int max=findMaxNumber(arr,size);
	printf("So lon nhat trong mang la: %d",max);
	return 0;
}
