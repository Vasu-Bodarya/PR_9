#include <stdio.h>

int eo_num() {
    FILE *even_file = fopen("even_file.txt", "w");
    FILE *odd_file = fopen("odd_file.txt", "w");

    int i;

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even_file, "%d, ", i);
        } else {
            fprintf(odd_file, "%d, ", i);
        }
    }

    fclose(even_file);
    fclose(odd_file);

}

void main(){
	
	eo_num();
	
	printf("Sucessfully");
	
	return 0;
	
	
}
