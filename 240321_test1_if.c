#include<stdio.h>

int main(void){

	// 평균값 계산하기  
	int kor, math, eng, sum;
	float avg;
	
	kor = 70;
	math = 85;
	eng = 90;
	
	sum = kor + math + eng;
	avg = (float)sum / 3;
	
	printf("kor = %d, math = %d, eng = %d, sum = %d\n", kor, math, eng, sum);
	printf("average = %3.2f\n", avg);
	
	// if문
	// kor
	printf("kor = %d\n", kor);
	if(kor >= 90){
		printf("LEVEL 'su'\n");
	} else if(kor >= 80 && kor < 90){
		printf("LEVEL 'u'\n");
	} else if(kor >= 70 && kor < 80){
		printf("LEVEL 'mi'\n");
	} else if(kor >= 60 && kor < 70){
		printf("LEVEL 'yang'\n");
	} else {
		printf("LEVEL 'ga'\n");		
	}
	
	//math
	printf("math = %d\n", math);
	if(math >= 90){
		printf("LEVEL 'su'\n");
	} else if(math >= 80 && math < 90){
		printf("LEVEL 'u'\n");
	} else if(math >= 70 && math < 80){
		printf("LEVEL 'mi'\n");
	} else if(math >= 60 && math < 70){
		printf("LEVEL 'yang'\n");
	} else {
		printf("LEVEL 'ga'\n");		
	}
	
	//eng
	printf("eng = %d\n", eng);
	if(eng >= 90){
		printf("LEVEL 'su'\n");
	} else if(eng >= 80 && eng < 90){
		printf("LEVEL 'u'\n");
	} else if(eng >= 70 && eng < 80){
		printf("LEVEL 'mi'\n");
	} else if(eng >= 60 && eng < 70){
		printf("LEVEL 'yang'\n");
	} else {
		printf("LEVEL 'ga'\n");		
	}
	
	//평균 성적 
	printf("**** avg = %3.2f ****\n ", avg);
	if(avg >= 90){
		printf("**** LEVEL 'su' ****\n");
	} else if(avg >= 80 && avg < 90){
		printf("**** LEVEL 'u' ****\n");
	} else if(avg >= 70 && avg < 80){
		printf("**** LEVEL 'mi' ****\n");
	} else if(avg >= 60 && avg < 70){
		printf("**** LEVEL 'yang' ****\n");
	} else {
		printf("**** LEVEL 'ga' ****\n");		
	}
	 
	for(int i = 0; i < 5; i++){
		printf("*");
	}
}
 
