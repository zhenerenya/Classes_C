#pragma once
#include <string>
#include <iostream>

using namespace std;

class Product
{
	char name[20]; //наименование
	double price; //закупочная цена
	int number; //количество товара

public:
	Product(char name[], double price, int number);
	~Product();
	double foo(double procent); //определяет стоимость товара исходя из заданного процента прибыли
	void print(); //печатает параметры
};
