#include <stdio.h>
#define MAX 100
void inputMatrix(int rows, int cols, int matrix[MAX][MAX]){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("Nhap vao gia tri cho phan tu matrix[%d][%d]=",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
}
void printMatrix(int rows, int cols, int matrix[MAX][MAX]){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%5d",matrix[i][j]);
		}
		printf("\n");
	}
}
void printCornerIndex(int rows, int cols, int matrix[MAX][MAX]){
	printf("Cac phan tu o goc cua ma tran la: \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i==0 && j==0 || i==0 && j==cols-1 || i==rows-1 && j==0 || i==rows-1 && j==cols-1){
				printf("%5d",matrix[i][j]);
			}else{
				printf("    0");
			}
		}
		printf("\n");
	}
}
void printBoundaryIndex(int rows, int cols, int matrix[MAX][MAX]){
	printf("Cac phan tu o duong bien cua ma tran la: \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i==0 || i==rows-1 || j==0 || j==cols-1){
				printf("%5d",matrix[i][j]);
			}else{
				printf("    0");
			}
		}
		printf("\n");
	}
}
void printDiagonalsIndex(int rows, int cols, int matrix[MAX][MAX]){
	printf("Cac phan tu nam tren duong cheo chinh va duong cheo phu cua ma tran la: \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i==j || j==rows-i-1){
				printf("%5d",matrix[i][j]);
			}else{
				printf("    0");
			}
		}
		printf("\n");
	}
} 
void printPrimeIndex(int rows, int cols, int matrix[MAX][MAX]){
	printf("Cac phan tu la so nguyen to cua ma tran la: \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			int isPrime=1;
			if(matrix[i][j]>0){
				for(int q=2;q*q<=matrix[i][j];q++){
			    	if(matrix[i][j]%q==0){
			    		isPrime=0;
			    		break;
			    	}
		    	}
		    	if(isPrime){
		    		printf("%5d",matrix[i][j]);
		    	}else{
		    		printf("    0");
		    	}
			}else{
				printf("    0");
			}
		}
		printf("\n");
	}
} 
void exit_program() {
    printf("Thoat chuong trinh!");
}
int main() {
    int matrix[MAX][MAX], n, m, choice;
    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);
    if (n <= 0 || m <= 0 || n > MAX || m > MAX) {
        printf("Kich thuoc mang khong hop le!\n");
        return 1;
    }
    do {
        printf("\n===================MENU====================\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice){
        	case 1:
        		inputMatrix(n,m,matrix);
        		break;
        	case 2:
        		printMatrix(n,m,matrix);
        		break;
        	case 3:
        		printCornerIndex(n,m,matrix);
        		break;
        	case 4:
        		printBoundaryIndex(n,m,matrix);
        		break;
        	case 5:
        		printDiagonalsIndex(n,m,matrix);
        		break;
        	case 6:
        		printPrimeIndex(n,m,matrix);
        		break;
        	case 7:
        		exit_program();
        		break;
        	default:
        		printf("Lua chon khong hop le! Vui long chon lai");
		}
    }while(choice!=7);
    return 0;
}

