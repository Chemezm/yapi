#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int a = 0;
	int b = 1;
	int size = atoi(argv[1]);
	float massiv[size];

	srand(time(NULL));
	for (int i =0; i<size; i++) {
		massiv[i] = (float)rand() / RAND_MAX;
		printf("%.2f ", massiv[i]);
	}
	return 0;
}
