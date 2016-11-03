#include<stdio.h>
void Merge(int *A, int p, int q, int r){
	int i,j,k=p;
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=A[p+i];
	for(j=0;j<n2;j++)
		R[j]= A[q+j+1];
	i=0;j=0;
	while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
	while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}
void MergeSort(int *A, int p, int r){
	if(p<r){
		int q = (p+r)/2;
		MergeSort(A,p,q);
		MergeSort(A,q+1,r);
		Merge(A,p,q,r);
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
	MergeSort(A, 0, n-1);
	PrintArray(A, n);
	return 0;
}
