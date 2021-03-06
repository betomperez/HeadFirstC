#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
	char line[80];
	FILE *in;
	if (!(in = fopen(spooky.csv, "r"))) {
		fprintf(stderr, "Can't open the file.\n");
		return 1;
	}
	FILE *file1 = fopen("ufos.csv", "w");
	FILE *file2 = fopen("disappearances.csv", "w");
	FILE *file3 = fopen("others.csv", "w");

	while(fscanf(in, "%79[^\n]\n", line) == 1) {
	//while(fgets(line, sizeof(line), in)){
		if (strstr(line, "UFO"))
			fprintf(file1, "%s\n", line);
		else if (strstr(line, "Disappearance"))
			fprintf(file2, "%s\n", line);
		else
			fprintf(file3, "%s\n", line);
	}
	
	fclose(file1);
	fclose(file2);
	fclose(file3);
	fclose(in);
	return 0;
}
