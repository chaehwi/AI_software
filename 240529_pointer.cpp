#include<stdio.h>

int main(void){
	
	int a[5] = {0,1,2,3,4};
	int *p, sum = 0;
	
	for(sum = 0, p=a; p<&a[5]; p++){
		sum = sum + *p;
		printf("address = %d, sum = %d\n", p, sum);
	}
	
	
}
