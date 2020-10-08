//М8О-201Б-19 Батова Екатерина 2 вариант
#include <iostream>
#include <math.h>
#include "OOP2_2.h"
using namespace std;

Complex::Complex() { //инициализация по умолчанию
	r = 0;
	j = 0;
}

Complex::Complex(double a, double b) {//инициализация
	r = a;
	j = b;
	if (j >= 360) { j = j - 360; }
}

Complex Complex::operator+(Complex add) {//перегрузка оператора сложения
	Complex c;
	c.r = this->r + add.r;
	c.j = this->j + add.j;
	c = Complex(c.r, c.j);
	return c;
}

Complex Complex::operator-(Complex sub) {//перегрузка оператора сложения вычитания
	Complex c;
	c.r = this->r - sub.r;
	c.j = this->j - sub.j;
	c = Complex(c.r, c.j);
	return c;
}

Complex Complex::operator*(Complex mul) {//перегрузка оператора умножения
	Complex c;
	c.r = this->r * mul.r - this->j * mul.j;
	c.j = this->r * mul.j + this->j * mul.r;
	c = Complex(c.r, c.j);
	return c;
}

Complex Complex::operator/(Complex div) {//перегрузка оператора деления
	Complex c;
	if (div.r == 0 && div.j == 0) {
		std::cout << "invalid numbers!" << std::endl;
		return Complex();
	}
	else {
		c.r = (this->r * div.r + this->j * div.j) / (div.r * div.r + div.j * div.j);
		c.j = (this->j * div.r - this->r * div.j) / (div.r*div.r + div.j *div.j);
		c = Complex(c.r, c.j);
		return c;
	}
}

bool Complex::operator==(Complex const equ) {//перегрузка оператора сравнения
	return (r == equ.r && j == equ.j);
}

Complex Complex::operator--() {//перегрузка оператора сопряженного числа
	Complex c;
	c.r = r;
	if (j == 0) { c.j = j;}
	else { c.j = -j; }
	return c;
}

void Complex::input() { //ввод комплекного числа
	std::cout << "enter a radius:" << std::endl;
	cin >> r;
	std::cout << "enter a angle (degrees):" << std::endl;
	cin >> j;

}

void Complex::output(std::ostream& ch) {//вывод комплексного числа
	ch << r << " * " << "(cos" << j << "+i*sin" << j << ")" << std::endl;
}

