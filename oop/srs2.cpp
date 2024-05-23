//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <ctime>
//#include <iomanip>
//
//
//using namespace std;
//
//// ��������� ��� �������� ���������� � ������������ ��������
//struct Transport {
//    string brand;
//    string color;
//    string factoryNumber;
//    string plateNumber;
//    string manufactureDate;
//    string constructionFeatures;
//    string lastInspectionDate;
//    string ownerPassportData;
//    string inspectionDueDate; // ���� ���������� ����������
//};
//
//// ����� ��� ����������� ������������ �������
//class TransportDirectory {
//private:
//    vector<Transport> transport;
//
//public:
//    // ����������� ��� ���������� ���� �������� ������������ �������
//    TransportDirectory() {
//        // ������ 1
//        Transport vehicle1 = { "Toyota", "Red", "123456", "AB1234", "2020-01-01", "Features", "2022-01-01", "Azamat", "2024-05-01" };
//        transport.push_back(vehicle1);
//
//        // ������ 2
//        Transport vehicle2 = { "Honda", "Blue", "789012", "CD5678", "2019-02-02", "Features", "2021-12-01", "Taalaibek", "2024-05-02" };
//        transport.push_back(vehicle2);
//
//        // ������ 3
//        Transport vehicle3 = { "Ford", "Green", "456789", "EF9012", "2021-03-03", "Features", "2023-03-01", "Sultan", "2024-05-01" };
//        transport.push_back(vehicle3);
//    }
//
//    // ����� ������������ ������� �� �����
//    vector<Transport> findVehiclesByBrand(const string& brand) {
//        vector<Transport> result;
//        for (const auto& vehicle : transport) {
//            if (vehicle.brand == brand) {
//                result.push_back(vehicle);
//            }
//        }
//        return result;
//    }
//
//    // ����� ������������ ������� �� ������
//    vector<Transport> findVehiclesByPlateNumber(const string& plateNumber) {
//        vector<Transport> result;
//        for (const auto& vehicle : transport) {
//            if (vehicle.plateNumber == plateNumber) {
//                result.push_back(vehicle);
//            }
//        }
//        return result;
//    }
//
//    // ������������ ����������� �� ��������� � ������������ �� ������
//    void generateInspectionInvitations() {
//        cout << "����������� �� ���������:" << endl;
//        for (const auto& vehicle : transport) {
//            time_t now = time(nullptr);
//            struct tm dueDate_tm;
//            istringstream vehicleDueDateStream(vehicle.inspectionDueDate);
//            vehicleDueDateStream >> get_time(&dueDate_tm, "%Y-%m-%d");
//            time_t dueTime = mktime(&dueDate_tm);
//
//            if (dueTime - now < 2592000) { // ����� ������ �� ���� ����������
//                cout << "�����: " << vehicle.brand << ", �����: " << vehicle.plateNumber << ", ���� ����������: " << vehicle.lastInspectionDate << ", ���� ��������: " << vehicle.inspectionDueDate << endl;
//            }
//        }
//    }
//
//    void printVehicles(const vector<Transport>& vehicles) {
//        if (vehicles.empty()) {
//            cout << "������������ �������� �� �������." << endl;
//            return;
//        }
//
//        cout << "��������� ������������ ��������:" << endl;
//        for (const auto& vehicle : vehicles) {
//            cout << "�����: " << vehicle.brand << ", ����: " << vehicle.color << ", �����: " << vehicle.plateNumber;
//            cout << ", ���� ���������� ����������: " << vehicle.lastInspectionDate << endl;
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(nullptr)); // ������������� ���������� ��������� �����
//
//    TransportDirectory directory;
//
//    int choice;
//    string searchTerm;
//    cout << "�������� �������� ������:" << endl;
//    cout << "1. �� ����� ����������" << endl;
//    cout << "2. �� ������ ����������" << endl;
//    cout << "3. ������������ ����������� �� ���������" << endl;
//    cout << "0. ����� �� ���������" << endl;
//    cout << "������� �����: ";
//    cin >> choice;
//
//    switch (choice) {
//    case 1: {
//        cout << "������� ����� ���������� ��� ������: ";
//        cin >> searchTerm;
//
//        vector<Transport> foundVehicles = directory.findVehiclesByBrand(searchTerm);
//        directory.printVehicles(foundVehicles);
//        break;
//    }
//    case 2: {
//        cout << "������� ����� ���������� ��� ������: ";
//        cin >> searchTerm;
//
//        vector<Transport> foundVehicles = directory.findVehiclesByPlateNumber(searchTerm);
//        directory.printVehicles(foundVehicles);
//        break;
//    }
//    case 3: {
//        directory.generateInspectionInvitations();
//        break;
//    }
//    case 0: {
//        cout << "����� �� ���������." << endl;
//        break;
//    }
//    default:
//        cout << "������������ �����." << endl;
//        break;
//    }
//
//    return 0;
//}
