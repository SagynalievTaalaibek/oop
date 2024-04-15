////// lab4
////// task1
////
////#include <iostream>
////#include <string>
////
//// ����� ��� ������������� ��������� �����
////class Kamaz {
////private:
////    int speed; // �������� ���������
////    std::string name; // ������������ ���������
////
////public:
////     ����������� ������ Kamaz
////    Kamaz(int spd, std::string n) : speed(spd), name(n) {}
////
////     ����� ��� ��������� �������� ���������
////    int getSpeed() const {
////        return speed;
////    }
////
////     ����� ��� ������ ���������� � ��������� �� �����
////    void display() const {
////        std::cout << "����� '" << name << "': �������� " << speed << " ��/�" << std::endl;
////    }
////};
////
//// ����� ��� ������������� ��������� Tatra
////class Tatra {
////private:
////    int speed; // �������� ���������
////    std::string name; // ������������ ���������
////
////public:
////     ����������� ������ Tatra
////    Tatra(int spd, std::string n) : speed(spd), name(n) {}
////
////     ����� ��� ��������� �������� ���������
////    int getSpeed() const {
////        return speed;
////    }
////
////     ����� ��� ������ ���������� � ��������� �� �����
////    void display() const {
////        std::cout << "����� '" << name << "': �������� " << speed << " ��/�" << std::endl;
////    }
////};
////
//// ������� ��� ��������� ��������� ���������� ����� � Tatra
////int FrCreater(const Kamaz& kamaz, const Tatra& tatra) {
////    if (kamaz.getSpeed() > tatra.getSpeed()) {
////        return 1; // ����� �������
////    } else if (kamaz.getSpeed() < tatra.getSpeed()) {
////        return -1; // ����� �������
////    } else {
////        return 0; // �������� �����
////    }
////}
////
////int main() {
////     �������� �������� ���������� ��� ��������� �������� ������
////    setlocale(LC_ALL, "ru");
////    Kamaz kamazPlain(120, "����� ������� 1");
////    Tatra tatraPlain(110, "����� ������� 2");
////
////    Kamaz kamazMountains(90, "����� ���� 1");
////    Tatra tatraMountains(80, "����� ���� 2");
////
////    Kamaz kamazDesert(120, "����� ������� 1");
////    Tatra tatraDesert(115, "����� ������� 2");
////
////     ����� ����������� ��������� ��� ������� ������� ������
////    std::cout << "���������� �����-��������:" << std::endl;
////    std::cout << "-------------------------------------" << std::endl;
////
////     �������
////    std::cout << "�������:" << std::endl;
////    kamazPlain.display();
////    tatraPlain.display();
////    int plainResult = FrCreater(kamazPlain, tatraPlain);
////    if (plainResult > 0) {
////        std::cout << "����������: �����" << std::endl;
////    } else if (plainResult < 0) {
////        std::cout << "����������: �����" << std::endl;
////    } else {
////        std::cout << "�����" << std::endl;
////    }
////
////    std::cout << std::endl;
////
////     ����
////    std::cout << "����:" << std::endl;
////    kamazMountains.display();
////    tatraMountains.display();
////    int mountainsResult = FrCreater(kamazMountains, tatraMountains);
////    if (mountainsResult > 0) {
////        std::cout << "����������: �����" << std::endl;
////    } else if (mountainsResult < 0) {
////        std::cout << "����������: �����" << std::endl;
////    } else {
////        std::cout << "�����" << std::endl;
////    }
////
////    std::cout << std::endl;
////
////     �������
////    std::cout << "�������:" << std::endl;
////    kamazDesert.display();
////    tatraDesert.display();
////    int desertResult = FrCreater(kamazDesert, tatraDesert);
////    if (desertResult > 0) {
////        std::cout << "����������: �����" << std::endl;
////    } else if (desertResult < 0) {
////        std::cout << "����������: �����" << std::endl;
////    } else {
////        std::cout << "�����" << std::endl;
////    }
////
////    return 0;
////}
//
//
//// task2
////
////#include <iostream>
////#include <string>
////using namespace std;
////
////class Tatra; // ��������������� ���������� ������ Tatra, ����� FrCreater() ��� ������������ ���
////
////// ����� ��� ������������� ��������� �����
////class Kamaz {
////private:
////    int speed;
////    string name;
////
////public:
////    // ����������� ������ Kamaz
////    Kamaz(int spd, string n) : speed(spd), name(n) {}
////
////    // ����� ��� ��������� �������� ���������
////    int getSpeed() const {
////        return speed;
////    }
////
////    // ����� ��� ��������� �������� ������ ���������
////    string getName() const {
////        return name;
////    }
////
////    // ����� ��� ������ ���������� � ��������� �� �����
////    void display() const {
////        cout << "�����: ������ " << name << ", ��������: " << speed << " ��/�" << std::endl;
////    }
////
////    // ���������� FrCreater() � �������� ������������� ������� ������ Kamaz
////    friend string FrCreater(const Kamaz& kamaz, const Tatra& tatra);
////};
////
////// ����� ��� ������������� ��������� Tatra
////class Tatra {
////private:
////    int speed;
////    string name;
////
////public:
////    // ����������� ������ Tatra
////    Tatra(int spd, string n) : speed(spd), name(n) {}
////
////    // ����� ��� ��������� �������� ���������
////    int getSpeed() const {
////        return speed;
////    }
////
////    // ����� ��� ��������� �������� ������ ���������
////    string getName() const {
////        return name;
////    }
////
////    // ����� ��� ������ ���������� � ��������� �� �����
////    void display() const {
////        cout << "�����: ������ " << name << ", ��������: " << speed << " ��/�" << std::endl;
////    }
////
////    // ���������� FrCreater() � �������� ������������� ������� ������ Tatra
////    friend string FrCreater(const Kamaz& kamaz, const Tatra& tatra);
////};
////
////// ������� ��� ��������� ��������� ���������� ����� � Tatra
////string FrCreater(const Kamaz& kamaz, const Tatra& tatra) {
////    if (kamaz.getSpeed() > tatra.getSpeed()) {
////        return "����� �������";
////    } else if (kamaz.getSpeed() < tatra.getSpeed()) {
////        return "����� �������";
////    } else {
////        return "�������� �����";
////    }
////}
////
////int main() {
////    setlocale(LC_ALL, "ru");
////    // �������� �������� ���������� ��� ��������� �������� ������
////    Kamaz kamaz(120, "����� 005");
////    Tatra tatra(110, "T���� 003");
////
////    // ����� ����������� ��������� ���������
////    cout << "���������: " << FrCreater(kamaz, tatra) << std::endl;
////    kamaz.display();
////    tatra.display();
////
////    return 0;
////}
//
//
////// task3
//#include <iostream>
//#include <string>
//
//
//class Kamaz; // ��������������� ���������� ������ Kamaz, ����� Tatra ����� ������������ ���
//
//// ����� ��� ������������� ��������� Tatra
//class Tatra {
//private:
//    int speed; // �������� ���������
//    std::string name; // ������������ ���������
//
//public:
//    // ����������� ������ Tatra
//    Tatra(int spd, std::string n) : speed(spd), name(n) {}
//
//    // ����� ��� ��������� �������� ���������
//    int getSpeed() const {
//        return speed;
//    }
//
//    // ����� ��� ��������� ������������ ���������
//    std::string getName() const {
//        return name;
//    }
//
//    // ����� ��� ������ ���������� � ��������� �� �����
//    void display() const {
//        std::cout << "����� '" << name << "': �������� " << speed << " ��/�" << std::endl;
//    }
//
//    // ���������� ��������������� � ������� Kamaz
//    friend class Kamaz;
//};
//
//// ����� ��� ������������� ��������� Kamaz
//class Kamaz {
//private:
//    int speed; // �������� ���������
//    std::string name; // ������������ ���������
//
//public:
//    // ����������� ������ Kamaz
//    Kamaz(int spd, std::string n) : speed(spd), name(n) {}
//
//    // ����� ��� ��������� �������� ���������
//    int getSpeed() const {
//        return speed;
//    }
//
//    // ����� ��� ��������� ������������ ���������
//    std::string getName() const {
//        return name;
//    }
//
//    // ����� ��� ������ ���������� � ��������� �� �����
//    void display() const {
//        std::cout << "����� '" << name << "': �������� " << speed << " ��/�" << std::endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    // �������� �������� ����������
//    Kamaz kamaz(120, "������ 005");
//    Tatra tatra(110, "TATRA 003");
//
//    // ����� ���������� � ����������
//    kamaz.display();
//    tatra.display();
//
//    return 0;
//}
