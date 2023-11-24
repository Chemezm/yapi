#include <stdio.h>

int main(void) {
	FILE *input_file, *output_file;
	char input_filename[] = "task6_1.txt";
	char output_filename[] = "task6_2.txt";
	char buffer[100];

	input_file = fopen(input_filename, "r");
	output_file = fopen(output_filename, "w");

	for (int i = 0; i<3;i++) {
		if(fgets(buffer,sizeof(buffer),input_file) !=NULL){
			fputs(buffer, output_file);
		} else{
			break;
		}
	}
	fclose(input_file);
	fclose(output_file);
	return 0;

}
