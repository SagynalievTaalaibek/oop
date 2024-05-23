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
//// Структура для хранения информации о транспортном средстве
//struct Transport {
//    string brand;
//    string color;
//    string factoryNumber;
//    string plateNumber;
//    string manufactureDate;
//    string constructionFeatures;
//    string lastInspectionDate;
//    string ownerPassportData;
//    string inspectionDueDate; // Дата следующего техосмотра
//};
//
//// Класс для справочника транспортных средств
//class TransportDirectory {
//private:
//    vector<Transport> transport;
//
//public:
//    // Конструктор для добавления трех примеров транспортных средств
//    TransportDirectory() {
//        // Пример 1
//        Transport vehicle1 = { "Toyota", "Red", "123456", "AB1234", "2020-01-01", "Features", "2022-01-01", "Azamat", "2024-05-01" };
//        transport.push_back(vehicle1);
//
//        // Пример 2
//        Transport vehicle2 = { "Honda", "Blue", "789012", "CD5678", "2019-02-02", "Features", "2021-12-01", "Taalaibek", "2024-05-02" };
//        transport.push_back(vehicle2);
//
//        // Пример 3
//        Transport vehicle3 = { "Ford", "Green", "456789", "EF9012", "2021-03-03", "Features", "2023-03-01", "Sultan", "2024-05-01" };
//        transport.push_back(vehicle3);
//    }
//
//    // Поиск транспортных средств по марке
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
//    // Поиск транспортных средств по номеру
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
//    // Формирование приглашений на техосмотр в соответствии со сроком
//    void generateInspectionInvitations() {
//        cout << "Приглашения на техосмотр:" << endl;
//        for (const auto& vehicle : transport) {
//            time_t now = time(nullptr);
//            struct tm dueDate_tm;
//            istringstream vehicleDueDateStream(vehicle.inspectionDueDate);
//            vehicleDueDateStream >> get_time(&dueDate_tm, "%Y-%m-%d");
//            time_t dueTime = mktime(&dueDate_tm);
//
//            if (dueTime - now < 2592000) { // Менее месяца до даты техосмотра
//                cout << "Марка: " << vehicle.brand << ", Номер: " << vehicle.plateNumber << ", Дата техосмотра: " << vehicle.lastInspectionDate << ", Срок действия: " << vehicle.inspectionDueDate << endl;
//            }
//        }
//    }
//
//    void printVehicles(const vector<Transport>& vehicles) {
//        if (vehicles.empty()) {
//            cout << "Транспортные средства не найдены." << endl;
//            return;
//        }
//
//        cout << "Найденные транспортные средства:" << endl;
//        for (const auto& vehicle : vehicles) {
//            cout << "Марка: " << vehicle.brand << ", Цвет: " << vehicle.color << ", Номер: " << vehicle.plateNumber;
//            cout << ", Дата последнего техосмотра: " << vehicle.lastInspectionDate << endl;
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(nullptr)); // Инициализация генератора случайных чисел
//
//    TransportDirectory directory;
//
//    int choice;
//    string searchTerm;
//    cout << "Выберите критерий поиска:" << endl;
//    cout << "1. По марке автомобиля" << endl;
//    cout << "2. По номеру автомобиля" << endl;
//    cout << "3. Формирование приглашений на техосмотр" << endl;
//    cout << "0. Выход из программы" << endl;
//    cout << "Введите номер: ";
//    cin >> choice;
//
//    switch (choice) {
//    case 1: {
//        cout << "Введите марку автомобиля для поиска: ";
//        cin >> searchTerm;
//
//        vector<Transport> foundVehicles = directory.findVehiclesByBrand(searchTerm);
//        directory.printVehicles(foundVehicles);
//        break;
//    }
//    case 2: {
//        cout << "Введите номер автомобиля для поиска: ";
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
//        cout << "Выход из программы." << endl;
//        break;
//    }
//    default:
//        cout << "Некорректный выбор." << endl;
//        break;
//    }
//
//    return 0;
//}
