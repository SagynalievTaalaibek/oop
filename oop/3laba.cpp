///task1

//#include <iostream>
//#include <ctime>
//#include <string>
//
//using namespace std;
//
//const int CLK_TCK_CONST = CLOCKS_PER_SEC;
//
//class Timer {
//private:
//    int seconds;
//
//    public:
//        // Конструктор, принимающий время в секундах
//        Timer(int secs) {
//            seconds = secs;
//        }
//    
//        // Конструктор, принимающий строку времени в формате "мм:сс"
//        Timer(const string& timeStr) {
//            int minutes = stoi(timeStr.substr(0, 2));
//            int seconds = stoi(timeStr.substr(3, 2));
//            this->seconds = minutes * 60 + seconds;
//        }
//    
//        // Конструктор, принимающий минуты и секунды
//        Timer(int minutes, int seconds) {
//            this->seconds = minutes * 60 + seconds;
//        }
//    //
//    //    // Функция запуска таймера
//    void run() {
//        clock_t start = clock();
//        while (seconds > 0) {
//            // Получаем текущее время
//            clock_t current = clock();
//            double elapsed_secs = double(current - start) / CLK_TCK_CONST;
//
//            // Если прошла одна секунда, уменьшаем счетчик секунд
//            if (elapsed_secs >= 1.0) {
//                seconds--;
//                start = current;
//                // Выводим текущее количество оставшихся секунд
//                cout << "Time left: " << seconds << " secinds" << endl;
//            }
//        }
//        cout << "Ring the bell!" << endl;
//    }
//};
//
//int main() {
//    // Создание объекта Timer с указанием времени в секундах
//    Timer timer1(2);
//    timer1.run();
//
//    // Создание объекта Timer с указанием времени в формате "мм:сс"
//    Timer timer2("00:5");
//    timer2.run();
//
//    // Создание объекта Timer с указанием минут и секунд
//    Timer timer3(1, 0);
//    timer3.run();
//
//    return 0;
//}


//task2

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Nomenclature {
//private:
//    string productName;
//    double wholesalePrice;
//    double retailMarkup;
//    int quantity;
//
//public:
//    Nomenclature(const std::string& name, double wholesalePrice, double retailMarkup, int quantity)
//        : productName(name), wholesalePrice(wholesalePrice), retailMarkup(retailMarkup), quantity(quantity) {}
//
//    // Метод для расчета чистого дохода при продаже
//    double calculateProfit() const {
//        // Розничная цена = Оптовая цена + Наценка
//        double retailPrice = wholesalePrice + (wholesalePrice * retailMarkup);
//        // Возможный чистый доход = Розничная цена * Количество на складе
//        return retailPrice * quantity;
//    }
//
//    // Метод для вывода данных о товаре на экран
//    void displayProduct() const {
//        cout << "Наименование товара: " << productName << std::endl;
//        cout << "Оптовая цена: $" << wholesalePrice << std::endl;
//        cout << "Розничная наценка: " << retailMarkup * 100 << "%" << std::endl;
//        cout << "Колличество товара на складе: " << quantity << std::endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//
//    Nomenclature product1("Iphone 15", 1000, 0.3, 10);
//    product1.displayProduct();
//    cout << "Средне ожидаемая прибыль: $" << product1.calculateProfit() << std::endl;
//
//    return 0;
//}
//
//
// task3

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class Soft {
//	string name_prog;
//	string name_razrab;
//	string memory;
//
//	int day_lic;
//	int month_lic;
//	int year_lic;
//
//public:
//
//	Soft() : name_prog("0"), name_razrab("0"), memory("0"), day_lic(0), month_lic(0), year_lic(0)
//	{
//	}
//
//
//
//	void set(Soft* arr, int& kol) {
//		for (int i = 0; i < kol; i++) {
//			cout << "\nЗаполните информацию по программе №" << i + 1 << ":" << endl;
//			cout << "Название программы: ";
//			cin >> arr[i].name_prog;
//			cout << "Наименование разработчика: ";
//			cin >> arr[i].name_razrab;
//			cout << "Объём памяти: ";
//			cin >> arr[i].memory;
//			cout << "Дата окончания лиценции (вводится через пробелы, по типу DD_MM_YYYY): ";
//			cin >> arr[i].day_lic >> arr[i].month_lic >> arr[i].year_lic;
//		}
//	}
//
//	void print(Soft* arr, int& kol) {
//		cout << "\n[Информация по программам]\n" << endl;
//		cout << setiosflags(ios::left) << setw(25) << "[Название программы]" << setw(20) << "[Разработчик]" << setw(25) << "[Занимаемая память]" << setw(25) << "[Дата конца лицении]" << endl << endl;
//		for (int i = 0; i < kol; i++) {
//			cout << setiosflags(ios::left) << setw(26) << arr[i].name_prog << setw(20) << arr[i].name_razrab << setw(25) << arr[i].memory << setw(3) << arr[i].day_lic << setw(3) << arr[i].month_lic << setw(7) << arr[i].year_lic << endl << endl;
//		}
//	}
//
//	void lic(Soft* arr, int& kol) {
//		int today_day, today_month, today_year, licen_day, licen_month, licen_year;
//		cout << "\n[Информация по количеству дней оставшейся лицензии]\n" << endl;
//		cout << "\nВведите сегодняшнюю дату (через пробелы, по типу: DD_MM_YYYY): ";
//		cin >> today_day >> today_month >> today_year;
//		cout << "\n[Подсчёт оставшихся дней лицензии]\n" << endl;
//		cout << setiosflags(ios::left) << setw(25) << "Название программы:" << setw(25) << "Лицензия (осталось времени):" << endl;
//		for (int i = 0; i < kol; i++) {
//			if (today_year >= arr[i].year_lic and today_day >= arr[i].day_lic and today_month >= arr[i].month_lic) {
//				cout << setiosflags(ios::left) << setw(25) << arr[i].name_prog << setw(25) << "Лицензия закончилась!" << endl;
//			}
//			else {
//				if (today_day > arr[i].day_lic) {
//					licen_day = today_day - arr[i].day_lic;
//				}
//				else {
//					licen_day = arr[i].day_lic - today_day;
//				}
//				if (today_month > arr[i].month_lic) {
//					licen_month = today_month - arr[i].month_lic;
//				}
//
//				else {
//					licen_month = arr[i].month_lic - today_month;
//				}
//				licen_year = arr[i].year_lic - today_year;
//				cout << setiosflags(ios::left) << setw(30) << arr[i].name_prog << setw(3) << licen_day << setw(3) << licen_month << setw(7) << licen_year << endl;
//			}
//		}
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int kol;
//	cout << "\nВведите количество программ: ";
//	do {
//		cin >> kol;
//		if (!cin) {
//			cin.clear();
//			cin.ignore();
//			cout << "\nПроверьте ввод!\n";
//		}
//	} while (!cin);
//
//	Soft* arr = new Soft[kol];
//	arr->set(arr, kol);
//	arr->print(arr, kol);
//	arr->lic(arr, kol);
//	delete[] arr;
//	system("pause");
//	return 0;
//}
