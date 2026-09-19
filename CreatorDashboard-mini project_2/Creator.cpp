#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Content class
class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    // Display content details
    void display() {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};


// Task 2: Add Content
void addContent() {

    Content c;

    cout << "\nEnter content title: ";
    getline(cin >> ws, c.title);

    cout << "Enter platform: ";
    getline(cin, c.platform);

    cout << "Enter views: ";
    cin >> c.views;

    cout << "Enter status: ";
    cin >> c.status;

    // Append data to file
    ofstream file("content_list.txt", ios::app);

    file << c.title << "|"
         << c.platform << "|"
         << c.views << "|"
         << c.status << endl;

    file.close();

    cout << "\nContent added successfully!\n";
}


// Task 3: View Content
void viewContent() {

    ifstream file("content_list.txt");

    string line;
    int number = 1;

    cout << "\n===== Content List =====\n";

    while (getline(file, line)) {

        size_t p1 = line.find("|");
        size_t p2 = line.find("|", p1 + 1);

        string title = line.substr(0, p1);
        string platform = line.substr(p1 + 1, p2 - p1 - 1);

        cout << number << ". "
             << title << " - "
             << platform << endl;

        number++;
    }

    file.close();
}


// Task 4: Update Status
void updateStatus() {

    Content contents[100];
    int count = 0;

    ifstream file("content_list.txt");

    string line;

    while (getline(file, line)) {

        size_t p1 = line.find("|");
        size_t p2 = line.find("|", p1 + 1);
        size_t p3 = line.find("|", p2 + 1);

        contents[count].title =
            line.substr(0, p1);

        contents[count].platform =
            line.substr(p1 + 1, p2 - p1 - 1);

        contents[count].views =
            stoi(line.substr(p2 + 1, p3 - p2 - 1));

        contents[count].status =
            line.substr(p3 + 1);

        count++;
    }

    file.close();

    if (count == 0) {
        cout << "\nNo content found.\n";
        return;
    }

    cout << "\n===== Content List =====\n";

    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". "
             << contents[i].title
             << " - "
             << contents[i].status
             << endl;
    }

    int choice;

    cout << "\nEnter content number to update: ";
    cin >> choice;

    if (choice < 1 || choice > count) {
        cout << "Invalid number!\n";
        return;
    }

    cout << "Enter new status: ";
    cin >> contents[choice - 1].status;

    // Rewrite file
    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++) {

        outFile << contents[i].title << "|"
                << contents[i].platform << "|"
                << contents[i].views << "|"
                << contents[i].status << endl;
    }

    outFile.close();

    cout << "\nStatus updated successfully!\n";
}


// Task 5: Delete Content
void deleteContent() {

    Content contents[100];
    int count = 0;

    ifstream file("content_list.txt");

    string line;

    while (getline(file, line)) {

        size_t p1 = line.find("|");
        size_t p2 = line.find("|", p1 + 1);
        size_t p3 = line.find("|", p2 + 1);

        contents[count].title =
            line.substr(0, p1);

        contents[count].platform =
            line.substr(p1 + 1, p2 - p1 - 1);

        contents[count].views =
            stoi(line.substr(p2 + 1, p3 - p2 - 1));

        contents[count].status =
            line.substr(p3 + 1);

        count++;
    }

    file.close();

    if (count == 0) {
        cout << "\nNo content found.\n";
        return;
    }

    cout << "\n===== Content List =====\n";

    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". "
             << contents[i].title << endl;
    }

    int choice;

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (choice < 1 || choice > count) {
        cout << "Invalid number!\n";
        return;
    }

    // Rewrite file without selected content
    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++) {

        if (i != choice - 1) {

            outFile << contents[i].title << "|"
                    << contents[i].platform << "|"
                    << contents[i].views << "|"
                    << contents[i].status << endl;
        }
    }

    outFile.close();

    cout << "\nContent deleted successfully!\n";

    // Show updated list
    viewContent();
}


// Main Menu
int main() {

    int choice;

    do {

        cout << "\n============================\n";
        cout << "     CREATOR DASHBOARD\n";
        cout << "============================\n";

        cout << "1. Add Content\n";
        cout << "2. View Content\n";
        cout << "3. Update Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addContent();
                break;

            case 2:
                viewContent();
                break;

            case 3:
                updateStatus();
                break;

            case 4:
                deleteContent();
                break;

            case 5:
                cout << "\nThank you!\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}