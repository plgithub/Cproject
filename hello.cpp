#include <stdio.h>
#include <stdlib.h>
void main(){
	FILE *p;
	if((p=fopen("D:/test/Cproject/test.txt","ab"))==NULL){
		printf("can not open the file\n");
		exit(0);
	}
	fwrite("hello",1,5,p);
	//fclose("

}