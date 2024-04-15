
#include<iostream>
#include<ctime>
using namespace std;

class AntiaircraftGun {
private:
	static double p;   //статическое поле /вероятность попадания выстрела
public:
	static void result(int& n, int& p, int& q) {  //статический метод /результат стрельбы
		int a;
		for (int i = 1; i <= n; i++) {
			a = 0 + rand() % 2;
			if (a == 0)
				q++;
			else {
				p++;
				n = p + q;
				break;
			}
		}
	}
	static void probability(int q) {  //статический метод (вероятность попадания выстрела)
		double prob;
		if (q == 0)
			prob = p;
		else
			prob = 1 - pow((1 - p), q);
		cout << "Вероятность попадания: " << prob << endl << endl;
	}

};

double AntiaircraftGun::p = 0.5;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int p = 0, q = 0, n;
	cout << "Введите количество выстрелов: ";
	while (true) {
		cin >> n;
		if (n < 1 || !cin || n > 10)
			cout << "\nИзмените ввод!\n";
		else break;
	}
	AntiaircraftGun shoot;
	shoot.result(n, p, q);
	cout << "\nВсего выстрелов: " << n << "\nКоличество промахов: " << q << "\nКоличество попаданий : " << p << endl << endl;
	shoot.probability(q);
	system("pause");
	return 0;
}