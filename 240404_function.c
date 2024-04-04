#include<stdio.h>
#include<windows.h>

float fn_avg(int a, int b, int c);

float avg;

int main(void){
	
	// int kor = 50, math = 50, eng = 40;
	int kor, math, eng;
	
	printf("kor = ");
	scanf("%d", &kor);
	printf("math = ");
	scanf("%d", &math);
	printf("eng = ");
	scanf("%d", &eng);
	
	// scanf("%d %d %d", &kor, &math, &eng);
	// printf("kor = %d, math = %d, eng = %d\n", kor, math, eng);
	
	avg = fn_avg(kor, math, eng);
	 
	printf("avg = %.2f ", avg);
	if(avg >= 90 && avg <= 100){
		printf("** level 'su' **");
	} else if(avg >= 80 && avg <= 90){
		printf("** level 'u' **");
	} else if(avg >= 70 && avg <= 80){
		printf("** level 'mi' **");
	} else if(avg >= 60 && avg <= 70){
		printf("** level 'yang' **");
	}else {
		printf("** level 'ga' **");
	}
	 
}

float fn_avg(int a, int b, int c){
	
	avg = (a + b + c) / 3 ;
	return avg;	
}




