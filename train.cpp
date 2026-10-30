//Train Management System
#include <iostream>
#include <string>

using namespace std;

struct list {
    int pnr;
    string name;
    int age;
    int seatNo;
    int payment;
};

class Train {
private:
    int seat[1000];
    int CNF = 0;
    int WL = 0;
    int pnr = 0;
    int cancel=0;

public:
 void ticket(bool ticketCancelledInWaitingList) {
  if (ticketCancelledInWaitingList) {
     if (WL > 0) {
      --WL;
      ++CNF;
     cout << "A waiting-list ticket has been cancelled.\n";
     } 
     else {
 cout << "There are no waiting-list tickets to cancel.\n";
   }
   return;
        }
        
 if (CNF >= seat[1000]) {
            cout << "No tickets available\n";
            return;
        }

        if (cancel > 0) {
            cout << "Your ticket is cancelled.\n";
            return;
        }
    }
};

int main(){

        list booking;
        int pnr = 0;
        int cancel = 0;
        cout << "Enter your name";
        cin >> booking.name;
        cout << "Enter your age";  
        cin >> booking.age;
        cout << "Enter number of seats to book ";
        cin >> booking.seatNo;
        cout << "Choose seat type (AC=400per person, Sleeper=250per person)";
        cin >> booking.payment;
        cout << "Your payment has been confirmed %d.\n" << booking.payment;

        pnr = ++pnr;
           cout << "Ticket booked successfully. Your PNR is: "
               << pnr << '\n';
        cout << "Your ticket is confirmed.\n";
        bool ticketCancelled = false;
        
        return 0;
    }
