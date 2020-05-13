#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char name[20];
	int price;
	int weight;
}fruit;

int createFruit(fruit *s);
int updateFruit(fruit *s); 
void readFruit(fruit *s); 
int deleteFruit(fruit *s);
int selectMenu(); 
void listFruit(fruit *s,int count);
int selectDataNo(fruit *s,int count);

