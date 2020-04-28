#include <stdio.h>

typedef struct{
	char name[20];
	int price;
	int weight;
}Fruit;

int createFruit(Fruit *s);
int updateFruit(Fruit *s); 
void readFruit(Fruit s); 
int deleteFruit(Fruit *s);
int selectMenu(); 
