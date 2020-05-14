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

	return count;
}

int analysisFruit(fruit *f,int count){
    int sum=0, avg=0;

    for(int i=0;i<count;i++){
        sum += f[i].price;
    }

    avg = sum / count;

    printf("전체 과일의 가격 총 합은 %6d원 입니다.\n전체 과일의 평균 가격은 %6d원 입니다.",sum,avg);
}

void searchName(fruit *f, int count){
	int scount = 0;
	char search[50];

	printf("검색할 이름: ");
	scanf("%[^\n]", search);

	printf("\nNo.Name       Price Weight\n");
	printf("==============================\n");

	for(int i = 0; i < count; i++){
		if(f[i].price != -1){
			if(strstr(f[i].name, search)){
				printf("%2d ", i+1);
				readFruit(&f[i]);
				scount++;
			}
		}
	}
	if(scount == 0) printf("=> 검색된 데이터 없음!\n");
}

void searchMax(fruit *f, int count){
	int max = 0;

	for(int i = 0; i < count; i++){
		if(f[i].price != -1){
			if(max < f[i].price)
				max = f[i].price;
		}
	}

	printf("\nNo.Name       Price Weight\n");
        printf("==============================\n");

	for(int i = 0; i < count; i++){
		if(f[i].price != -1){
			if(f[i].price == max){
				printf("%2d", i+1);
				readFruit(&f[i]);
			}
		}
	}
}

void searchMin(fruit *f, int count){
	int min = 0;
	
	if(f[0].price != -1)
		min = f[0].price;

	for(int i = 1; i < count; i++){
		if(f[i].price != -1){
			if(min > f[i].price)
				min = f[i].price;
		}
	}

	printf("\nNo.Name       Price Weight\n");
	printf("==============================\n");

	for(int i = 0; i < count; i++){
		if(f[i].price != -1){
			if(f[i].price == min){
				printf("%2d", i+1);
				readFruit(&f[i]);
			}
		}
	}
}

