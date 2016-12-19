#include <stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
	int help=*a;
	*a=*b;
	*b=help;
}
	
int partition(int A[],int p, int r){
	srand(time(NULL));
	int pivotIndex=p+rand()%(r-p+1);//r-p+1 is important to be remembered
	int pivot;
	int i=p-1;
	int j;
	pivot=A[pivotIndex];
	swap(&A[pivotIndex],&A[r]);
	for(j=p; j<r; j++){
		if(A[j]<pivot){
			i++;
			swap(&A[i],&A[j]);
		}
	}
	swap(&A[i+1],&A[j]);
	return i+1;
}

void quickSort(int A[],int p,int r){
	if(p<r){
		int q=partition(A,p,r);
		quickSort(A,p,q-1);
		quickSort(A,q+1,r);
	}
}

int main(void) {
	int i,A[1000000],t;
	scanf("%d",&t);
	for(i=0;i<t;i++)	scanf("%d",&A[i]);
	quickSort(A,0,t-1);
	for(i=0;i<t;i++)	printf("%d\n",A[i]);
	return 0;
}
