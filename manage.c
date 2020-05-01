#include "manage.h"

void saveData(fruit *f, int count){
	FILE *fp;
	
	fp = fopen("fruit.txt", "wt");

	for(int i = 0; i < count; i++){
		if(f[i].price != -1)
			fprintf(fp, "%d %d %s\n", f[i].price, f[i].weight, f[i].name);
	}
	fclose(fp);

	printf("저장됨!");
}
