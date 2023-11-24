#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *file = fopen("task7_1.txt","a");
	char str[] = "END";

	fprintf(file,"%s\n", str);
	fclose(file);
	return 0;
}
