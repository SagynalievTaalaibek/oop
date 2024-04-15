//#include <iostream>
//#include<cstdlib> // ��� ��������� ��������� �����
//#include <ctime> // �������� time()
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
//			throw exception("������ ������� �� ������� �������");
//		}
//		return array[index];
//	}
//	void putel(int value, int index) {
//		if (index < 0 || index > SIZE)
//		{
//			throw exception("������� ����� ������");
//		}
//		else
//		{
//			array[index] = value;
//			cout << "������� ������� �������" << endl;
//		}
//	}
//
//};
//
//void print_menu() {
//	cout << "1. �������� ������������ ������� �������" << endl;
//	cout << "2. �������� ������� �������" << endl;
//	cout << "3. ������� ��� �������� �������" << endl;
//	cout << "4. �����" << endl;
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
//	cout << "���������� ������� ���������� �������" << endl;
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
//				cout << "������� ������ ��������:";
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
//				cout << "������� �������:";
//				cin >> value;
//				cout << "������� ������ ��������:";
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




//2 �������
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
//		cout << "Menu\n1.������� ������������\n2.������� ��������\n\n : ";
//		cin >> menuItem;
//		if (menuItem == "1")
//		{
//			system("cls");
//			try
//			{
//				cout << "������� ������\"a\": ";
//				cin >> a;
//				cout << "������� �������\"b\": ";
//				cin >> b;
//				s = area.area(a, b);
//				cout << "������� ��������: " << s << endl;
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
//				cout << "������� ������� ��������: ";
//				cin >> h;
//				s = area.area(h);
//				cout << "������� ����� �����: " << s << endl;
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