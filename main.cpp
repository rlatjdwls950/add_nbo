#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <stddef.h>
#include "func.h"

int main(int argc, char **argv){
	uint32_t num1 = fr(argv[1]);
	uint32_t num2 = fr(argv[2]);
	uint32_t num3 = num1 + num2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n\n",num1,num1,num2,num2,num3,num3);
	bob();

}
