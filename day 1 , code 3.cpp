#include <iostream>
using namespace std; 

int main() {
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    bool isEqu = (side1 > 0) && (side1 == side2) && (side2 == side3);
    cout << isEqu << endl;
    return 0;
}