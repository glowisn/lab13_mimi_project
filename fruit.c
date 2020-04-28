#include "fruit.h"

int createFruit(fruit *s){
	printf("이름은? ");
	scanf(" %s",s->name);
	printf("가격은? ");
	scanf("%d",&s->price);
	printf("무게는? ");
	scanf("%d",&s->weight);
	return 1;
}

int updateFruit(fruit *s){
	printf("이름은? ");
	scanf(" %s",s->name);
	printf("가격은? ");
	scanf("%d",&s->price);
	printf("무게는? ");
	scanf("%d",&s->weight);
	printf("수정성공!\n");
        return 1;
}

void readFruit(fruit s){
	if(s.price == -1) return;
	printf("%s   %6d %4d \n",s.name,s.price,s.weight);
	return;
}

int deleteFruit(fruit *s){
	s->price = -1;
	printf("삭제됨!\n");
	return 1;
}

int selectMenu(){
	int menu;
	printf("물품관리시스템\n");
        printf("1.조회\n");
        printf("2.추가\n");
        printf("3.수정\n");
        printf("4.삭제\n");
	printf("5.저장\n");
	printf("6.이름검색\n");
	printf("7.가격검색\n");
	printf("9.물품분석\n");
        printf("0.종료\n");
        printf("원하는 메뉴는?:");
	scanf(" %d",&menu);
	return menu;
}

