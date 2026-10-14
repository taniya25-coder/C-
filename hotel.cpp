#include <iostream>
using namespace std;

int choice, room, days;

int main(){
    cout<<"welcome to the hotel management system"<<endl;
    cout<<"1. Book a room"<<endl;
    cout<<"2. Check out"<<endl;
    cout<<"3. View available rooms"<<endl;
    cout<<"4. Bill payment"<<endl;
    cout<<"5. Exit"<<endl;
}
void bookRoom() {
    cout<<"enter choice: ";
    cin>>choice;
    cout<<"How many rooms do you want to book: ";
    cin>>room;
    cout<<"How much DAYS do you want to stay: ";
    cin>>days;
    cout<<"Room booked for "<<days<<" days."<<endl;

}   void checkOut() {
    cout<<"enter choice: ";
    cin>>choice;
    cout<<"checkout time is 12:00 PM"<<endl;
}
void viewAvailableRooms() {
    cout<<"enter choice: ";
    cin>>choice;
    bool available = true;
    if (available) {
        cout<<"Room is available."<<endl;
    } else {
        cout<<"Room is not available."<<endl;
    }
}
void billPayment() {
    cout<<"enter choice: ";
    cin>>choice;
cout<<"Bill is generated."<<days*room*1000<<endl;
    cout<<"Total amount to be paid: "<<days*room*1000<<endl;
}
void display(){
    cout<<room<<" rooms booked for "<<days<<" days."<<endl;
    cout<<"Total amount to be paid: "<<days*room*1000<<endl;
    cout<<"Checkout time is 12:00 PM"<<endl;
    cout<<"Room is booked for "<<days<<" days."<<endl;
    
}