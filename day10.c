#include <stdio.h>
int main() {

	/*
		while��
		 ���ǽ��� ��� ���� ���� Ư�� �ڵ带 �ݺ�

		 while( ���ǽ� ){
			���� �ڵ�
		 }

		do ~ while��
		 �ݺ��� �ڵ带 ���� �����ϰ� ���ǽ��� Ȯ��

		 do {
			���� �ڵ�
		} while(���ǽ�);
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
	//	printf("��� �Է� : ");
	//	scanf_s("%d", &value);
	//	while (getchar() != '\n');
	//}
	//printf("value : %d\n", value);

	//int tf = 1;
	//int value = 0;
	//while (tf) {
	//	printf("��� �Է� : ");
	//	scanf_s("%d", &value);
	//	while (getchar() != '\n');
	//	if (value > 0)
	//		tf = 0;
	//}
	//printf("value :%d\n", value);

	//int n = 0, sum = 0;

	//while (n < 10 || n > 20) {
	//	printf("10 ~ 20 ���� �� �Է� : ");
	//	scanf_s("%d", &n);
	//	while (getchar() != '\n');
	//}
	//	for (int i = 1; i <= n; i++) {
	//		sum += i;
	//	}
	//	printf("1~ %d������ �� :%d\n", n, sum);

	//int data = 0, tot = 0;

	//do {
	//	printf("���� �Է� (���� : 0) : ");
	//	scanf_s("%d", &data);
	//	tot += data;
	//} while (data != 0);

	//printf("�Է� ���� �� : %d\n", tot);

	/*
		��ø while��
		 �ܺ� while���� �� �� �����ϴ� ���� ���� while�� �ݺ��� �Ϸ�
	*/

	//int line = 1, no = 1;
	//
	//while (line <= 3) {
	//	printf("%d ���� : ", line);

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
//	printf("1.�ݶ�(%d)\t2.Ŀ��(%d)\n",cora,coffee);
//	printf("----------------------------\n");
//
//	printf("���� �־� �ּ��� : ");
//	scanf_s("%d", &money);
//	while (getchar() != '\n');
//	puts("");
//		while (t) {
//			printf("1.�ݶ�(%d)\t2.Ŀ��(%d) ���� > ", cora, coffee);
//			scanf_s("%d", &c);
//			while (getchar() != '\n');
//			switch (c) {
//			case 1:
//				if (money >= cora) {
//					printf("�ݶ� ���ɴϴ�\n");
//					money -= cora;
//				}
//				else {
//					puts("�ܾ��� �����մϴ�");
//				}
//				break;
//			case 2:
//				if (money >= coffee) {
//					printf("Ŀ�ǰ� ���ɴϴ�\n");
//					money -= coffee;
//				}
//				else {
//					puts("�ܾ��� �����մϴ�");
//				}
//				break;
//			default:
//				puts("���� ��ǰ�Դϴ�");
//			}
//			if (money >= coffee) {
//				int retry = -1;
//				printf("���� �ܾ� : %d ��\n", money);
//				while (retry < 0 || retry > 1) {
//				printf("�籸�� �Ͻðڳ���(0:no\t1:yes >");
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
//		printf("�Ž����� : %d��\n", money);
}