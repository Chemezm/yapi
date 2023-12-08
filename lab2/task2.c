#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	FILE * file = fopen("task2.txt", "w");
	int i,size;
	scanf("%d", &size);
	int massiv[size];
	srand(time(NULL));
	for(i=0;i<size; i++) {
		massiv[i] = rand() % 100;
		printf("%d ", massiv[i]);
	}
	for (i = size - 1; i >=0; i--) {
		fprintf(file, "%d ", massiv[i]);
	}
	fclose(file);
	return 0;
}
