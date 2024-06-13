#include<stdio.h>

float student_avg(int kor, int eng, int math);
float sub_avg(int sub_arr[]);
float class_avg(int avg_kor, int avg_eng, int avg_math);
// void sub_score(float avg_kor, float avg_eng, float avg_math);
char student_kor_score(int kor);
char student_eng_score(int eng);
char student_math_score(int math);

int main(void){
	
	int kor[4] = {98, 78, 68, 95};
	int eng[4] = {87, 85, 95, 80};
	int math[4] = {78, 67, 87, 67};
	
	char* student_name[4] = {"영희", "철수", "재석", "영자"};
	
	
	// 1) 각 학생의 평균을 구하라.
  	float student_avgArr[4];
	int i;
	for(i = 0; i < 4; i++){
		student_avgArr[i] = student_avg(kor[i], eng[i], math[i]);
	} 
	
	printf("1) 각 학생의 평균을 구하라.\n");
	for(i = 0; i < 4; i++){
		printf("%s 의 평균 : %3.2f\n", student_name[i], student_avgArr[i]);
	} 
	
	printf("---------------------------------------\n");
	
	
	// 2) 과목별 평균을 구하라.
	printf("2) 과목별 평균을 구하라.\n"); 
	printf("국어 평균 : %3.2f\n", sub_avg(kor));
	printf("영어 평균 : %3.2f\n", sub_avg(eng));
	printf("수학 평균 : %3.2f\n", sub_avg(math));	
	
	printf("---------------------------------------\n");
	
	
	// 3) 반 평균을 구하라. (배열 및 함수를 이용할 것)
	printf("3) 반 평균을 구하라.\n"); 
	printf("반 평균 : %3.2f\n", class_avg(sub_avg(kor), sub_avg(eng),sub_avg(math)));
	
	
	printf("---------------------------------------\n");
	
	// 4) 점수에 따른 과목별 등급을 계산하고 출력하라 (배열 및 함수를 이용할 것) 
	printf("4) 점수에 따른 과목별 등급을 계산하고 출력하라.\n"); 
	for(i = 0; i < 4; i++){
		printf("%s 의 등급 - 국어 : %c, 영어 : %c, 수학 : %c\n", student_name[i], student_kor_score(kor[i]),student_eng_score(eng[i]),student_math_score(math[i]));
	}
	
	//sub_score(sub_avg(kor), sub_avg(eng), sub_avg(math)); 
	
	
}

float student_avg(int kor, int eng, int math){
	float avg = (float)(kor + eng +math) / 3;
	return avg;
}

float sub_avg(int sub_arr[]){
	float avg = (float)(sub_arr[0] + sub_arr[1] + sub_arr[2] + sub_arr[3]) / 4;
	return avg;
}

float class_avg(int avg_kor, int avg_eng, int avg_math){
	float avg = (float)(avg_kor + avg_eng + avg_math) / 3;
	return avg;
}

char student_kor_score(int kor){
	if(kor >= 90 && kor <= 100){
		return 'A';
	} else if(kor >= 80 && kor <= 89){
		return 'B';
	} else if(kor >= 70 && kor <= 79){
		return 'C';
	}else if(kor >= 60 && kor <= 69){
		return 'D';
	} else {
		return 'F';
	}
}

char student_eng_score(int eng){
	if(eng >= 90 && eng <= 100){
		return 'A';
	} else if(eng >= 80 && eng <= 89){
		return 'B';
	} else if(eng >= 70 && eng <= 79){
		return 'C';
	}else if(eng >= 60 && eng <= 69){
		return 'D';
	} else {
		return 'F';
	}
}

char student_math_score(int math){
	if(math >= 90 && math <= 100){
		return 'A';
	} else if(math >= 80 && math <= 89){
		return 'B';
	} else if(math >= 70 && math <= 79){
		return 'C';
	}else if(math >= 60 && math <= 69){
		return 'D';
	} else {
		return 'F';
	}
}

/* void sub_score(float avg_kor, float avg_eng, float avg_math){
	if(avg_kor >= 90 && avg_kor <= 100){
		printf("평균 국어 등급 : A\n");
	} else if(avg_kor >= 80 && avg_kor <= 89){
		printf("평균 국어 등급 : B\n");
	} else if(avg_kor >= 70 && avg_kor <= 79){
		printf("평균 국어 등급 : C\n");
	} else if(avg_kor >= 60 && avg_kor <= 69){
		printf("평균 국어 등급 : D\n");
	} else {
		printf("평균 국어 등급 : F\n");
	}
	
	if(avg_eng >= 90 && avg_eng <= 100){
		printf("평균 영어 등급 : A\n");
	} else if(avg_kor >= 80 && avg_kor <= 89){
		printf("평균 영어 등급 : B\n");
	} else if(avg_kor >= 70 && avg_kor <= 79){
		printf("평균 영어 등급 : C\n");
	} else if(avg_kor >= 60 && avg_kor <= 69){
		printf("평균 영어 등급 : D\n");
	} else {
		printf("평균 영어 등급 : F\n");
	}
	
	if(avg_math >= 90 && avg_math <= 100){
		printf("평균 수학 등급 : A\n");
	} else if(avg_kor >= 80 && avg_kor <= 89){
		printf("평균 수학 등급 : B\n");
	} else if(avg_kor >= 70 && avg_kor <= 79){
		printf("평균 수학 등급 : C\n");
	} else if(avg_kor >= 60 && avg_kor <= 69){
		printf("평균 수학 등급 : D\n");
	} else {
		printf("평균 수학 등급 : F\n");
	}
*/

