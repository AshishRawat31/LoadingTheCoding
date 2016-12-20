//It assumes that each of the n input elements is an integer in the range 0 to k
#include <stdio.h>

int main(void) {
	int n,no,A[1000001]={0},i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&no);
		A[no]++;
	}
	for(i=0;i<1000001;i++){
		while(A[i]--)	printf("%d\n",i);
	}
	return 0;
}
