#include <stdlib.h>
#include <stdio.h>

int main() {
	int n;
	int com;
	while (1) {
		printf("선택할 명령의 숫자를 입력하세요 . : 가위(0)/바위(1)/보(2)");
		printf("/ 종료(3)\n"); scanf_s("%d", &n);
		
		switch (n) {
			case 0: 
				printf("가위 선택/n컴퓨터는%d선택 \n", com);
				break;
			case 1: 
				printf("바위 선택/n컴퓨터는%d선택 \n", com);
				break;
			case 2: 
				printf("보 선택/n컴퓨터는%d선택 \n", com); 
				break;
			case 3:
				printf("게임을 종료합니다.\n");
				return;
			default:
				printf("잘못된 입력입니다.\n");
		}
	}
	getchar();
}