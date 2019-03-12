// Les19.cpp : Крестики - Нолики
//

#include "pch.h"
#include <iostream>
using namespace std;

const int N = 3;            // размерность массива
int tic_tac_toe[N][N];      // массив 3х3
int a1, b1, a2, b2, flag_space, win1, win2;         //   a1 и b1  - координаты Игрок_1 ; a2 и b2  - координаты Игрок_2


int main()
{
	setlocale(LC_ALL, "rus");

	// Первоночальное заполнение массива -1 (условно пустым значением)
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			tic_tac_toe[i][j] = - 1;
		}
	}
//------------------------------------------Ввод Игрок №1----------------------------------------------------------------
	do 
	{
		do
		{
			do
			{
				cout << "Игрок 1 \n";
				cout << "Введите координаты (от 0 до 2) крестика (строка, столбец)\n";
				cin >> a1;
				cin >> b1;

			} while (a1 < 0 || a1 > 2 || b1 < 0 || b1 > 2);
		} while (tic_tac_toe[a1][b1] != -1);

		tic_tac_toe[a1][b1] = 1;    // Ставим крестик



	//-------------------------------------Ввод Игрок №2--------------------------------------------------------------------

		do 
		{
			do
			{
				cout << "Игрок 2 \n";
				cout << "Введите координаты (от 0 до 2) крестика (строка, столбец)\n";
				cin >> a1;
				cin >> b1;
				
			} while (a2 < 0 || a2 > 2 || b2 < 0 || b2 > 2);
		} while (tic_tac_toe[a2][b2] != -1);

		tic_tac_toe[a2][b2] = 0;     // Ставим нолик

		cout << "\n";
		//----------------------------------------------- Вывод двумерного массива с заменой элементов

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (tic_tac_toe[i][j] == -1)
				{
					cout << "   " << " | ";
				}
				else if (tic_tac_toe[i][j] == 1)
				{
					cout << " X " << " | ";
				}
				else if (tic_tac_toe[i][j] == 0)
				{
					cout << " O " << " | ";
				}
			}
			cout << "\n";
		}
		cout << "\n";

    //---------------------------------Проверка на то что все поля заполнены------------------------------------------------
		flag_space = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (tic_tac_toe[i][j] == -1)
				{
					flag_space++;
				}

			}
		}
		
		win1 = win2 = 1;
		//-----------------------------Проверка на выигрыш крестиком-------------------------------------------------------------

		if (tic_tac_toe[0][0] == 1 && tic_tac_toe[1][1] == 1 && tic_tac_toe[2][2] == 1)
		{
			win1 = 0;
		}
		else if (tic_tac_toe[0][2] == 1 && tic_tac_toe[1][1] == 1 && tic_tac_toe[2][0] == 1)
		{
			win1 = 0;
		}
		else if (tic_tac_toe[0][0] == 1 && tic_tac_toe[1][0] == 1 && tic_tac_toe[2][0] == 1)
		{
			win1 = 0;
		}
		else if (tic_tac_toe[0][1] == 1 && tic_tac_toe[1][1] == 1 && tic_tac_toe[2][1] == 1)
		{
			win1 = 0;
		}
		else if (tic_tac_toe[0][2] == 1 && tic_tac_toe[1][2] == 1 && tic_tac_toe[2][2] == 1)
		{
			win1 = 0;
		}
		else if (tic_tac_toe[0][0] == 1 && tic_tac_toe[0][1] == 1 && tic_tac_toe[0][2] == 1)
		{
			win1 = 0;
		}
		else if (tic_tac_toe[1][0] == 1 && tic_tac_toe[1][1] == 1 && tic_tac_toe[1][2] == 1)
		{
			win1 = 0;
		}
		else if (tic_tac_toe[2][0] == 1 && tic_tac_toe[2][1] == 1 && tic_tac_toe[2][2] == 1)
		{
			win1 = 0;
		}
		//------------------------------Проверка на выигрыш ноликом--------------------------------------------------------------
		if (tic_tac_toe[0][0] == 0 && tic_tac_toe[1][1] == 0 && tic_tac_toe[2][2] == 0)
		{
			win2 = 0;
		}
		else if (tic_tac_toe[0][2] == 0 && tic_tac_toe[1][1] == 0 && tic_tac_toe[2][0] == 0)
		{
			win2 = 0;
		}
		else if (tic_tac_toe[0][0] == 0 && tic_tac_toe[1][0] == 0 && tic_tac_toe[2][0] == 0)
		{
			win2 = 0;
		}
		else if (tic_tac_toe[0][1] == 0 && tic_tac_toe[1][1] == 0 && tic_tac_toe[2][1] == 0)
		{
			win2 = 0;
		}
		else if (tic_tac_toe[0][2] == 0 && tic_tac_toe[1][2] == 0 && tic_tac_toe[2][2] == 0)
		{
			win2 = 0;
		}
		else if (tic_tac_toe[0][0] == 0 && tic_tac_toe[0][1] == 0 && tic_tac_toe[0][2] == 0)
		{
			win2 = 0;
		}
		else if (tic_tac_toe[1][0] == 0 && tic_tac_toe[1][1] == 0 && tic_tac_toe[1][2] == 0)
		{
			win2 = 0;
		}
		else if (tic_tac_toe[2][0] == 0 && tic_tac_toe[2][1] == 0 && tic_tac_toe[2][2] == 0)
		{
			win2 = 0;
		}

	} while (flag_space != 0 || win1 != 0 || win2 != 0);

	//----------------------------------------------------------------------------------------------------------------------------
	
	if (win1 == 0)
	{
		cout << "Выиграл Игрок №1\n";
	}
	else if (win2 == 0)
	{
		cout << "Выиграл Игрок №2\n";
	}
	else if (flag_space == 0)
	{
		cout << "Игра Окончена: \"Ничья\"\n";
	}

	
	
}


