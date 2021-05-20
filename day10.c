#include <stdio.h>
int main() {

	/*
		while문
		 조건식을 적어서 참인 동안 특정 코드를 반복

		 while( 조건식 ){
			실행 코드
		 }

		do ~ while문
		 반복될 코드를 먼저 실행하고 조건식을 확인

		 do {
			실행 코드
		} while(조건식);
	*/

	//int a = 1;

	//while (a < 6) {
	//	printf("%d\n", a);
	//	a++;
	//}

	//int b = 5;
	//while (b) {
	//	printf("%d\n", b);
	//	--b;
	//}

//	int c = 1, d = 1;
//
//	while (d) {
//		printf("%d\n", c);
//		c++;
//			if (c > 9) {
//				d = 0;
//		}
//	}

	//int value = 0;
	//
	//while (value <= 0) {
	//	printf("양수 입력 : ");
	//	scanf_s("%d", &value);
	//	while (getchar() != '\n');
	//}
	//printf("value : %d\n", value);

	//int tf = 1;
	//int value = 0;
	//while (tf) {
	//	printf("양수 입력 : ");
	//	scanf_s("%d", &value);
	//	while (getchar() != '\n');
	//	if (value > 0)
	//		tf = 0;
	//}
	//printf("value :%d\n", value);

	//int n = 0, sum = 0;

	//while (n < 10 || n > 20) {
	//	printf("10 ~ 20 사이 수 입력 : ");
	//	scanf_s("%d", &n);
	//	while (getchar() != '\n');
	//}
	//	for (int i = 1; i <= n; i++) {
	//		sum += i;
	//	}
	//	printf("1~ %d까지의 합 :%d\n", n, sum);

	//int data = 0, tot = 0;

	//do {
	//	printf("숫자 입력 (종료 : 0) : ");
	//	scanf_s("%d", &data);
	//	tot += data;
	//} while (data != 0);

	//printf("입력 값의 합 : %d\n", tot);

	/*
		중첩 while문
		 외부 while문이 한 번 동작하는 동안 내부 while문 반복이 완료
	*/

	//int line = 1, no = 1;
	//
	//while (line <= 3) {
	//	printf("%d 라인 : ", line);

	//	no = 1;
	//	while (no <= 5) {
	//		printf("%d", no);
	//		no++;
	//	}
	//	puts("");
	//	line++;
	//}

//int money = 0, c = 0, cora = 1000, coffee = 300, t = 1;
//	
//	printf("----------------------------\n");
//	printf("1.콜라(%d)\t2.커피(%d)\n",cora,coffee);
//	printf("----------------------------\n");
//
//	printf("돈을 넣어 주세요 : ");
//	scanf_s("%d", &money);
//	while (getchar() != '\n');
//	puts("");
//		while (t) {
//			printf("1.콜라(%d)\t2.커피(%d) 선택 > ", cora, coffee);
//			scanf_s("%d", &c);
//			while (getchar() != '\n');
//			switch (c) {
//			case 1:
//				if (money >= cora) {
//					printf("콜라가 나옵니다\n");
//					money -= cora;
//				}
//				else {
//					puts("잔액이 부족합니다");
//				}
//				break;
//			case 2:
//				if (money >= coffee) {
//					printf("커피가 나옵니다\n");
//					money -= coffee;
//				}
//				else {
//					puts("잔액이 부족합니다");
//				}
//				break;
//			default:
//				puts("없는 제품입니다");
//			}
//			if (money >= coffee) {
//				int retry = -1;
//				printf("현재 잔액 : %d 원\n", money);
//				while (retry < 0 || retry > 1) {
//				printf("재구매 하시겠나요(0:no\t1:yes >");
//				scanf_s("%d", &retry);
//				}
//				if (retry == 0) {
//					t = 0;
//				}
//			}
//			else {
//				t = 0;
//			}
//		}
//		printf("거스름돈 : %d원\n", money);
}