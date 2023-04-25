#include <iostream>
using namespace std;

int triple(int num) {
    return num * 3;
}

float triple(float num) {
    return num * 3.0f;
}

double triple(double num) {
    return num * 3.0;
}

int main() {
    int x = 5;
    float y = 5.5f;
    double z = 5.555;

    cout << "Triple of " << x << " is " << triple(x) << endl;
    cout << "Triple of " << y << " is " << triple(y) << endl;
    cout << "Triple of " << z << " is " << triple(z) << endl;

    return 0;
}
