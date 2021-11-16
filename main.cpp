#include <iostream>
#include <string>
using namespace std;

int main() {
    string surname[10];

    for (int i = 0; i < 10; ++i){
        cout << "Enter the surname of the tenant in apartment " << i << endl;
        cin >> surname[i];
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        int apartNumber;
        cout << "Enter the number of the apartment you are interested in: ";
        cin >> apartNumber;
        if (apartNumber >= 10 || apartNumber < 0) {
            cout << "Invalid data";
            return 1;
        }
        cout << endl << "In apartment " << apartNumber << " lives " << surname[apartNumber] << endl;
        cout << endl;
    }
}
