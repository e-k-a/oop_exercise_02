//М8О-201Б-19 Батова Екатерина 2 вариант
/*Комплексное число в тригонометрической форме представляются
парой действительных чисел (r, j), где r – радиус (модуль), j  – угол.
Реализовать класс Complex для работы с комплексными числами. 
Обязательно должны быть присутствовать операции
-    сложения add, (r1, j1) + (r2, j2);
-    вычитания sub, (r1, j1) – (r2, j2);
-    умножения mul, (r1, j1) ´ (r2, j2);
-    деления div, (r1, j1) / (r2, j2) ;
-    сравнение equ, (r1, j1) = (r2, j2), если (r1 = r2) и (j1 = j2);
-   сопряженное число conj, conj(r, j) = (r, –j).
Реализовать операции сравнения по действительной части.
Операции сложения, вычитания, умножения, деления, сравнения на равенство должны быть выполнены в виде перегрузки операторов. 
Необходимо реализовать пользовательский литерал для работы с константами типа Complex.*/

#define _USE_MATH_DEFINES // используется длдя числа Пи
#include <cmath> 
#include <iostream>
#include "OOP2_2.h"
using namespace std;
long double operator""_rad(long double deg) {//пользовательский литерал, переводящий градусы в радианы
	return deg * M_PI / 180.0;
}
int main() {
	Complex ch1, ch2, variable;
	bool action = true;
	int counter;
	std::cout << "costom literal(4 degrees to radians):" << 4.0_rad << std::endl;
	std::cout << "0.exit\n1.addition\n2.subtraction\n3.multiplication" << std::endl;
	std::cout << "4.division\n5.conjugate number\n6.equal\n7.menu" << std::endl;
	std::cout << "enter a number for action:" << std::endl;
	std::cin >> counter;

	while (action) {
		switch (counter) {
		case 0:
			action = false;
			break;
		case 1:		 //сложение
			ch1.input();
			ch2.input();
			variable = ch1 + ch2;
			variable.output(std::cout);
			break;
		case 2:		//вычитание
			ch1.input();
			ch2.input();
			variable = ch1 - ch2;
			variable.output(std::cout);
			break;
		case 3:		//умножение
			ch1.input();
			ch2.input();
			variable = ch1 * ch2;
			variable.output(std::cout);
			break;
		case 4:		//деление
			ch1.input();
			ch2.input();
			variable = ch1 / ch2;
			variable.output(std::cout);
			break;
		case 5:		//спряженное число
			ch1.input();
			variable = --ch1;
			variable.output(std::cout);
			break;
		case 6:		//сравнение
			ch1.input();
			ch2.input();
			if (ch1 == ch2) { std::cout << "equal" << std::endl; }
			else { std::cout << "not equal" << std::endl; }
			break;
		case 7:		//меню
			std::cout << "0.exit\n1.addition\n2.subtraction\n3.multiplication\n" << std::endl;
			std::cout << "4.division\n5.conjugate number\n6.equal\n7.equal modulus\n8.menu\n" << std::endl;
			break;
		default:
			std::cout << "Oops, that input is invalid.  Please try again.\n" << std::endl;
			break;
		}
		if (action) {
			std::cout << "Enter a number for action:" << std::endl;
			std::cin >> counter;
		}
	}
}