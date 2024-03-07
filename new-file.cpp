#include <iostream>

using namespace std;

int main() {

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num + i; j++) {
            if (j >= num - i - 1) {
                cout << i;
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}