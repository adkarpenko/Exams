#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task1()
{
	int  s, q1, q2, q4, q8, q16, q32, q64;
	printf("Введите число:");
	scanf_s("%d", &s);
    q64= s / 64;
    s = s % 64;
    q32 = s / 32;
    s = s % 32;
   q16 = s / 16;
   s= s % 16;
   q8 = s / 8;
   s = s % 8;
    q4= s / 4;
   s= s % 4;
   q2 = s / 2;
   s = s % 2;
  q1 = s;
	
  printf("Итого 64-ти значных купюр:%d\n", q64);
  printf("Итого 32 значных купюр:%d\n", q32);
  printf("Итого 16-ти значных купюр:%d\n", q16);
  printf("Итого 8-ми значных купюр:%d\n", q8);
  printf("Итого четырехзначных купюр:%d\n", q4);
  printf("Итого двузначных купюр:%d\n", q2);
  printf("Итого одно значных купюр:%d\n", q1);
}

void task2()
{
	int s = 0;
	for (size_t n = 0; n < 50; n++)
	{
		if (n%2>0)
		{
			
			s = s + n;
		}
	}
	printf("Сумма:%d\n", s);
}
void task3()
{
	int s;
	int a = 1 + rand() % 10000;
	int b = 1 + rand() % 10000;
	int c = 1 + rand() % 10000;
	if (a>1000 && b>1000 && c>1000 )
	{
		s = a +b + c;
		printf("Сумма: %d\n", s);
	}
    if (a>1000 && b>1000 && c<1000)
	{
		s = a + b;
		printf("Сумма: %d\n", s);
	}
	if (b > 1000 && c > 1000 && a < 1000)
	{
		s = c + b;
		printf("Сумма: %d\n", s);
	}
	if (a > 1000 && c > 1000 && b < 1000)
	{
		s = a + c;
		printf("Сумма: %d\n", s);
	}
	else if(a<1000 && b<1000 && c<1000)
	{
		printf("Нет товаров  ценой больше 1000 \n");
	}
}
void task4()
{
	int s;
	int a = 17 + rand() % 100;
	int b = 17 + rand() % 100;
	int c = 17 + rand() % 100;
	s = a + b + c;
	printf("Количество страниц в первом журнале:%d\n", a);
	printf("Количество страниц во втором журнале:%d\n", b);
	printf("Количество страниц в третьем журнале:%d\n", c);
	printf("Сумма страниц журналов:%d\n", s);
}

void task5()
{
	int s;
	int s1 = 1 + rand() % 40;
	int s3 = 1 + rand() % 37;
	int s5 = 1 + rand() % 32;
	int s7 = 1 + rand() % 30;
	int s9 = 1 + rand() % 27;
	int s11 = 1 + rand() % 25;
	for (size_t n = 1; n <=11; n++)
	{
		if (n % 2 > 0)
		{
          s = s1+s3+s5+s7+s9+s11;
		}
	}
	printf("Итого детей в первых классах:%d\n", s1);
	printf("Итого детей в третьих классах:%d\n", s3);
	printf("Итого детей в пятых классах:%d\n", s5);
	printf("Итого детей в седьмых классах:%d\n", s7);
	printf("Итого детей в девятых классах:%d\n", s9);
	printf("Итого детей в одиннадцатых классах:%d\n", s11);
	printf("Итого детей:%d\n", s);
}

void task6()
{
	int n;
	int b = 0;
	int d = 0;
	printf("Количество людей в группе:");
	scanf_s("%d", &n);
	for (size_t i = 1; i < n; i++)
	{
		int a = 1980 + rand() % 130;
		if (a <1985)
		{
			b++;
		}
		if (a > 1990)
		{
			d++;
		}
		
	}
	printf("Количество людей родившихся после 1990 года:%d\n", d);
	
	printf("Количество людей родившихся до 1985 года:%d\n", b);
}
void task7()
{
	int c=0;
	int win = 1 + rand() % 18;
	int lose = 1 + rand() % 18;
	while (win > lose)
		c++;
	printf("Количество побед:%d\n", win);
	printf("Количество проигрышей:%d\n", lose);
	printf("Всего команд:%d\n", c);
}
void task8()
{
	int n;
	int a;
	int b = 0;
	int d = 0;
	printf("Количество людей в группе:");
	scanf_s("%d", &n);
	for (size_t i = 1; i < n; i++)
	{
		int a = 1 + rand() % 4;
		if (a=2)
		{
			b++;
		}
		if (a > 2)
		{
			d++;
		}
		printf("Оценки :%d\n", a);
	}
	printf("Количество людей ,которые получшили не 2 :%d\n", d);
    printf("Количество людей ,получивших 2 :%d\n", b);
}
void task9()
{
	int n;
	int b = 0;
	int d = 0;
	printf("Количество людей в группе:");
	scanf_s("%d", &n);
	for (size_t i = 1; i <= n; i++)
	{
		int a = 1 + rand() % 130;
		if (a < 100)
		{
			b++;
		}
		if (a > 100)
		{
			d++;
		}

	}
	printf("Количество полных людей %d\n", d);

	printf("Количество худых людей %d\n", b);

}
void task10()
{
	int time1 = 120;
	int time;
	for (size_t i = 1; i < 11; i++)
	{
		int time = 1 + rand() % 119;
		if (time < time1)
			printf("Минуты:%d\nПоследние минуты:%d\n", time, time1);
	}
}
void task11()
{
	int n;
	int s1 = rand() % 10;
	printf("Оценка первого судьи:%d\n", s1);
	int s2 = rand() % 10;
	printf("Оценка второго судьи:%d\n", s2);
	int s3 = rand() % 10;
	printf("Оценка третьего судьи:%d\n", s3);
	int s4 = rand() % 10;
	printf("Оценка четвертого судьи:%d\n", s4);
	int s5 = rand() % 10;
	int o;
	printf("Оценка всех судей:%d\n", s5);
	printf("Количество людей в группе:");
	scanf_s("%d", &n);
	for (size_t i = 0; i <= n; i++)
	{



		if (s1 == s2 || s1 == s3 || s1 == s4 || s1 == s5, s1 == 1)
		{
			s1 = 0;
		}
		if (s1 == s2 || s1 == s3 || s1 == s4 || s1 == s5, s1 == 10)
		{
			s1 = 0;
		}
		o = s1 + s2 + s3 + s4 + s5;
		printf("оценка: %d\n", o);
	}
}
void task12()
{
	int m, n;
	printf("Количество предметов:");
	scanf_s("%d", &n);
	printf("Количество ящиков:");
	scanf_s("%d", &m);
	if (n > m)
	{
		printf("Нет решений\n");
	}
	else
	{


		for (size_t i = 0; i < m; i++)
		{
			if (i > n)
			{
				i = 0;
			}



			else
			{
				i++;
			}
		}
		do
		{
			for (size_t i = 0; i < m; i++)
				printf("Итого:%d\n", i);
			system("pause");
		} 
		
		while (true);
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int task = 0;
	int flag;
	int a;
	do
	{
		printf("Введите номер задания: ");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
		{
			task1();
		}
		break;
		case 2:
		{
			task2();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		case 4:
		{
			task4();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		case 6:
		{
			task6();
		}
		break;
		case 7:
		{
			task7();
		}
		break;
		case 8:
		{
			task8();
		}
		break;
		case 9:
		{
			task9();
		}
		break;
		case 10:
		{
			task10();
		}
		break;
		case 11:
		{
			task11();
		}
		break;
		case 12:
		{
			task12();
		}
		break;
		default:
			break;

		}
	
		printf("Хотите продолжить? 1/0 \n");
		scanf_s("%d", &flag);
	} 
	while (flag == 1);
	system("pause");
}