#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <netinet/in.h>
int fr(char * filename){
	FILE *fp;
	uint32_t result;
	fp = fopen(filename,"rb");
	fread(&result,sizeof(uint32_t),1,fp);
	fclose(fp);
	return htonl(result);
}

void bob(){
	char track[] = "컨설팅";
	char name[] = "김성진";
	printf("bob[10][%s]add-nbo[%s]",track,name);

}
