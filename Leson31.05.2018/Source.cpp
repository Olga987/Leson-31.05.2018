#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n == 1)
	{
#pragma region 1.�������� �������, ������� �������� ��������, ����� ������ ���� �� ����� X, Y � Z ������ ����.
		int x = 0, y = 0, z = 0;

		x = 1 + rand() % 1000;
		y = 1 + rand() % 1000;
		z = 1 + rand() % 1000;

		printf("%d - %d - %d\n", x, y, z);

		if (x % 5 == 0 && y % 5 != 0 && z % 5 != 0)
			printf("������� ����� %d\n", x);
		else if (x % 5 != 0 && y % 5 == 0 && z % 5 != 0)
			printf("������� ����� %d\n", y);
		else if (x % 5 != 0 && y % 5 != 0 && z % 5 == 0)
			printf("������� ����� %d\n", z);
		else
			printf("��� ������� �����\n");
#pragma endregion
	}
	else if (n == 2)
	{
#pragma region 2.	�������� �������, ������� �������� ��������, ����� ���� �� ���� �� ����� X, Y � Z ������ 80

		int x = 0, y = 0, z = 0;

		x = 1 + rand() % 100;
		y = 1 + rand() % 100;
		z = 1 + rand() % 100;

		if (x > 80 || y > 80 || z > 80)
			printf("true\n");
		else
			printf("false\n");
#pragma endregion
	}
	else if (n == 3)
	{
#pragma region 3.	�������� ���������� ���������, ������� ����������, ��� �����  � �� �����������   ���������  �� - 10 �� - 1 ��� ��������� �� 2 �� 15.

		int a = 0;
		a = 1 + rand() % 100;

		//printf("%d\n", a);

		if (a > -1 || a < -10 || a < 2 || a>15)
			printf("true\n");
		else
			printf("false\n");

#pragma endregion
	}
	else if (n == 4)
	{
#pragma region  4.	�������� ���������� ���������, ������� ����������, ��� ����� � �������� ��������������, �� �� ����� 4999.

		int a = 0;
		a = 1 + rand() % 5000;

		printf("%d\n", a);

		if (a > 1000 && a != 4999)
			printf("true\n");
		else
			printf("false\n");
#pragma endregion
	}
	else if (n == 5)
	{
#pragma region 5.	�������� ���������� ���������, ������������ ����� ����� ������ �/B ��� C/D
		int a = 0, b = 0, c = 0, d = 0;

		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;
		c = 1 + rand() % 1000;
		d = 1 + rand() % 1000;


		if ((a / b) > (c / d))
			printf("������ a/b\n");
		else
			printf("������ c/d\n");
#pragma endregion	
	}
	else if (n == 6)
	{
		//6.	���� ���������� ���� ��������� ����� �, � (����� �����, ������� � ��������� 1-8) 
				//��������, ��� ����� ������ ���� ����� (1,1) �������� ������, ��������� ���������� ������������: 
				//������� ���� �������� �����
		int x = 0, y = 0;

		x = 1 + rand() % 8;
		y = 1 + rand() % 8;

		printf("%d - %d\n", x, y);

		/*(x+y)%2==0 ������*/

		if (x % 2 != 0 && y % 2 == 0)
			printf("������ �����\n");
		else if (x % 2 != 0 && y % 2 != 0)
			printf("������  ������\n");
		else if (x % 2 == 0 && y % 2 != 0)
			printf("������  �����\n");
		else if (x % 2 == 0 && y % 2 == 0)
			printf("������  ������\n");

	}
	else if (n == 7)
	{
#pragma region 7.	���� ���������� ���� ������ ����� ��������� ����� �1, �1, �2, �2

		int x = 0, y = 0, x1 = 0, y1 = 0;

		x = 1 + rand() % 8;
		y = 1 + rand() % 8;
		x1 = 1 + rand() % 8;
		y1 = 1 + rand() % 8;

		printf("%d - %d -%d -%d\n", x, y, x1, y1);

		if ((x == x1) || (y == y1))
			printf("����� ���� \n");
		else
			printf("����� �� ������� \n");

#pragma endregion
	}
	else if (n == 8) {
		int v = 0;
		printf("������� ����� �������: ");
		scanf("%d", &v);

		if (v == 1) {
			// a.� ��� � � �� �;
			int a = 1, b = 0, c = 0;

			if (a || b && !c)
				printf("true\n");
		}
		else if (v == 2) {
			int a = 1, b = 0, c = 0;
			if (!a && !b)
				printf("folse\n");
		}
		else if (v == 3) {
			int a = 1, b = 0, c = 0;
			if (!(a && c) || b)
				printf("true\n");
		}
		else if (v == 4) {
			int a = 1, b = 0, c = 0;
			if (a && (!b || c))
				printf("true\n");
		}
		else if (v == 5) {
			int a = 1, b = 0, c = 0;
			if (a || (!(b || c)))
				printf("true\n");
		}
	}

	else if (n == 9)
	{
#pragma region 9.	��������� �������� ����������� ���������:

		int x = 1, y = 2;
		if ((x >= 0) || (y * 2 != 4))
			printf("a:true\n");
		else if ((x>=0)&&(y*2!=4))
			printf("b:folse\n");

		 x = 2, y = 1;

		 if((x*y!=0)&&(y>x))
			 printf("c:folse\n");
		 else if((x*y!=0)||(y<x))
			 printf("d:true\n");

	
	}
}