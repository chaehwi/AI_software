#include<stdio.h>
#include<string.h>

struct st_score{
	int id;
	char name[10];
	int kor;
	int eng;
	int math;
	float avg;
};


int main(void){
	
	struct st_score s[3] = {
		1, "minsu", 10, 30, 50, 0,
		2, "younghi", 12, 60, 30, 0,
		3, "cheolsu", 13, 30, 40, 0
	};
	
	
	int i, j;
	/*
	for(i = 0; i < 3; i++){
		scanf("%d %s %d", &s[i].id, &s[i].name, &s[i].score);
	}
	*/
	
	for(i = 0; i < 3; i++){
		printf("id : %d, name : %s, kor : %d, math : %d, eng : %d\n", s[i].id, s[i].name, s[i].kor, s[i].math, s[i].eng);
	}
	
	for(j = 0; j < 3; j++){
		s[j].avg = (float)(s[j].kor + s[j].eng + s[j].math)/3; 
	}
	
	for(i = 0; i < 3; i++){
		if(strcmp("minsu", s[i].name)==0){
			printf("%s의 avg : %.2f", s[i].name, s[i].avg);
		}
	}
	
	// s[0].id = 1;
	// strcpy(s[0].name, "minsu");
	
	// strcmp 로 문자열 비교
	
	
}
