//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// ��������� ��� �������� ���������� � ��������
//struct Store {
//    string name;
//    string address;
//    vector<string> phones;
//    string specialization;
//    string ownership;
//    string workingHours;
//};
//
//// ����� ��� ����������� ���������
//class StoreDirectory {
//private:
//    vector<Store> stores;
//
//public:
//    // ���������� �������� � ����������
//    void addStore(const Store& store) {
//        stores.push_back(store);
//    }
//
//    // ����� ��������� �� ��������
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
//    // ����� ��������� �� ������
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
//    // ����� ��������� �� ������ ��������
//    vector<Store> findStoresByPhone(const string& phone) {
//        vector<Store> result;
//        for (const auto& store : stores) {
//            for (const auto& store_phone : store.phones) {
//                if (store_phone == phone) {
//                    result.push_back(store);
//                    break; // ��������� ����, ���� ������ ������� � ��������
//                }
//            }
//        }
//        return result;
//    }
//
//    // ����� ��������� �� �������������
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
//    // ���������� �������� � ���������� ����������
//    void addStore(const Store& store) {
//        storeDirectory.addStore(store);
//    }
//
//    // ����� ��������� �� ��������
//    vector<Store> findStoresByName(const string& name) {
//        return storeDirectory.findStoresByName(name);
//    }
//
//    // ����� ��������� �� ����� ������
//    vector<Store> findStoresByAddress(const string& address) {
//        return storeDirectory.findStoresByAddress(address);
//    }
//
//    // ����� ��������� �� ������ ��������
//    vector<Store> findStoresByPhone(const string& phone) {
//        return storeDirectory.findStoresByPhone(phone);
//    }
//
//    // ����� ��������� �� �������������
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
//    // ������ ���������� ���������� ��������� � ���������� ����������
//    Store store1 = { "Store1", "street1", {"123-456", "789-012"}, "products", "�������", "9:00 - 21:00" };
//    buyerDirectory.addStore(store1);
//
//    Store store2 = { "Store2", "street2", {"111-222", "333-444"}, "medice", "�������", "8:00 - 20:00" };
//    buyerDirectory.addStore(store2);
//
//    Store store3 = { "Store3", "street3", {"555-666", "777-888"}, "materials", "�������", "10:00 - 18:00" };
//    buyerDirectory.addStore(store3);
//
//    Store store4 = { "Store5", "street2", {"123-456", "789-012"}, "products", "�������", "9:00 - 21:00" };
//    buyerDirectory.addStore(store4);
//
//    // ������ ������ ��������� �� ��������, ������, ������ �������� ��� �������������
//    int choice;
//    string searchPattern;
//    cout << "�������� �������� ������:" << endl;
//    cout << "1. �� ��������" << endl;
//    cout << "2. �� ������" << endl;
//    cout << "3. �� ������ ��������" << endl;
//    cout << "4. �� �������������" << endl;
//    cout << "������� �����: ";
//    cin >> choice;
//    cin.ignore(); // ������� ������ �����
//
//    cout << "������� ������ ��� ������: ";
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
//        cout << "������������ �����." << endl;
//        return 1;
//    }
//
//    if (foundStores.empty()) {
//        cout << "�������� �� �������." << endl;
//    }
//    else {
//        cout << "��������� ��������:" << endl;
//        for (const auto& store : foundStores) {
//            cout << "��������: " << store.name << endl;
//            cout << "�����: " << store.address << endl;
//            cout << "��������:";
//            for (const auto& phone : store.phones) {
//                cout << " " << phone;
//            }
//            cout << endl;
//            cout << "�������������: " << store.specialization << endl;
//            cout << "����� �������������: " << store.ownership << endl;
//            cout << "����� ������: " << store.workingHours << endl;
//            cout << endl;
//        }
//    }
//
//    return 0;
//}
//
//
