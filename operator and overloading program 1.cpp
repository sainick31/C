#include<iostream>
using namespace std;

class IncrementExample {
private:
    int value;

public:
    IncrementExample(int val) : value(val) {}

    void operator++() {
        value++;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    IncrementExample obj(5);
    cout << "Before Increment: ";
    obj.display();

    ++obj;

    cout << "After Increment: ";
    obj.display();

    return 0;
}

