#include <iostream>
using namespace std;
class Multiply {
private:
    int value;
public:
    Multiply(int v = 0) : value(v) {}
    Multiply operator*(const Multiply& obj) {
        Multiply result;
        result.value = this->value * obj.value;
        return result;
    }
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Multiply obj1(10), obj2(20);
    Multiply result = obj1 * obj2;
    result.display();
    return 0;
}
