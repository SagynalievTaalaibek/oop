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
//        // �����������, ����������� ����� � ��������
//        Timer(int secs) {
//            seconds = secs;
//        }
//    
//        // �����������, ����������� ������ ������� � ������� "��:��"
//        Timer(const string& timeStr) {
//            int minutes = stoi(timeStr.substr(0, 2));
//            int seconds = stoi(timeStr.substr(3, 2));
//            this->seconds = minutes * 60 + seconds;
//        }
//    
//        // �����������, ����������� ������ � �������
//        Timer(int minutes, int seconds) {
//            this->seconds = minutes * 60 + seconds;
//        }
//    //
//    //    // ������� ������� �������
//    void run() {
//        clock_t start = clock();
//        while (seconds > 0) {
//            // �������� ������� �����
//            clock_t current = clock();
//            double elapsed_secs = double(current - start) / CLK_TCK_CONST;
//
//            // ���� ������ ���� �������, ��������� ������� ������
//            if (elapsed_secs >= 1.0) {
//                seconds--;
//                start = current;
//                // ������� ������� ���������� ���������� ������
//                cout << "Time left: " << seconds << " secinds" << endl;
//            }
//        }
//        cout << "Ring the bell!" << endl;
//    }
//};
//
//int main() {
//    // �������� ������� Timer � ��������� ������� � ��������
//    Timer timer1(2);
//    timer1.run();
//
//    // �������� ������� Timer � ��������� ������� � ������� "��:��"
//    Timer timer2("00:5");
//    timer2.run();
//
//    // �������� ������� Timer � ��������� ����� � ������
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
//    // ����� ��� ������� ������� ������ ��� �������
//    double calculateProfit() const {
//        // ��������� ���� = ������� ���� + �������
//        double retailPrice = wholesalePrice + (wholesalePrice * retailMarkup);
//        // ��������� ������ ����� = ��������� ���� * ���������� �� ������
//        return retailPrice * quantity;
//    }
//
//    // ����� ��� ������ ������ � ������ �� �����
//    void displayProduct() const {
//        cout << "������������ ������: " << productName << std::endl;
//        cout << "������� ����: $" << wholesalePrice << std::endl;
//        cout << "��������� �������: " << retailMarkup * 100 << "%" << std::endl;
//        cout << "����������� ������ �� ������: " << quantity << std::endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//
//    Nomenclature product1("Iphone 15", 1000, 0.3, 10);
//    product1.displayProduct();
//    cout << "������ ��������� �������: $" << product1.calculateProfit() << std::endl;
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
//			cout << "\n��������� ���������� �� ��������� �" << i + 1 << ":" << endl;
//			cout << "�������� ���������: ";
//			cin >> arr[i].name_prog;
//			cout << "������������ ������������: ";
//			cin >> arr[i].name_razrab;
//			cout << "����� ������: ";
//			cin >> arr[i].memory;
//			cout << "���� ��������� �������� (�������� ����� �������, �� ���� DD_MM_YYYY): ";
//			cin >> arr[i].day_lic >> arr[i].month_lic >> arr[i].year_lic;
//		}
//	}
//
//	void print(Soft* arr, int& kol) {
//		cout << "\n[���������� �� ����������]\n" << endl;
//		cout << setiosflags(ios::left) << setw(25) << "[�������� ���������]" << setw(20) << "[�����������]" << setw(25) << "[���������� ������]" << setw(25) << "[���� ����� �������]" << endl << endl;
//		for (int i = 0; i < kol; i++) {
//			cout << setiosflags(ios::left) << setw(26) << arr[i].name_prog << setw(20) << arr[i].name_razrab << setw(25) << arr[i].memory << setw(3) << arr[i].day_lic << setw(3) << arr[i].month_lic << setw(7) << arr[i].year_lic << endl << endl;
//		}
//	}
//
//	void lic(Soft* arr, int& kol) {
//		int today_day, today_month, today_year, licen_day, licen_month, licen_year;
//		cout << "\n[���������� �� ���������� ���� ���������� ��������]\n" << endl;
//		cout << "\n������� ����������� ���� (����� �������, �� ����: DD_MM_YYYY): ";
//		cin >> today_day >> today_month >> today_year;
//		cout << "\n[������� ���������� ���� ��������]\n" << endl;
//		cout << setiosflags(ios::left) << setw(25) << "�������� ���������:" << setw(25) << "�������� (�������� �������):" << endl;
//		for (int i = 0; i < kol; i++) {
//			if (today_year >= arr[i].year_lic and today_day >= arr[i].day_lic and today_month >= arr[i].month_lic) {
//				cout << setiosflags(ios::left) << setw(25) << arr[i].name_prog << setw(25) << "�������� �����������!" << endl;
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
//	cout << "\n������� ���������� ��������: ";
//	do {
//		cin >> kol;
//		if (!cin) {
//			cin.clear();
//			cin.ignore();
//			cout << "\n��������� ����!\n";
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
