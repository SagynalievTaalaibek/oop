//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// Структура для хранения информации о магазине
//struct Store {
//    string name;
//    string address;
//    vector<string> phones;
//    string specialization;
//    string ownership;
//    string workingHours;
//};
//
//// Класс для справочника магазинов
//class StoreDirectory {
//private:
//    vector<Store> stores;
//
//public:
//    // Добавление магазина в справочник
//    void addStore(const Store& store) {
//        stores.push_back(store);
//    }
//
//    // Поиск магазинов по названию
//    vector<Store> findStoresByName(const string& name) {
//        vector<Store> result;
//        for (const auto& store : stores) {
//            if (store.name.find(name) != string::npos) {
//                result.push_back(store);
//            }
//        }
//        return result;
//    }
//
//    // Поиск магазинов по адресу
//    vector<Store> findStoresByAddress(const string& address) {
//        vector<Store> result;
//        for (const auto& store : stores) {
//            if (store.address.find(address) != string::npos) {
//                result.push_back(store);
//            }
//        }
//        return result;
//    }
//
//    // Поиск магазинов по номеру телефона
//    vector<Store> findStoresByPhone(const string& phone) {
//        vector<Store> result;
//        for (const auto& store : stores) {
//            for (const auto& store_phone : store.phones) {
//                if (store_phone == phone) {
//                    result.push_back(store);
//                    break; // Прерываем цикл, если найден телефон в магазине
//                }
//            }
//        }
//        return result;
//    }
//
//    // Поиск магазинов по специализации
//    vector<Store> findStoresBySpecialization(const string& specialization) {
//        vector<Store> result;
//        for (const auto& store : stores) {
//            if (store.specialization == specialization) {
//                result.push_back(store);
//            }
//        }
//        return result;
//    }
//
//};
//
//
//
//class BuyerDirectory {
//private:
//    StoreDirectory storeDirectory;
//
//public:
//    // Добавление магазина в справочник покупателя
//    void addStore(const Store& store) {
//        storeDirectory.addStore(store);
//    }
//
//    // Поиск магазинов по названию
//    vector<Store> findStoresByName(const string& name) {
//        return storeDirectory.findStoresByName(name);
//    }
//
//    // Поиск магазинов по части адреса
//    vector<Store> findStoresByAddress(const string& address) {
//        return storeDirectory.findStoresByAddress(address);
//    }
//
//    // Поиск магазинов по номеру телефона
//    vector<Store> findStoresByPhone(const string& phone) {
//        return storeDirectory.findStoresByPhone(phone);
//    }
//
//    // Поиск магазинов по специализации
//    vector<Store> findStoresBySpecialization(const string& specialization) {
//        return storeDirectory.findStoresBySpecialization(specialization);
//    }
//
//};
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    BuyerDirectory buyerDirectory;
//
//    // Пример добавления нескольких магазинов в справочник покупателя
//    Store store1 = { "Store1", "street1", {"123-456", "789-012"}, "products", "частная", "9:00 - 21:00" };
//    buyerDirectory.addStore(store1);
//
//    Store store2 = { "Store2", "street2", {"111-222", "333-444"}, "medice", "частная", "8:00 - 20:00" };
//    buyerDirectory.addStore(store2);
//
//    Store store3 = { "Store3", "street3", {"555-666", "777-888"}, "materials", "частная", "10:00 - 18:00" };
//    buyerDirectory.addStore(store3);
//
//    Store store4 = { "Store5", "street2", {"123-456", "789-012"}, "products", "частная", "9:00 - 21:00" };
//    buyerDirectory.addStore(store4);
//
//    // Пример поиска магазинов по названию, адресу, номеру телефона или специализации
//    int choice;
//    string searchPattern;
//    cout << "Выберите критерий поиска:" << endl;
//    cout << "1. По названию" << endl;
//    cout << "2. По адресу" << endl;
//    cout << "3. По номеру телефона" << endl;
//    cout << "4. По специализации" << endl;
//    cout << "Введите номер: ";
//    cin >> choice;
//    cin.ignore(); // Очистка буфера ввода
//
//    cout << "Введите шаблон для поиска: ";
//    getline(cin, searchPattern);
//
//    vector<Store> foundStores;
//    if (choice == 1) {
//        foundStores = buyerDirectory.findStoresByName(searchPattern);
//    }
//    else if (choice == 2) {
//        foundStores = buyerDirectory.findStoresByAddress(searchPattern);
//    }
//    else if (choice == 3) {
//        foundStores = buyerDirectory.findStoresByPhone(searchPattern);
//    }
//    else if (choice == 4) {
//        foundStores = buyerDirectory.findStoresBySpecialization(searchPattern);
//    }
//    else {  
//        cout << "Некорректный выбор." << endl;
//        return 1;
//    }
//
//    if (foundStores.empty()) {
//        cout << "Магазины не найдены." << endl;
//    }
//    else {
//        cout << "Найденные магазины:" << endl;
//        for (const auto& store : foundStores) {
//            cout << "Название: " << store.name << endl;
//            cout << "Адрес: " << store.address << endl;
//            cout << "Телефоны:";
//            for (const auto& phone : store.phones) {
//                cout << " " << phone;
//            }
//            cout << endl;
//            cout << "Специализация: " << store.specialization << endl;
//            cout << "Форма собственности: " << store.ownership << endl;
//            cout << "Время работы: " << store.workingHours << endl;
//            cout << endl;
//        }
//    }
//
//    return 0;
//}
//
//
