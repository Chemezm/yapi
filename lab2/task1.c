#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, size;
	scanf("%d", &size);
	int massiv[size];
	srand(time(NULL));
	for (int i=0; i<size; i++) {
		massiv[i] = rand() %100;
		printf("%d ", massiv[i]);
	}
	return 0;
}
