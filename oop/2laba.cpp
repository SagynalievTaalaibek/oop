//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Aeroflot {
//private:
//    int flightNumber;
//    string departureAirport;
//    string arrivalAirport;
//    string arrivalTime;
//    string departureTime;
//    int registrationPlace;
//
//public:
//    void setFlightNumber(int number) {
//        flightNumber = number;
//    }
//
//    int getFlightNumber() {
//        return flightNumber;
//    }
//
//    void setDepartureAirport(string airport) {
//        departureAirport = airport;
//    }
//
//    string getDepartureAirport() {
//        return departureAirport;
//    }
//
//    void setArrivalAirport(string airport) {
//        arrivalAirport = airport;
//    }
//
//    string getArrivalAirport() {
//        return arrivalAirport;
//    }
//
//    void setArrivalTime(string time) {
//        arrivalTime = time;
//    }
//
//    string getArrivalTime() {
//        return arrivalTime;
//    }
//
//    void setDepartureTime(string time) {
//        departureTime = time;
//    }
//
//    string getDepartureTime() {
//        return departureTime;
//    }
//
//    void setRegistrationPlace(int place) {
//        registrationPlace = place;
//    }
//
//    int getRegistrationPlace() {
//        return registrationPlace;
//    }
//};
//
//void readAeroflot(Aeroflot& aeroflot) {
//    int flightNumber, registrationPlace;
//    string departureAirport, arrivalAirport, departureTime, arrivalTime;
//
//    cout << "Enter flight number: ";
//    cin >> flightNumber;
//    aeroflot.setFlightNumber(flightNumber);
//
//    cout << "Departure airport: ";
//    cin >> departureAirport;
//    aeroflot.setDepartureAirport(departureAirport);
//
//    cout << "Arrival airport: ";
//    cin >> arrivalAirport;
//    aeroflot.setArrivalAirport(arrivalAirport);
//
//    cout << "Departure time: ";
//    cin >> departureTime;
//    aeroflot.setDepartureTime(departureTime);
//
//    cout << "Arrival time: ";
//    cin >> arrivalTime;
//    aeroflot.setArrivalTime(arrivalTime);
//
//    cout << "Registration place: ";
//    cin >> registrationPlace;
//    aeroflot.setRegistrationPlace(registrationPlace);
//}
//
//void printAeroflot(Aeroflot& aeroflot) {
//    cout << setiosflags(ios::left)
//        << setw(15) << aeroflot.getFlightNumber()
//        << setw(15) << aeroflot.getDepartureAirport()
//        << setw(15) << aeroflot.getArrivalAirport()
//        << setw(15) << aeroflot.getArrivalTime()
//        << setw(15) << aeroflot.getDepartureTime()
//        << setw(15) << aeroflot.getRegistrationPlace() << endl;
//}
//
//void sortFlights(Aeroflot arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (arr[j].getArrivalAirport() < arr[i].getArrivalAirport()) {
//                Aeroflot temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//}
//
//Aeroflot* findFlightByNumber(Aeroflot arr[], int size, int flightNumber) {
//    for (int i = 0; i < size; i++) {
//        if (arr[i].getFlightNumber() == flightNumber) {
//            return &arr[i];
//        }
//    }
//    return nullptr;
//}
//
//int main() {
//    int numberOfFlights;
//
//    cout << "Enter the number of flights: ";
//    cin >> numberOfFlights;
//
//    Aeroflot* flights = new Aeroflot[numberOfFlights];
//
//    for (int i = 0; i < numberOfFlights; i++) {
//        readAeroflot(flights[i]);
//    }
//
//    sortFlights(flights, numberOfFlights);
//
//    cout << setiosflags(ios::left) << setw(10) << "Flight No:"
//        << setw(10) << "Departure: "
//        << setw(10) << "Arrival: "
//        << setw(10) << "Departure Time: "
//        << setw(10) << "Arrival Time: "
//        << setw(10) << "Registration Place: " << endl;
//
//    for (int i = 0; i < numberOfFlights; i++) {
//        printAeroflot(flights[i]);
//    }
//
//    int findFlightNumber;
//    cout << "Enter the flight number to search for: ";
//    cin >> findFlightNumber;
//
//    Aeroflot* foundFlight = findFlightByNumber(flights, numberOfFlights, findFlightNumber);
//    if (foundFlight != nullptr) {
//        printAeroflot(*foundFlight);
//    }
//    else {
//        cout << "Flight not found." << endl;
//    }
//
//    delete[] flights;
//
//    system("pause");
//    return 0;
//}



//2. Опишите класс «студенческая группа». 

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// Класс "Студент"
//class Student {
//public:
//    string lastName;
//    string firstName;
//    string birthDate;
//    string phoneNumber;
//
//    // Конструктор
//    Student(string last, string first, string birth, string phone)
//        : lastName(last), firstName(first), birthDate(birth), phoneNumber(phone) {}
//
//    // Перегрузка оператора < для сортировки
//    bool operator<(const Student& other) const {
//        return lastName < other.lastName;
//    }
//
//    // Метод для отображения информации о студенте
//    void displayInfo() const {
//        cout << "Фамилия: " << lastName << "\tИмя: " << firstName
//            << "\tДата рождения: " << birthDate << "\tТелефон: " << phoneNumber << endl;
//    }
//};
//
//// Класс "Студенческая группа"
//class StudentGroup {
//private:
//    vector<Student> students;
//
//public:
//    // Метод для добавления студента в группу
//    void addStudent(const Student& student) {
//        students.push_back(student);
//    }
//
//    // Метод для удаления студента по фамилии
//    void removeStudent(const string& lastName) {
//        auto it = find_if(students.begin(), students.end(), [&lastName](const Student& student) {
//            return student.lastName == lastName;
//            });
//
//        if (it != students.end()) {
//            students.erase(it);
//            cout << "Студент с фамилией " << lastName << " удален из группы." << endl;
//        }
//        else {
//            cout << "Студент с фамилией " << lastName << " не найден." << endl;
//        }
//    }
//
//    // Метод для поиска студента по фамилии
//    void findStudentByLastName(const string& lastName) const {
//        auto it = find_if(students.begin(), students.end(), [&lastName](const Student& student) {
//            return student.lastName == lastName;
//            });
//
//        if (it != students.end()) {
//            cout << "Студент найден:\n";
//            it->displayInfo();
//        }
//        else {
//            cout << "Студент с фамилией " << lastName << " не найден." << endl;
//        }
//    }
//
//    // Метод для отображения информации о всех студентах в группе
//    void displayAllStudents() const {
//        cout << "Информация о студентах в группе:\n";
//        for (const auto& student : students) {
//            student.displayInfo();
//        }
//    }
//
//    // Метод для сортировки студентов по фамилии
//    void sortStudentsByLastName() {
//        sort(students.begin(), students.end());
//        cout << "Студенты отсортированы по фамилии." << endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//
//    StudentGroup group;
//
//    int choice;
//    do {
//        cout << "\n1. Добавить студента\n"
//            << "2. Удалить студента\n"
//            << "3. Поиск студента по фамилии\n"
//            << "4. Отобразить всех студентов\n"
//            << "5. Сортировка студентов по фамилии\n"
//            << "0. Выйти\n"
//            << "Выберите действие: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            string last, first, birth, phone;
//            cout << "Введите фамилию: ";
//            cin >> last;
//            cout << "Введите имя: ";
//            cin >> first;
//            cout << "Введите дату рождения: ";
//            cin >> birth;
//            cout << "Введите номер телефона: ";
//            cin >> phone;
//
//            Student student(last, first, birth, phone);
//            group.addStudent(student);
//
//            cout << "Студент добавлен в группу." << endl;
//            break;
//        }
//        case 2: {
//            string last;
//            cout << "Введите фамилию студента для удаления: ";
//            cin >> last;
//            group.removeStudent(last);
//            break;
//        }
//        case 3: {
//            string last;
//            cout << "Введите фамилию студента для поиска: ";
//            cin >> last;
//            group.findStudentByLastName(last);
//            break;
//        }
//        case 4:
//            group.displayAllStudents();
//            break;
//        case 5:
//            group.sortStudentsByLastName();
//            break;
//        case 0:
//            cout << "Программа завершена.\n";
//            break;
//        default:
//            cout << "Некорректный ввод. Попробуйте снова.\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}



//3. Опишите класс, реализующий стек (Stack). 

#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

// Класс реализующий стек
template <typename T>
class Stack {
private:
    stack<T> data;

public:
    // Метод для добавления элемента в вершину стека
    void push(const T& element) {
        data.push(element);
    }

    // Метод для удаления элемента из вершины стека
    void pop() {
        if (!isEmpty()) {
            data.pop();
        }
    }


    // Метод для получения элемента из вершины стека
    T top() const {
        if (!isEmpty()) {
            return data.top();
        }
        else {
            cerr << "Стек пуст." << endl;
            exit(EXIT_FAILURE);
        }
    }

    // Метод для проверки, пуст ли стек
    bool isEmpty() const {
        return data.empty();
    }

    // Метод для получения размера стека
    size_t size() const {
        return data.size();
    }
};

// Тип вагона
enum WagonType {
    PASSENGER,
    CARGO
};

// Класс для представления вагона
class Wagon {
public:
    WagonType type;
    string number;

    Wagon() : type(PASSENGER), number("") {}

    Wagon(WagonType t, const string& n) : type(t), number(n) {}

    // Метод для отображения информации о вагоне
    void displayInfo() const {
        cout << "Тип: " << (type == PASSENGER ? "Пассажирский" : "Грузовой")
            << "\tНомер: " << number << endl;
    }

    template <typename T>
    void displayStackInfo(const Stack<T>& stack) {
        Stack<T> tempStack = stack;  // Создаем копию стека
        while (!tempStack.isEmpty()) {
            tempStack.top().displayInfo();  // Используем метод displayInfo
            tempStack.pop();
        }
    }
};

// Функция для формирования состава из файла
void formTrainFromFile(Stack<Wagon>& platform) {
    ifstream file("input.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            WagonType type = (line[0] == 'P') ? PASSENGER : CARGO;
            string number = line.substr(1);
            platform.push(Wagon(type, number));
        }
        file.close();
    }
    else {
        cerr << "Не удалось открыть файл." << endl;
        exit(EXIT_FAILURE);
    }
}

// Функция для формирования состава с клавиатуры
void formTrainFromInput(Stack<Wagon>& platform) {
    cout << "Введите информацию о вагонах (P - пассажирский, C - грузовой, например P123):" << endl;
    cout << "Для завершения ввода введите пустую строку." << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очищаем буфер перед началом ввода

    string line;
    while (true) {
        cout << "Введите информацию о вагоне (P - пассажирский, C - грузовой, например P123): ";
        getline(cin, line);

        if (line.empty()) {
            break;
        }

        WagonType type = (line[0] == 'P' || line[0] == 'p') ? PASSENGER : CARGO;
        string number = line.substr(1);
        platform.push(Wagon(type, number));
    }
}


// Функция для разделения состава на два направления
void separateTrain(Stack<Wagon>& inputPlatform, Stack<Wagon>& leftDirection, Stack<Wagon>& rightDirection) {
    while (!inputPlatform.isEmpty()) {
        Wagon currentWagon = inputPlatform.top();
        inputPlatform.pop();

        if (currentWagon.type == PASSENGER) {
            leftDirection.push(currentWagon);
        }
        else {
            rightDirection.push(currentWagon);
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");

    Stack<Wagon> platform;
    Stack<Wagon> leftDirection;
    Stack<Wagon> rightDirection;

    int choice;
    do {
        cout << "\n1. Формирование состава из файла\n"
            << "2. Формирование состава с клавиатуры\n"
            << "3. Разделение состава на два направления\n"
            << "4. Отобразить информацию о вагонах на платформе\n"
            << "5. Отобразить информацию о вагонах на левом направлении\n"
            << "6. Отобразить информацию о вагонах на правом направлении\n"
            << "0. Выйти\n"
            << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1:
            formTrainFromFile(platform);
            break;
        case 2:
            formTrainFromInput(platform);
            break;
        case 3:
            separateTrain(platform, leftDirection, rightDirection);
            cout << "Состав разделен на два направления." << endl;
            break;
        case 4:
            cout << "\nИнформация о вагонах на платформе:" << endl;
            Wagon().displayStackInfo(platform);
            break;
        case 5:
            cout << "\nИнформация о вагонах на левом направлении:" << endl;
            Wagon().displayStackInfo(leftDirection);
            break;
        case 6:
            cout << "\nИнформация о вагонах на правом направлении:" << endl;
            Wagon().displayStackInfo(rightDirection);
        case 0:
            cout << "Программа завершена.\n";
            break;
        default:
            cout << "Некорректный ввод. Попробуйте снова.\n";
        }

    } while (choice != 0);

    return 0;
}
