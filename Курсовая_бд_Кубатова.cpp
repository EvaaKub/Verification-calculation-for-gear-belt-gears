// Курсовая_бд_Кубатова.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <iostream>
const int NotUsed = system("color E1");

float β, tk, Fпред, delta, h, da1, y, cosy, δ, С1, b, tтип, i, e, z0, α1, z2, a, u, amin, amax;
int buffer;
int m, z1, T1, n1, n2, F;

float Poiscb()
{
	float B;
	int menuPointer = 0;
	if (m == 2)
	{
		while (menuPointer != 2)
		{
			printf("\nВыберите ширину ремня:\n");
			printf(" 8\n");
			printf(" 10\n");
			printf(" 12.5\n");
			printf(" 16\n");
			scanf_s("%f", &B);

			if ((B == 8.00) || (B == 10.00) || (B == 12.50) || (B == 16.00))
			{
				system("CLS");
				menuPointer = 2;
			}
			else
			{
				printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
				buffer = getchar();
				buffer = getchar();
				system("CLS");
			}
		}
	}

	if (m == 3)
	{
		while (menuPointer != 2)
		{
			printf("\nВыберите ширину ремня:\n");
			printf(" 12.5\n");
			printf(" 16\n");
			printf(" 20\n");
			printf(" 25\n");
			scanf_s("%f", &B); //ввод через ,

			if ((B == 12.50) || (B == 16.00) || (B == 20.00) || (B == 25.00))
			{
				system("CLS");
				menuPointer = 2;
			}
			else
			{
				printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
				buffer = getchar();
				buffer = getchar();
				system("CLS");
			}
		}
	}

	if (m == 4)
	{
		while (menuPointer != 2)
		{
			printf("\nВыберите ширину ремня:\n");
			printf(" 20\n");
			printf(" 25\n");
			printf(" 32\n");
			printf(" 40\n");
			scanf_s("%f", &B);

			if ((B == 20.00) || (B == 25.00) || (B == 32.00) || (B == 40.00))
			{
				system("CLS");
				menuPointer = 2;
			}
			else
			{
				printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
				buffer = getchar();
				buffer = getchar();
				system("CLS");
			}
		}
	}

	if (m == 5)
	{
		while (menuPointer != 2)
		{
			printf("\nВыберите ширину ремня:\n");
			printf(" 25\n");
			printf(" 32\n");
			printf(" 40\n");
			printf(" 50\n");
			scanf_s("%f", &B);

			if ((B == 25.00) || (B == 32.00) || (B == 40.00) || (B == 50.00))
			{
				system("CLS");
				menuPointer = 2;
			}
			else
			{
				printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
				buffer = getchar();
				buffer = getchar();
				system("CLS");
			}
		}
	}

	if ((m == 7) || (m == 10))
	{
		while (menuPointer != 2)
		{
			printf("\nВыберите ширину ремня:\n");
			printf(" 50\n");
			printf(" 63\n");
			printf(" 80\n");
			scanf_s("%f", &B);

			if ((B == 50.00) || (B == 63.00) || (B == 80.00))
			{
				system("CLS");
				menuPointer = 2;
			}
			else
			{
				printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
				buffer = getchar();
				buffer = getchar();
				system("CLS");
			}
		}
	}

	

	return B;
}

int Poiscz1()
{
	int Z1;
	int menuPointer = 0;
	if ((m == 2) || (m == 3) || (m == 4))
	{
		while (menuPointer != 2)
		{
			printf("\nВыберите число зубьев меньшего шкива:\n");
			printf(" 12\n");
			printf(" 14\n");
			printf(" 16\n");
			printf(" 18\n");
			scanf_s("%d", &Z1);

			if ((Z1 == 12) || (Z1 == 14) || (Z1 == 16) || (Z1 == 18))
			{
				system("CLS");
				menuPointer = 2;
			}
			else
			{
				printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
				buffer = getchar();
				buffer = getchar();
				system("CLS");
			}
		}
	}
	if (m == 5)
	{
		while (menuPointer != 2)
		{
			printf("\nВыберите число зубьев меньшего шкива:\n");
			printf(" 16\n");
			printf(" 18\n");
			printf(" 20\n");
			printf(" 22\n");
			scanf_s("%d", &Z1);

			if ((Z1 == 16) || (Z1 == 18) || (Z1 == 20) || (Z1 == 22))
			{
				system("CLS");
				menuPointer = 2;
			}
			else
			{
				printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
				buffer = getchar();
				buffer = getchar();
				system("CLS");
			}
		}
	}
	if ((m == 7) || (m == 10))
	{
		while (menuPointer != 2)
		{
			printf("\nВыберите число зубьев меньшего шкива:\n");
			printf(" 20\n");
			printf(" 22\n");
			printf(" 24\n");
			printf(" 26\n");
			scanf_s("%d", &Z1);

			if ((Z1 == 20) || (Z1 == 22) || (Z1 == 24) || (Z1 == 26))
			{
				system("CLS");
				menuPointer = 2;
			}
			else
			{
				printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
				buffer = getchar();
				buffer = getchar();
				system("CLS");
			}
		}
	}

	return Z1;
}


int Poiscn1()
{
	int N1;

	if ((m == 2) && (z1 == 12))
	{
		N1 = 500;
	}
	if ((m == 2) && (z1 == 14))
	{
		N1 = 3500;
	}
	if ((m == 2) && (z1 == 16))
	{
		N1 = 5000;
	}
	if ((m == 2) && (z1 == 18))
	{
		N1 = 7000;
	}


	if ((m == 3) && (z1 == 12))
	{
		N1 = 500;
	}
	if ((m == 3) && (z1 == 14))
	{
		N1 = 1500;
	}
	if ((m == 3) && (z1 == 16))
	{
		N1 = 2500;
	}
	if ((m == 3) && (z1 == 18))
	{
		N1 = 4000;
	}


	if ((m == 4) && (z1 == 12))
	{
		N1 = 500;
	}
	if ((m == 4) && (z1 == 14))
	{
		N1 = 1000;
	}
	if ((m == 4) && (z1 == 16))
	{
		N1 = 1500;
	}
	if ((m == 4) && (z1 == 18))
	{
		N1 = 2500;
	}


	if ((m == 5) && (z1 == 16))
	{
		N1 = 500;
	}
	if ((m == 5) && (z1 == 18))
	{
		N1 = 1000;
	}
	if ((m == 5) && (z1 == 20))
	{
		N1 = 2000;
	}
	if ((m == 5) && (z1 == 22))
	{
		N1 = 3500;
	}


	if ((m == 7) && (z1 == 20))
	{
		N1 = 500;
	}
	if ((m == 7) && (z1 == 22))
	{
		N1 = 1000;
	}
	if ((m == 7) && (z1 == 24))
	{
		N1 = 1500;
	}
	if ((m == 7) && (z1 == 26))
	{
		N1 = 2000;
	}
	
	if ((m == 10) && (z1 == 20))
	{
		N1 = 500;
	}
	if ((m == 10) && (z1 == 22))
	{
		N1 = 1000;
	}
	if ((m == 10) && (z1 == 24))
	{
		N1 = 1500;
	}
	if ((m == 10) && (z1 == 26))
	{
		N1 = 2000;
	}



	return N1;
}

int menu2() 
{
	h = 0.6;
	y = 25;
	cosy = cos(y);

	int menuPointer = 0;
	while (menuPointer != 2)
	{
		printf("\nВыберите модуль ремня:\n");
		printf(" 2\n");
		printf(" 3\n");
		printf(" 4\n");
		printf(" 5\n");
		printf(" 7\n");
		printf(" 10\n");
		scanf_s("%d", &m);

		if ((m == 2) || (m == 3) || (m == 4) || (m == 5) || (m == 7) || (m == 10))
		{
			system("CLS");
			menuPointer = 2;
		}
		else 
		{
			printf("\n\t| Такое значение непредусмотрено! Выберите повторно из предоставленного списка | \n");
			buffer = getchar();
			buffer = getchar();
			system("CLS");
		}
	}

	z1 = Poiscz1();
	
	if ((m == 2) || (m == 3) || (m == 4))
	{
		δ = 0.6;
	}
	if ((m == 5) || (m == 7) || (m == 10))
	{
		δ = 1.3;
	}

	b = Poiscb();

	if ((m == 2) || (m == 3) || (m == 4))
	{
		tтип = 7;
	}
	if ((m == 5) || (m == 7) || (m == 10))
	{
		tтип = 21;
	}

	if (m == 2)
	{
		i = 0.0018;
	}
	if (m == 3)
	{
		i = 0.0025;
	}
	if (m == 4)
	{
		i = 0.003;
	}
	if (m == 5)
	{
		i = 0.0013;
	}
	if (m == 7)
	{
		i = 0.0019;
	}
	if (m == 10)
	{
		i = 0.0025;
	}


	printf(" Введите любое целое число от 1 до 10:\n");
	scanf_s("%d", &T1);
	system("CLS");

	F = 2 * (10 ^ 3) * T1 / (m * z1) +5;

	С1 = 0.15*F*i*z1 / b;

	da1 = m*z1 - 2*δ + С1;

	β = sqrt(4 * h / (da1 * cosy));


	if (m == 2)
	{
		e = 0.16;
	}
	if (m == 3)
	{
		e = 0.17;
	}
	if (m == 4)
	{
		e = 0.18;
	}
	if (m == 5)
	{
		e = 0.20;
	}
	if (m == 7)
	{
		e = 0.21;
	}
	if (m == 10)
	{
		e = 0.22;
	}


	n1 = Poiscn1();

	printf(" Введите любое целое число, которое меньше %d \n", n1);
	scanf_s("%d", &n2);
	system("CLS");

	u = n1/n2;
	
	z2 = z1 * u;

	amin = 0.5*m*(z1 + z2) + 2*m;
	amax = 2*m*(z1 + z2);

	printf(" Введите любое число, которое %f<= и <=%f \n", amin, amax);
	scanf_s("%f", &a);
	system("CLS");

	tk = 0.45*F*i / b;

	α1 = 180 - (m*(z2 - z1) / a)*57.3;


	z0 = z1*α1 / 360;


	Fпред = ((h*tan(y) - 0.5 * da1*(β - sin(β)) + tk)*b) / (e / z0 + i);
	printf(" Искомое значение равняется:  %f \n", Fпред);


	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int menuPointer = 0;
	while (menuPointer != 2)
	{
		menuPointer = 0;
		printf("Меню\n");  
		printf("\nВыберите пункт:\n");
		printf("1) Начать работу с кодом\n");
		printf("2) Выход\n");
		scanf_s("%d", &menuPointer);
		if (menuPointer == 1)
		{
			system("CLS");
			menu2();  
		}
		else if (menuPointer == 2)
		{
			system("cls");
			printf("\n\t| Работа завершена, возвращайтесь скорее! :3 | \n");
			exit(0);
		}
		else printf("\n\t| Такого пункта нет! Выберите пункт повторно из предоставленного списка | \n");
		buffer = getchar();
		buffer = getchar();
		system("CLS");
	}
    std::cout << "Hello World!\n";
}

