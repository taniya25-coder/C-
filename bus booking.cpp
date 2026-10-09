// Next bus booking
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BusBooking {
private:
    int busNumber;
    string departureTime;
    string arrivalTime;
    string destination;
    string passengerName;
    int seatNumber;

public:
    void createBus(int bno, string dest, string depTime, string arrTime) {
        busNumber = bno;
        destination = dest;
        departureTime = depTime;
        arrivalTime = arrTime;
        seatNumber = 0;
    }

    void bookTicket(string name, int seatNo) {
        passengerName = name;
        seatNumber = seatNo;
    }

    void BookingDetails() {
        cout << "Bus Number: " << busNumber << endl;
        cout << "Destination: " << destination << endl;
        cout << "Departure Time: " << departureTime << endl;
        cout << "Arrival Time: " << arrivalTime << endl;
        cout << "Passenger Name: " << passengerName << endl;
        cout << "Seat Number: " << seatNumber << endl;

        if (seatNumber>0) {
            cout << "Available" << endl;
        } else {
            cout << "Not available" << endl;
        }
        cin>>seatNumber;
        cout << "Ticket booked successfully!" << endl;
    }

    void displayBookingDetails() {
        BookingDetails();
    }
};

int main() {
    BusBooking bus;
    int busNumber;
    string destination, departureTime, arrivalTime, passengerName;
    int seatNumber;

    cout <<"Enter bus number\n";
    cin >> busNumber;
    cout <<"Enter destination\n";
    cin >> destination;
    cout <<"Enter departure time\n";
    cin >> departureTime;
    cout <<"Enter arrival time\n";
    cin >> arrivalTime;

    bus.createBus(busNumber, destination, departureTime, arrivalTime);

    cout <<"Enter passenger name\n";
    cin >> passengerName;
    cout << "Enter seat number: ";
    cin >> seatNumber;

    bus.bookTicket(passengerName, seatNumber);
    bus.displayBookingDetails();

    return 0;
}
