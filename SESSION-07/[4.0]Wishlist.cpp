#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string product;
    double price;

    // Open file for writing
    ofstream file("wishlist.txt");

    // Enter 3 products
    for (int i = 1; i <= 3; i++) {

        cout << "Enter product " << i << " name: ";
        getline(cin, product);

        cout << "Enter price: ";
        cin >> price;

        cin.ignore();

        file << product << " - Rs. " << price << endl;
    }

    file.close();

    // Open file for reading
    ifstream readFile("wishlist.txt");

    cout << "\n--- My Wishlist ---" << endl;

    string line;

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}