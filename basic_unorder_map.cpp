#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> mp;

    // Insert elements
    mp["apple"] = 10;
    mp["banana"] = 5;
    mp["cherry"] = 20;

    // Access elements
    cout << "Apple price: " << mp["apple"] << endl;

    // Find an element
    if (mp.find("banana") != mp.end()) {
        cout << "Banana exists!" << endl;
    }

    // Check if a key exists
    if (mp.count("grape") == 0) {
        cout << "Grape is not in the map." << endl;
    }

    // Iterate over the map
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
