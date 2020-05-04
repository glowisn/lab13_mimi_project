#include <stdio.h>
#include <stdlib.h>
#include "manage.h"

int main(void){
	fruit slist[100];
	int curcount = 0;

	int count = 0 , menu;

	count = loadData(slist);
	curcount = count;	

	while(1){
		menu = selectMenu();
		if (menu == 0) break;
		else if (menu == 1){
			if(count > 0){
				listFruit(slist,curcount);
			}else{
				printf("데이터가 없습니다!\n");
			}
		}else if (menu == 2){
			count += createFruit(&slist[curcount++]);
		}else if (menu == 3){
			int no = selectDataNo(slist,curcount);
			if(no == 0){
				printf("취소됨!\n");
				continue;
			}
		 updateFruit(&slist[no-1]);
		}
		else if (menu == 4) {
			int no = selectDataNo(slist, curcount);
			if(no == 0){
				printf("취소됨!");
				continue;
			}
		deleteFruit(&slist[no-1]);
		count--;
		}else if(menu == 5){
			if(count == 0)
				printf("데이터가 없습니다!\n");
			else
				saveData(slist, curcount);
				printf("저장성공!\n");
		}else if(menu == 6){
				//searchName(slist,curcount);
		}else if(menu ==7){
				//searchPrice(slist,curcount);
		}else if(menu == 8){
				analysisFruit(slist,curcount);
		}
	}

	printf("종료됨!\n");
	return 0;
}
