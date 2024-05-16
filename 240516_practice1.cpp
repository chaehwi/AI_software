#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	/* 
	char a = '1';
	char b[2] = {'1','2'};
	char c[] = "12";
	
	printf("ascii = %d, %c, %x\n",a,a,a);
	printf("ascii = %d, %c, %x\n",b[1],b[1],b[1]);
	printf("ascii = %d, %c, %x\n",c[1],c[1],c[1]);
	*/
	
	char a[] = "12.3";
	char b[] = "34.5";
	char d[20];
	float a1,b1,c1,f,k;
	
	a1 = atof(a);
	b1 = atof(b);
	c1 = a1 * b1;
	k = a1 * b1 * 100;
	
	itoa(k,d,10);
	
	f = atoi(d);
	f = f/100;
	
	printf("a1 = %f, b1 = %f, c = %f\n", a1, b1, c1);
	printf("d = %s, f= %f\n", d, f);
	
	
	
}
