#include <iostream>

const int ARR_SIZE = 20;

int main() {
    using namespace std;
    char name[ARR_SIZE];

    cout << "Your first name, please: ";
    cin >> name;

    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;
    while (name[i] != '\0') {
        cout << name[i] << ": " << (int) name[i] << endl;
        i++;
    }

    return 0;
}