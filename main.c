#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 4; //300으로 변경해서도 해보기  
	
	int*pi = &i;
	char*pc = &i;
	
	printf("%i, %i, %i\n", i, *pi, *pc);
	
	return 0;
}
