#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

void fnQExit(void) {
	puts("Quick exit function.");
}

int main() {
	at_quick_exit(fnQExit);
	puts("Main function: Beginning");
	quick_exit(EXIT_SUCCESS);
	puts("Main function: End");  // never executed

	_getch();
	return 0;
}