#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Create and open file
    ofstream file("my_fav_songs.txt");

    // Write 5 songs
    file << "Shape of You" << endl;
    file << "Perfect" << endl;
    file << "Believer" << endl;
    file << "Faded" << endl;
    file << "Photograph" << endl;

    // Close file
    file.close();

    cout << "Songs saved successfully." << endl;

    return 0;
}