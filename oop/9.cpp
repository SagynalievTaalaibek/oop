//#include <iostream>
//#include<cstdlib> // для генерации рандомных чисел
//#include <ctime> // содержит time()
//
//using namespace std;
//
//const int SIZE = 5;
//
//class Array
//{
//private:
//	int array[SIZE];
//public:
//	void set()
//	{
//		for (int i = 0; i < SIZE; i++)
//		{
//			array[i] = rand() % 10;
//		}
//	}
//	int getel(int index)
//	{
//		if (index < 0 || index >= SIZE)
//		{
//			throw exception("Индекс выходит за пределы массива");
//		}
//		return array[index];
//	}
//	void putel(int value, int index) {
//		if (index < 0 || index > SIZE)
//		{
//			throw exception("Неверно задан индекс");
//		}
//		else
//		{
//			array[index] = value;
//			cout << "Элемент успешно заменен" << endl;
//		}
//	}
//
//};
//
//void print_menu() {
//	cout << "1. Получить определенный элемент массива" << endl;
//	cout << "2. Заменить элемент массива" << endl;
//	cout << "3. Вывести все элементы массива" << endl;
//	cout << "4. Выход" << endl;
//	cout << ">>>>";
//}
//
//int main()
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "ru");
//
//	Array array;
//	array.set();
//	int variant = 0;
//
//	cout << "Заполнение массива случайными числами" << endl;
//	cout << "------------------------------------" << endl;
//
//	print_menu();
//
//	cin >> variant;
//	do
//	{
//		if (variant == 1)
//		{
//			try
//			{
//				int index;
//				cout << "Введите индекс элемента:";
//				cin >> index;
//				cout << array.getel(index - 1) << endl;
//				print_menu();
//				cin >> variant;
//			}
//			catch (const std::exception& ex)
//			{
//				cout << "Error!" << ex.what() << endl;
//				print_menu();
//
//			}
//		}
//		if (variant == 2)
//		{
//			try
//			{
//				int value, index;
//				cout << "Введите элемент:";
//				cin >> value;
//				cout << "Введите индекс элемента:";
//				cin >> index;
//
//				array.putel(value, index - 1);
//				print_menu();
//				cin >> variant;
//			}
//			catch (const std::exception& ex)
//			{
//				cout << "Error!" << ex.what() << endl;
//				print_menu();
//				cin >> variant;
//			}
//		}
//		if (variant == 3)
//		{
//			try
//			{
//				for (int i = 0; i < SIZE; i++)
//				{
//					cout << array.getel(i) << "  ";
//				}
//				cout << endl;
//				print_menu();
//				cin >> variant;
//
//			}
//			catch (const std::exception& ex)
//			{
//				cout << "Error!" << ex.what() << endl;
//			}
//		}
//	} while (variant != 4);
//
//	system("pause");
//	return 0;
//}




//2 ЗАДАНИЕ
//------------------------------------------------------             
//#include <iostream>
//using namespace std;
//
//class Area
//{
//private:
//	int a;
//	int b;
//	int r;
//public:
//	class Error {};
//	Area()
//	{
//		a = 0, b = 0, r = 0;
//	}
//	~Area() {}
//	int area(int a, int b)
//	{
//		if (a < 1 || b < 1)
//		{
//			throw Error();
//		}
//		return a * b;
//	}
//	int area(int r)
//	{
//		if (r < 1)
//		{
//			throw Error();
//		}
//		return pow(r, 2);
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	Area area;
//	int a, b, h, s;
//	string menuItem;
//	while (true)
//	{
//		system("cls");
//		cout << "Menu\n1.Площадь треугольника\n2.Площадь Квадрата\n\n : ";
//		cin >> menuItem;
//		if (menuItem == "1")
//		{
//			system("cls");
//			try
//			{
//				cout << "Введите строну\"a\": ";
//				cin >> a;
//				cout << "Введите сторону\"b\": ";
//				cin >> b;
//				s = area.area(a, b);
//				cout << "Площадь квадрата: " << s << endl;
//			}
//			catch (Area::Error)
//			{
//				cout << "Error!" << endl;
//			}
//			system("pause");
//		}
//		if (menuItem == "2")
//		{
//			system("cls");
//			try
//			{
//				cout << "Введите сторону квадрата: ";
//				cin >> h;
//				s = area.area(h);
//				cout << "Площаль круга равна: " << s << endl;
//			}
//			catch (Area::Error)
//			{
//				cout << "Error!" << endl;
//			}
//			system("pause");
//		}
//		if (menuItem == "exit")
//		{
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}