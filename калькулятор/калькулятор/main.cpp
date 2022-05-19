#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void Display() 
{
	cout <<"       ______________________________________________________________" << endl;
	cout << setw(8)<< "|" <<"1. Сложение"<<setw(4)<< "|" <<setw(3)<<"2. Вычитание"<<setw(4)<< "|" <<setw(3)<<"3. Умножение"<<setw(4)<< "|"<<setw(3) <<"4. Деление"<<setw(4)<< "|" << endl;
	cout <<"       |______________|_______________|_______________|_____________|" << endl;
	cout << setw(8)<< "|" <<"5. Процент"<<setw(5)<< "|" <<setw(1)<<"6. x в квадрате"<<setw(1)<< "|" <<setw(2)<<"7.x в степени y"<<"|"<<setw(2)<<"8.  log(2)"<<setw(5)<< " | " << endl;
	cout <<"       |______________|_______________|_______________|_____________|" << endl;
	cout << setw(8)<< "|" <<"9. n!"<<setw(10)<< "|" << setw(10) << "10. Корень квадратный" << setw(2) << "|" << setw(1) << "11. Корень n-степени" << setw(3) << "|" << endl;
	cout << "       |______________|_______________|_____________________________|" << endl;
}

void plys()
{
	float a = 0, b = 0, c = 0;
	cout << "Введите х и у:" << endl;
	cin >> a;
	cin >> b;
	c = a + b;
	cout << "x + y = "<< c << endl;
}

void Minus()
{
	float a = 0, b = 0, c = 0, c1 = 0;
	cout << "Введите х и у:" << endl;
	cin >> a;
	cin >> b;
	c = a - b;
	c1 = b - a;
	cout <<"a - b = " << c << endl;
	cout <<"b - a = " << c1 << endl;
}
void division()
{
	float a = 0, b = 0, c = 0,c1 = 0;
	cout << "Введите х и у:" << endl;
	cin >> a;
	cin >> b;
	c = a / b;
	c1 = b / a;
	cout <<"a / b = "<< c << endl;
	cout <<"b / a = "<< c1 << endl;
}
void multiplication()
{
	float a = 0, b = 0, c = 0;
	cout << "Введите х и у:" << endl;
	cin >> a;
	cin >> b;
	c = a * b;
	cout << c << endl;
}
void degree1()
{
	double a = 0, b = 0, c = 0, c1 = 0;
	cout << "Введите х и у:" << endl;
	cin >> a;
	cin >> b;
	c = pow(a, 2);
	c1 = pow(b, 2);
	cout << "x в степени 2 = " << c << endl;
	cout << "у в степени 2 = " << c1 << endl;
}
void degree2()
{
	float a = 0, b = 0, c = 0, c1 = 0;
	cout << "Введите х и у:" << endl;
	cin >> a;
	cin >> b;
	c = pow(a, b);
	c1 = pow(b, a);
	cout << "x в степени y = " << c << endl;
	cout << "у в степени х = " << c1 << endl;
}
void percent()
{
	float a = 0, c = 0, c1 = 0, p = 0;
	cout << "Введите процент:" << endl;
	cin >> p;
	cout << "Введите число от которого надо посчитать процент:" << endl;
	cin >> a;
	c = p / 100;
	c1 = a * c;
	cout << "процент = "<< c1 << endl;
}
void log()
{
	float a = 0, c = 0;
	cout << "Введите х:" << endl;
	cin >> a;
	c = log(a)/log(2);
	cout << "log2(x) = "<< c << endl;
}
void root1()
{
	double a = 0, b = 0, c = 0, c1 = 0;
	cout << "Введите х и у:" << endl;
	cin >> a;
	cin >> b;
	c = pow(a, 0.5);
	c1 = pow(b, 0.5);
	cout << "квадратный корень из х = " << c << endl;
	cout << "квадратный корень из у = " << c1 << endl;
	
}
void root2()
{
	float a = 0, b = 0, c = 0, c1 = 0;
	cout << "Введите х и у:" << endl;
	cin >> a;
	cin >> b;
	c = pow(a, 1 / b);
	c1 = pow(b, 1 / a);
	cout << "корень степени у из х = " << c << endl;
	cout << "корень степени х из у = " << c1 << endl;
}
int operation()
{
	int temp = 0;
	cout << "Выберети операцию:" << endl;
	cin >> temp;
	
	switch (temp)
	{
	case 1:
		plys();
		break;
	case 2:
		Minus();
		break;
	case 3:
		multiplication();
		break;
	case 4:
		division();
		break;
	case 5:
		percent();
		break;
	case 6:
		degree1();
		break;
	case 7:
		degree2();
		break;
	case 8:
		log();
		break;
	case 9:
		root1();
		break;
	case 10:
		root2();
		break;
	}
	return 0;
}
	
void fuct()
{
	double a = 0, c = 0;
	cout << "Введите х: " << endl;
	cin >> a;

}
	
int main()
{
	setlocale(LC_ALL, "RU");
	Display();
	operation();
	int t = 0;
	cout << "Продолжить? 1/0" << endl;
	cin >> t;
	if (t == 1)
	{
		return operation();
	}
	else
	{
		system("cls");
	}
	return 0;
}