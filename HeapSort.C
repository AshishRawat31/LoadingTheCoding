#include <stdio.h>
int heapSize,t;
void maxHeapify(int *A, int i){
	int l=i*2+1;
	int r=l+1;
	int largest=i;
	if(l<heapSize && A[l]>A[i])	largest=l;
	if(r<heapSize && A[r]>A[largest]) largest=r;
	if(largest!=i){
		int help=A[i];
		A[i]=A[largest];
		A[largest]=help;
		maxHeapify(A,largest);
	}
}
void buildMaxHeap(int *A){
	heapSize=t;
	int i;
	for(i=t/2;i>=0;i--) maxHeapify(A,i);
}
void heapSort(int *A){
	buildMaxHeap(A);
	int i;
	for(i=t-1;i>0;i--){
		int help=A[0];
		A[0]=A[i];
		A[i]=help;
		heapSize--;
		maxHeapify(A,0);
	}
}
int main(void) {
	int i,A[1000000];
	scanf("%d",&t);
	for(i=0;i<t;i++)	scanf("%d",&A[i]);
	heapSort(A);
	for(i=0;i<t;i++)	printf("%d\n",A[i]);
	return 0;
}
