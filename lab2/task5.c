#include <stdio.h>
#include <stdlib.h>

struct Tovar {
	char name[50];
	int cost;
};

void Sort(struct Tovar product[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = n - 1; j>i; j--){
			if (product[j-1].cost > product[j].cost) {
				struct Tovar temp = product[j-1];
				product[j-1] = product[j];
				product[j] = temp;
			}
		}
	}	
}

int main() {
	FILE *in_file, *out_file;
	in_file = fopen("task5_1.txt", "r");
	out_file = fopen("task5_2.txt", "w");

	struct Tovar product[50];
	int k = 0;

	while(fscanf(in_file, "%s %d", product[k].name, &product[k].cost) != EOF) {
		k++;
	}
	Sort(product,k);
	for (int i = 0; i < k; i++) {
		fprintf(out_file, "%s %d\n", product[i].name, product[i].cost);
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
}
