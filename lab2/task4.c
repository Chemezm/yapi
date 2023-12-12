#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Sort(int n, float massiv[])
{
	int i,j,step;
	float temp;
	for (step = n/2; step>0; step /=2)
	{
		for(i = step; i<n; i++)
		{
			temp = massiv[i];
			for (j = i; j>=step; j-=step)
			{
				if(temp < massiv[j - step])
				{
					massiv[j] = massiv[j - step]; 
				}
				else 
				{
					break; 

				}
			}
			massiv[j] = temp;
		}
	}
}
int main( int argc, char *argv[]) {
	int n = atoi(argv[1]);
	float arg1 = atof(argv[2]);
	float arg2 = atof(argv[3]);
	float mas[n];
	srand(time(NULL));
	for (int i = 0; i<n;i++) {
		mas[i] = (float)rand() / RAND_MAX * (arg2 - arg1) + arg1;
		printf("%.1f ", mas[i]);
	}
	FILE *file = fopen("task4.txt", "w");
	Sort(n, mas);
	for (int i = 0; i < n; i++) {
		fprintf(file, "%.1f ", mas[i]);
	}
	return 0;
}
