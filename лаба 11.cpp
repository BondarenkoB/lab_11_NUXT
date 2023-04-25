#include <iostream>
using namespace std;

class Triple {
public:
    int operator()(int x) { return x * 3; }
};

class TripleFloat {
public:
    float operator()(float x) { return x * 3; }
};

class TripleDouble {
public:
    double operator()(double x) { return x * 3; }
};

int main() {
    Triple obj1;
    TripleFloat obj2;
    TripleDouble obj3;

    cout << obj1(10) << endl;
    cout << obj2(10.5f) << endl;
    cout << obj3(10.5) << endl;

    return 0;
}