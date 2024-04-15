// 8.1
//#include <iostream>
//using namespace std;
//
//template<typename T>
//T findMax(const T array[], int size) {
//    T max = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] > max) {
//            max = array[i];
//        }
//    }
//    return max;
//}
//
//template<typename T>
//void sortArray(T array[], int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if (array[j] > array[j + 1]) {
//                T temp = array[j];
//                array[j] = array[j + 1];
//                array[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//
//    int intArray[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
//    int intSize = sizeof(intArray) / sizeof(int);
//    cout << "Max integer: " << findMax(intArray, intSize) << endl;
//
//    sortArray(intArray, intSize);
//    cout << "Sorted integer array: ";
//    for (int i = 0; i < intSize; ++i) {
//        cout << intArray[i] << " ";
//    }
//    cout << endl;
//
//    double doubleArray[] = { 3.14, 1.41, 2.71, 2.55, 6.02 };
//    int doubleSize = sizeof(doubleArray) / sizeof(double);
//    cout << "Max double: " << findMax(doubleArray, doubleSize) << endl;
//
//    sortArray(doubleArray, doubleSize);
//    cout << "Sorted double array: ";
//    for (int i = 0; i < doubleSize; ++i) {
//        cout << doubleArray[i] << " ";
//    }
//
//    return 0;
//}



// 8.2
//#include <iostream>
//#include <random>
//
//template<typename T, size_t N>
//class ArrayPair {
//private:
//    T array1[N];
//    T array2[N];
//
//public:
//    ArrayPair() {
//        std::random_device rd;
//        std::mt19937 mersenne(rd());
//        for (size_t i = 0; i < N; ++i) {
//            array1[i] = mersenne();
//        }
//        for (size_t i = 0; i < N; ++i) {
//            array2[i] = mersenne();
//        }
//    }
//
//    void printArrays() {
//        std::cout << "Array #1: " << std::endl;
//        for (size_t i = 0; i < N; ++i) {
//            std::cout << array1[i] << " ";
//        }
//        std::cout << std::endl;
//        std::cout << "Array #2: " << std::endl;
//        for (size_t i = 0; i < N; ++i) {
//            std::cout << array2[i] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    T sum() const {
//        T total = 0;
//        for (size_t i = 0; i < N; ++i) {
//            total += array1[i];
//            total += array2[i];
//        }
//        return total;
//    }

   /* template<typename G>
    virtual void display() const {
        std::cout << "sizeof: " << sizeof(G) << std::endl;
    }*/
//};

//int main() {
//    ArrayPair<int, 5> intArrays;
//    intArrays.printArrays();
//    std::cout << "Sum of integers: " << intArrays.sum() << std::endl;
//  /*  intArrays.display<int>();*/
//
//
//    ArrayPair<double, 4> doubleArrays;
//    doubleArrays.printArrays();
//    std::cout << "Sum of doubles: " << doubleArrays.sum() << std::endl;
//    return 0;
//}



//// 8.3
//#include <iostream>
//#include <fstream>
//#include <vector>+
// -
//
//using namespace std;
//
//template<typename T>
//class Stack {
//private:
//    vector<T> elements;
//
//public:
//    void push(const T& element) {
//        elements.push_back(element);
//    }
//
//    void pop() {
//        if (!elements.empty()) {
//            elements.pop_back();
//        }
//    }
//
//    const T& top() const {
//        if (!elements.empty()) {
//            return elements.back();
//        }
//        throw std::out_of_range("Stack<>::top(): empty stack");
//    }
//
//    bool empty() const {
//        return elements.empty();
//    }
//
//    size_t size() const {
//        return elements.size();
//    }
//};
//
//class TrainCar {
//public:
//    int carNumber;
//    TrainCar(int number) : carNumber(number) {}
//};
//
//class TrainSorter {
//private:
//    Stack<TrainCar> mainTrack;
//    Stack<TrainCar> sideTrackA;
//    Stack<TrainCar> sideTrackB;
//
//public:
//    void addToMainTrack(const TrainCar& car) {
//        mainTrack.push(car);
//    }
//
//    void moveToSideTrackA() {
//        if (!mainTrack.empty()) {
//            sideTrackA.push(mainTrack.top());
//            mainTrack.pop();
//        }
//    }
//
//    void moveToSideTrackB() {
//        if (!mainTrack.empty()) {
//            sideTrackB.push(mainTrack.top());
//            mainTrack.pop();
//        }
//    }
//
//    void popFromSideTrackA() {
//        if (!sideTrackA.empty()) sideTrackA.pop();
//    }
//
//    void popFromSideTrackB() {
//        if (!sideTrackB.empty()) sideTrackB.pop();
//    }
//
//    void displayTrainComposition() const {
//        cout << "Main track: ";
//        displayStack(mainTrack);
//        cout << "Side A: ";
//        displayStack(sideTrackA);
//        cout << "Side B: ";
//        displayStack(sideTrackB);
//    }
//
//private:
//    void displayStack(const Stack<TrainCar>& stack) const {
//        Stack<TrainCar> tempStack = stack;
//        while (!tempStack.empty()) {
//            std::cout << tempStack.top().carNumber << " ";
//            tempStack.pop();
//        }
//        std::cout << std::endl;
//    }
//};
//
//void readTrainFromFile(TrainSorter& sorter, const string& filename) {
//    ifstream inputFile(filename);
//    if (!inputFile.is_open()) {
//        cout << "Couldn't open file: " << filename << std::endl;
//        return;
//    }
//    int carNumber;
//    while (inputFile >> carNumber) {
//        sorter.addToMainTrack(TrainCar(carNumber));
//    }
//
//    inputFile.close();
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    TrainSorter trainSorter;
//    readTrainFromFile(trainSorter, "trains.txt");
//    int num;
//    do {
//        cout << "Что нужно сделать?" << endl
//            << "1. Добавить вагон на главный путь" << endl
//            << "2. Переместить вагон на боковой путь A" << endl
//            << "3. Переместить вагон на боковой путь B" << endl
//            << "4. Удалить вагон с бокового пути A" << endl
//            << "5. Удалить вагон с бокового пути B" << endl
//            << "6. Вывести информацию о составе поезда" << endl
//            << "0. Выход" << endl;
//        cin >> num;
//        switch (num) {
//        case 1: {
//            int carNumber;
//            std::cout << "Enter wagon: ";
//            std::cin >> carNumber;
//            trainSorter.addToMainTrack(TrainCar(carNumber));
//            break;
//        }
//        case 2:
//            trainSorter.moveToSideTrackA();
//            break;
//        case 3:
//            trainSorter.moveToSideTrackB();
//            break;
//        case 4:
//            trainSorter.popFromSideTrackA();
//            break;
//        case 5:
//            trainSorter.popFromSideTrackB();
//            break;
//        case 6:
//            trainSorter.displayTrainComposition();
//            break;
//
//        case 0:
//            cout << "Shutting down" << endl;
//            break;
//        default:
//            cout << "Incorrect input" << endl;
//        }
//    } while (num);
//    return 0;
//}