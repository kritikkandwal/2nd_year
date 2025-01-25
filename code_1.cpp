#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("wwe.txt");
    if (file.is_open()) {
        file << "Hello, World!" << endl;
        file << "BHAG BSDK." << endl;
        cout << "Data written to file successfully." << endl;
        file.close();
    }
    else {
        cout << "Unable to open file." << endl;
    }
    file.close();
    return 0;
}
