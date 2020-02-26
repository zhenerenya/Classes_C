#pragma once
#include <string>
#include <iostream>

using namespace std;

class Product
{
	string name; //наименование
	double price; //закупочная цена
	int number; //количество товара

public:
	Product(string name, double price, int number);
	~Product();
	double foo(double procent); //определяет стоимость товара исходя из заданного процента прибыли
	void print(); //печатает параметры
};
