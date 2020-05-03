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

int loadData(fruit f[]){
	int count = 0;
	FILE *fp;

	fp = fopen("fruit.txt", "rt");
	if(fp == NULL){
		printf("=> 파일 없음\n");
		return 0;
	}

	for(; ; count++){
		fscanf(fp, "%d", &f[count].price);
		fscanf(fp, "%d", &f[count].weight);
		fscanf(fp, "%[^\n]", f[count].name);

		if(feof(fp)) break;
	}

	fclose(fp);
	printf("=> 로딩 성공!\n");
}
