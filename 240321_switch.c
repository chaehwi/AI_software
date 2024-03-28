#include<stdio.h>

int main(void){

	// 평균값 계산하기  
	int kor, math, eng, sum, avg1;
	float avg;
	
	kor = 70;
	math = 85;
	eng = 90;
	
	sum = kor + math + eng;
	avg = (float)sum / 3;
	avg1 = sum / 3;
	
	// 실수형 x  
	switch(avg1/10){
		
		case 10:printf("avg = %3.1f,su\n", avg); break;
		case 9:printf("avg = %3.1f,su\n", avg); break;
		case 8:printf("avg = %3.1f,u\n", avg); break;
		case 7:printf("avg = %3.1f,mi\n", avg); break;
		case 6:printf("avg = %3.1f,yang\n", avg); break;
		default: printf("avg = %3.1f,ga\n"), avg; break;
		
	}
	 
	
}
 
