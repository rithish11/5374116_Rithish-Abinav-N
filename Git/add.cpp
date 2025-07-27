#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 2, b = 3;
    cout << "Sum: " << add(a, b) << endl;
    return 0;
}
