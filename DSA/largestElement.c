// find the largest element in an array along with its loc

#include<stdio.h>

void findlargest(int A[], int N){
	int max=A[0];
	int loc=0;

	for(int i=1; i<N; i++){
		if (A[i] > max){
			max = A[i];
			loc = i;
		}
	}

	printf("Largest Element = %d\n", max);
	printf("Location (Index) = %d\n", loc);

}

void main(){

	int A[] = {23,323,43232,4232,323,4234,232,22};

	int N = sizeof(A) / sizeof(A[0]);

	findlargest(A,N);
}
