#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct HoroscopeRecord {
    string name;
    int date;
    int month;
    int year;
    string zodiac;
    string horoscope;
};

HoroscopeRecord record;

// 1. Create Horoscope
void createHoroscope() {
    cout << "\n--- Enter Horoscope Details ---\n";
    cout << "Name: ";
    cin >> record.name;
     cout << "Date: ";
    cin >> record.date;
    cout << "Month: ";
    cin >> record.month;
    cout << "Year: ";
    cin >> record.year;

    cout << "Zodiac ";
    cin >> record.zodiac;
    cout << "Horoscope Message: ";
    cin >> record.horoscope;
    cout << "\nRecord created successfully!\n";
    cin.ignore(); 
    getline(cin, record.horoscope);
}
void displayHoroscope() {
    cout << "\n--- Horoscope Details ---\n";
    cout << "Name: " << record.name << endl;
    cout << "Date: " << record.date << endl;
    cout << "Month: " << record.month << endl;
    cout << "Year: " << record.year << endl;
    cout << "Zodiac: " << record.zodiac << endl;
    cout << "Horoscope Message: " << record.horoscope << endl;
}
int main() {
    
    int choice;
    
    do {
        cout << "\n--- Horoscope Management System ---\n";
        cout << "1. Create Horoscope\n";
        cout << "2. Display Horoscope\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            createHoroscope();
        } else if (choice == 2) {
            displayHoroscope();
        }
    } while (choice != 3);
    cout << "Exiting the program. Goodbye!\n";
    return 0;
}