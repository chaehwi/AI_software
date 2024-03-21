#include<stdio.h>

// 평균값 계산하기 
int main(void){

	int kor, math, eng, sum;
	float avg;
	
	kor = 70;
	math = 85;
	eng = 90;
	
	sum = kor + math + eng;
	avg = (float)sum / 3;
	
	printf("kor = %d, math = %d, eng = %d, sum = %d\n", kor, math, eng, sum);
	printf("average = %3.2f\n", avg);
	
}

