#include <iostream>
using namespace std;

// Class definition (Encapsulation)
class Car {
private:
    string brand; // Data member (Encapsulation)
    int year;

public:
    // Constructor (Abstraction)
    Car(string b, int y) : brand(b), year(y) {}

    // Member function (Abstraction)
    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// Inheritance
class ElectricCar : public Car {
private:
    int batteryLife;

public:
    ElectricCar(string b, int y, int bl) : Car(b, y), batteryLife(bl) {}

    // Polymorphism (Function Overriding)
    void display() {
        Car::display();
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }
};

int main() {
    Car car1("Toyota", 2020);
    ElectricCar car2("Tesla", 2022, 12);

    car1.display();
    car2.display();

    return 0;
}