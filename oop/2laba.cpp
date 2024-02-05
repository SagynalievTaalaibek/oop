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



//2. ������� ����� ������������� ������. 

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// ����� "�������"
//class Student {
//public:
//    string lastName;
//    string firstName;
//    string birthDate;
//    string phoneNumber;
//
//    // �����������
//    Student(string last, string first, string birth, string phone)
//        : lastName(last), firstName(first), birthDate(birth), phoneNumber(phone) {}
//
//    // ���������� ��������� < ��� ����������
//    bool operator<(const Student& other) const {
//        return lastName < other.lastName;
//    }
//
//    // ����� ��� ����������� ���������� � ��������
//    void displayInfo() const {
//        cout << "�������: " << lastName << "\t���: " << firstName
//            << "\t���� ��������: " << birthDate << "\t�������: " << phoneNumber << endl;
//    }
//};
//
//// ����� "������������ ������"
//class StudentGroup {
//private:
//    vector<Student> students;
//
//public:
//    // ����� ��� ���������� �������� � ������
//    void addStudent(const Student& student) {
//        students.push_back(student);
//    }
//
//    // ����� ��� �������� �������� �� �������
//    void removeStudent(const string& lastName) {
//        auto it = find_if(students.begin(), students.end(), [&lastName](const Student& student) {
//            return student.lastName == lastName;
//            });
//
//        if (it != students.end()) {
//            students.erase(it);
//            cout << "������� � �������� " << lastName << " ������ �� ������." << endl;
//        }
//        else {
//            cout << "������� � �������� " << lastName << " �� ������." << endl;
//        }
//    }
//
//    // ����� ��� ������ �������� �� �������
//    void findStudentByLastName(const string& lastName) const {
//        auto it = find_if(students.begin(), students.end(), [&lastName](const Student& student) {
//            return student.lastName == lastName;
//            });
//
//        if (it != students.end()) {
//            cout << "������� ������:\n";
//            it->displayInfo();
//        }
//        else {
//            cout << "������� � �������� " << lastName << " �� ������." << endl;
//        }
//    }
//
//    // ����� ��� ����������� ���������� � ���� ��������� � ������
//    void displayAllStudents() const {
//        cout << "���������� � ��������� � ������:\n";
//        for (const auto& student : students) {
//            student.displayInfo();
//        }
//    }
//
//    // ����� ��� ���������� ��������� �� �������
//    void sortStudentsByLastName() {
//        sort(students.begin(), students.end());
//        cout << "�������� ������������� �� �������." << endl;
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
//        cout << "\n1. �������� ��������\n"
//            << "2. ������� ��������\n"
//            << "3. ����� �������� �� �������\n"
//            << "4. ���������� ���� ���������\n"
//            << "5. ���������� ��������� �� �������\n"
//            << "0. �����\n"
//            << "�������� ��������: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            string last, first, birth, phone;
//            cout << "������� �������: ";
//            cin >> last;
//            cout << "������� ���: ";
//            cin >> first;
//            cout << "������� ���� ��������: ";
//            cin >> birth;
//            cout << "������� ����� ��������: ";
//            cin >> phone;
//
//            Student student(last, first, birth, phone);
//            group.addStudent(student);
//
//            cout << "������� �������� � ������." << endl;
//            break;
//        }
//        case 2: {
//            string last;
//            cout << "������� ������� �������� ��� ��������: ";
//            cin >> last;
//            group.removeStudent(last);
//            break;
//        }
//        case 3: {
//            string last;
//            cout << "������� ������� �������� ��� ������: ";
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
//            cout << "��������� ���������.\n";
//            break;
//        default:
//            cout << "������������ ����. ���������� �����.\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}



//3. ������� �����, ����������� ���� (Stack). 

#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

// ����� ����������� ����
template <typename T>
class Stack {
private:
    stack<T> data;

public:
    // ����� ��� ���������� �������� � ������� �����
    void push(const T& element) {
        data.push(element);
    }

    // ����� ��� �������� �������� �� ������� �����
    void pop() {
        if (!isEmpty()) {
            data.pop();
        }
    }


    // ����� ��� ��������� �������� �� ������� �����
    T top() const {
        if (!isEmpty()) {
            return data.top();
        }
        else {
            cerr << "���� ����." << endl;
            exit(EXIT_FAILURE);
        }
    }

    // ����� ��� ��������, ���� �� ����
    bool isEmpty() const {
        return data.empty();
    }

    // ����� ��� ��������� ������� �����
    size_t size() const {
        return data.size();
    }
};

// ��� ������
enum WagonType {
    PASSENGER,
    CARGO
};

// ����� ��� ������������� ������
class Wagon {
public:
    WagonType type;
    string number;

    Wagon() : type(PASSENGER), number("") {}

    Wagon(WagonType t, const string& n) : type(t), number(n) {}

    // ����� ��� ����������� ���������� � ������
    void displayInfo() const {
        cout << "���: " << (type == PASSENGER ? "������������" : "��������")
            << "\t�����: " << number << endl;
    }

    template <typename T>
    void displayStackInfo(const Stack<T>& stack) {
        Stack<T> tempStack = stack;  // ������� ����� �����
        while (!tempStack.isEmpty()) {
            tempStack.top().displayInfo();  // ���������� ����� displayInfo
            tempStack.pop();
        }
    }
};

// ������� ��� ������������ ������� �� �����
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
        cerr << "�� ������� ������� ����." << endl;
        exit(EXIT_FAILURE);
    }
}

// ������� ��� ������������ ������� � ����������
void formTrainFromInput(Stack<Wagon>& platform) {
    cout << "������� ���������� � ������� (P - ������������, C - ��������, �������� P123):" << endl;
    cout << "��� ���������� ����� ������� ������ ������." << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������� ����� ����� ������� �����

    string line;
    while (true) {
        cout << "������� ���������� � ������ (P - ������������, C - ��������, �������� P123): ";
        getline(cin, line);

        if (line.empty()) {
            break;
        }

        WagonType type = (line[0] == 'P' || line[0] == 'p') ? PASSENGER : CARGO;
        string number = line.substr(1);
        platform.push(Wagon(type, number));
    }
}


// ������� ��� ���������� ������� �� ��� �����������
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
        cout << "\n1. ������������ ������� �� �����\n"
            << "2. ������������ ������� � ����������\n"
            << "3. ���������� ������� �� ��� �����������\n"
            << "4. ���������� ���������� � ������� �� ���������\n"
            << "5. ���������� ���������� � ������� �� ����� �����������\n"
            << "6. ���������� ���������� � ������� �� ������ �����������\n"
            << "0. �����\n"
            << "�������� ��������: ";
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
            cout << "������ �������� �� ��� �����������." << endl;
            break;
        case 4:
            cout << "\n���������� � ������� �� ���������:" << endl;
            Wagon().displayStackInfo(platform);
            break;
        case 5:
            cout << "\n���������� � ������� �� ����� �����������:" << endl;
            Wagon().displayStackInfo(leftDirection);
            break;
        case 6:
            cout << "\n���������� � ������� �� ������ �����������:" << endl;
            Wagon().displayStackInfo(rightDirection);
        case 0:
            cout << "��������� ���������.\n";
            break;
        default:
            cout << "������������ ����. ���������� �����.\n";
        }

    } while (choice != 0);

    return 0;
}
