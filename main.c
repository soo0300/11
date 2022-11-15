#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i=300;  
	int *pi=&i; //4byte 변수 pi가 4byte 대상을 가르킴 
	char *pc=&i;//4byte 변수 pc가 1byte 대상을 가르킴 -> i의 1byte만큼만 저장  
	
	printf("%i, %i, %i",i,*pi,*pc);
}
