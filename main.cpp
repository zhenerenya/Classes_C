#include "Product.h"

int main()
{
	int n; //количество видов товара
	double procent; //процент прибыли

	double price; //цена
	char name[20]; //название
	int num; //количество товара

	double sum = 0;

	cout << "Write number" << endl;
	cin >> n;
	cout << "Write procent" << endl;
	cin >> procent;


	Product** pp; //указатель на массив указателей
	pp = new Product * [n]; //массив указателей

	//Иницилизируем поля класса
	for (int i = 0; i < n; ++i)
	{

		cout << "Product #" << i + 1 << endl << "Name ";
		cin >> name;
		cout << "Price: ";
		cin >> price;
		cout << "Amount: ";
		cin >> num;
		cout << endl << endl << endl << endl;
		pp[i] = new Product(name, price, num); //создание объекта динамически
	}

	//печать всех параметров 
	for (int i = 0; i < n; ++i)
	{
		pp[i]->print();
	}
	
	//расчёт суммы
	for (int i = 0; i < n; ++i)
	{
		sum += pp[i]->foo(procent);
	}
	cout << "Summa " << sum << endl;
	
	system("pause");
	return 0;
}
