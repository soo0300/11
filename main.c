#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i=300;  
	int *pi=&i; //4byte ���� pi�� 4byte ����� ����Ŵ 
	char *pc=&i;//4byte ���� pc�� 1byte ����� ����Ŵ -> i�� 1byte��ŭ�� ����  
	
	printf("%i, %i, %i",i,*pi,*pc);
}
