#include<stdio.h>
int InsertionSort(int *A, int n){
	int i,j,key;
	for(i=1;i<n;i++){
		j = i-1;
		key = A[i];
		while (j>=0 && A[j]>key){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}
void PrintArray(int *A,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\n",A[i]);
	}
}
int main(){
	int n, A[1000],i;
	printf("Enter Number of elements in the Array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	InsertionSort(A, n);
	PrintArray(A, n);
	return 0;
}
