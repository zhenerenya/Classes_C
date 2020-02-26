#include "Product.h"

Product::Product(char name[], double price, int number)
{
	strcpy_s(this->name, name);
	this->price = price;
	this->number = number;
}
 double Product::foo(double procent) //определяет стоимость товара исходя из заданного процента прибыли
{
	return this->price + this->price * (procent / 100.);
}
 void Product::print() //печатает параметры
 {
	 cout << "Name " << name << "		Price " << price << "		Number " << number << endl;
 }
 
