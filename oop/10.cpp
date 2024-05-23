//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <cmath>
//
//using namespace std;
//#define ANSI_COLOR_GREEN "\033[32m"
//#define ANSI_COLOR_RESET "\033[0m"
//#define ANSI_COLOR_RED "\033[31m"
//
//class PVO {
//private:
//    static double p;
//
//public:
//    static void setProbability(double probability) {
//        p = probability;
//    }
//
//    static int shootDownPlane(int n) {
//        srand(time(nullptr));
//
//        for (int i = 0; i < n; i++) {
//            double random = static_cast<double>(rand()) / RAND_MAX;
//            if (random < p) {
//                return 1;
//            }
//        }
//        return 0;
//    }
//
//    static double estimatedProbability(int n) {
//        return 1 - pow(1 - p, n);
//    }
//};
//
//double PVO::p = 0.0; // ������������� ������������ ����
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//
//    int n;
//    cout << "������� ���������� ��������� (n): ";
//    cin >> n;
//
//    double p;
//    cout << "������� ����������� ��������� �� �������� (p): ";
//    cin >> p;
//
//    PVO::setProbability(p);
//
//    for (int i = 0; i < n; i++) {
//        int result = PVO::shootDownPlane(i);
//        double estimated = PVO::estimatedProbability(i);
//        cout << "��������� ����������� ��������� ���� ��� " << i + 1 << " ��������� � ������������ ��������� " << p << ": " << estimated << endl;
//        if (result) {
//            cout << "��������� ��������: " << ANSI_COLOR_GREEN << "���� ����������" << ANSI_COLOR_RESET << endl;
//            break;
//        }
//        else if (i == n - 1)
//            cout << "��������� ��������: " << ANSI_COLOR_RED << " ���� �� �����" << ANSI_COLOR_RESET << endl;
//    }
//
//    return 0;
//}
