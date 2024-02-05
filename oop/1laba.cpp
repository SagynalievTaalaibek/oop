// #1 

//#include <iostream>
//using namespace std;
//
//
//double power(double n, int p) {
//    double result = 1;
//    for (int i = 0; i < p; ++i) {
//        result *= n;
//    }
//    return result;
//}
//
//
//int main() {
//
//    double number;
//    int exp;
//
//    cout << "Put number = ";
//    cin >> number;
//    cout << "Put number, number must be > 2 = ";
//    cin >> exp;
//    
//    if (exp < 2) {
//        cout << "Exp is < 2" << endl;
//        exp = 2;
//    }
//
//    double result = power(number, exp);
//    cout << "Result = " << result;
//    return 0; 
//}



//№2
//#include <iostream>
//using namespace std;
//
//
//double power(char n, int p);
//double power(short int n, int p);
//double power(long int n, int p);
//double power(float n, int p);
//
//
//int main() {
//    cout << "power('S', 2): " << power('S', 2) << endl; // with char 
//    cout << "power(100, 2): " << power(static_cast<short int>(100), 2) << endl; //short int
//    cout << "power(100000L, 2): " << power(static_cast <long int>(100000L), 2) << endl; //long int 
//    cout << "power(1.23f, 2): " << power(static_cast < float>(1.23f), 2) << endl; // float 
//
//    return 0;
//}
//
//double power(char n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; ++i) {
//        result *= static_cast<int>(n);
//    }
//    return result;
//}
//
//double power(short int n, int p) {
//    double result = 1;
//    for (int i = 0; i < p; ++i) {
//        result *= n;
//    }
//    return result;
//}
//
//double power(long int n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; ++i) {
//        result *= static_cast<double>(n);
//    }
//    return result;
//}
//
//double power(float n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; ++i) {
//        result *= static_cast<double>(n);
//    }
//    return result;
//}

//3
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//struct Employee {
//    string lastName;
//    int age;
//    int specialty;
//    double averageSalary;
//};
//
//// Функция для ввода информации по заводам и подсчета слесарей и токарей
//void processFactories(vector<vector<Employee>>& factories, int& totalLocksmiths, int& totalTurners) {
//    int numFactories;
//
//    cout << "Put number of factories: ";
//    cin >> numFactories;
//
//    totalLocksmiths = 0;
//    totalTurners = 0;
//
//    for (int i = 0; i < numFactories; ++i) {
//        int numEmployees;
//
//        cout << "Put number of eployee " << i + 1 << ": ";
//        cin >> numEmployees;
//
//        vector<Employee> employees;
//
//        // Ввод информации о каждом работнике
//        for (int j = 0; j < numEmployees; ++j) {
//            Employee employee;
//
//            cout << "Put surname " << j + 1 << ": ";
//            cin >> employee.lastName;
//
//            cout << "Put age " << j + 1 << ": ";
//            cin >> employee.age;
//
//            cout << "Put specialty Lockmith = 1, Turners = 2; j = " << j + 1 << ": ";
//            cin >> employee.specialty;
//
//            cout << "Put salary " << j + 1 << ": ";
//            cin >> employee.averageSalary;
//
//            if (employee.specialty == 1) {
//                totalLocksmiths++;
//            }
//            else if (employee.specialty == 2) {
//                totalTurners++;
//            }
//
//            // Добавление работника в вектор
//            employees.push_back(employee);
//        }
//
//        factories.push_back(employees);
//    }
//}
//
//int main() {
//    vector<vector<Employee>> factories;
//  
//    int totalLocksmiths, totalTurners;
//
//    
//    processFactories(factories, totalLocksmiths, totalTurners);
//
//    cout << "Total locksmith: " << totalLocksmiths << endl;
//    cout << "Total turners: " << totalTurners << endl;
//
//    return 0;
//}

 


