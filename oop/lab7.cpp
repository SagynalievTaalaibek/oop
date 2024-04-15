// 7.1
//
//#include <iostream>
//using namespace std;
//
//class Array {
//public:
//    static const int MAX_SIZE = 100;
//    int size;
//    unsigned int data[MAX_SIZE];
//    Array(int size, unsigned int initial = 0) : size(size) {
//        for (int i = 0; i < size; ++i) {
//            data[i] = initial;
//        }
//    }
//
//    virtual void add(const Array& other) {
//        for (int i = 0; i < size && i < other.size; ++i) {
//            data[i] += other.data[i];
//        }
//    }
//
//    void display() {
//        for (int i = 0; i < size; ++i) {
//            std::cout << data[i] << " ";
//        }
//        std::cout << std::endl;
//    }
//};
//
//class ArrayA : public Array {
//public:
//    ArrayA(int size, unsigned int initial = 0) : Array(size, initial) {}
//
//    void add(const Array& other) override {
//        for (int i = 0; i < size && i < other.size; ++i) {
//            data[i] += other.data[i] * 2;
//        }
//    }
//};
//
//class ArrayB : public Array {
//public:
//    ArrayB(int size, unsigned int initial = 0) : Array(size, initial) {}
//
//    void add(const Array& other) override {
//        for (int i = 0; i < size && i < other.size; ++i) {
//            data[i] += other.data[i] * other.data[i];
//        }
//    }
//};
//
//int main() {
//    Array arr(4, 10);
//    ArrayA arrA(5, 20);
//    ArrayB arrB(5, 30);
//
//    arrA.add(arr);
//    arrA.display();
//
//    arrB.add(arr);
//    arrB.display();
//
//    Array* ptrArray; 
//
//    ptrArray = &arrA;  // передаем адрес
//    ptrArray->add(arr); 
//    ptrArray->display();
//
//
//
//    return 0;
//}




// 7.2
/*
#include <iostream>
#include <cmath>
using namespace std;

class Figure {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Figure() {}
};

class Rectangle : public Figure {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }
};

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

class Trapezium : public Figure {
private:
    double a;
    double b;
    double height;

public:
    Trapezium(double sideA, double sideB, double h) : a(sideA), b(sideB), height(h) {}

    double area() const override {
        return (a + b) * height / 2;
    }

    double perimeter() const override {
        return a + b + 2 * hypot((b - a) / 2, height);
    }
};

int main() {
    Rectangle rect(4, 5);
    Circle circle(3);
    Trapezium trapezium(3, 5, 4);

    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    cout << "Circle Area: " << circle.area() << endl;
    cout << "Circle Perimeter: " << circle.perimeter() << endl;

    cout << "Trapezium Area: " << trapezium.area() << endl;
    cout << "Trapezium Perimeter: " << trapezium.perimeter() << endl;

    return 0;
}

*/




// 7.3
//#include <iostream>
//#include <iomanip>
//using namespace std;

//class Currency {
//public:
//    virtual double toRuble(double amount) const = 0;
//    virtual void display(double amount) const = 0;
//    virtual ~Currency() {}
//};
//
//class Dollar : public Currency {
//public:
//    double toRuble(double amount) const override {
//        return amount * 90.95;
//    }
//
//    void display(double amount) const override {
//        cout << "$" << fixed << setprecision(2) << amount;
//    }
//};
//
//class Euro : public Currency {
//public:
//    double toRuble(double amount) const override {
//        return amount * 99.52;
//    }
//
//    void display(double amount) const override {
//        cout << "И" << fixed << setprecision(2) << amount;
//    }
//};
//
//int main() {
//
//    Dollar dollar;
//    Euro euro;
//
//    double amountInDollars = 1225;
//    double amountInEuros = 1500;
//
//    cout << "Amount in dollars: ";
//    dollar.display(amountInDollars);
//    cout << " = " << dollar.toRuble(amountInDollars) << " rubles" << endl;
//
//    cout << "Amount in euros: ";
//    euro.display(amountInEuros);
//    cout << " = " << euro.toRuble(amountInEuros) << " rubles" << endl;
//
//    return 0;
//}
/**/


