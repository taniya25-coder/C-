#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    int choice;
    string username,password,u,p;
    cout<<"1.Register\n2.Login\nChoice";
    cin>>choice;

    if(choice==1){
        //Register
        cout<<"New Username:";
        cin>>username;
        cout<<"New Password";
        cin>>password;
        ofstream file("user.txt",ios::app);
        file<< username<<" "<<password<<endl;
        cout<<"Registered";
    }
    else{
        //Login
        cout<<"Username";
        cin>>username;
        cout<<"Password";
        cin>>password;
        ifstream file("user.txt");
        bool found=false;
        while(file>>u>>p){
            if(u==username && p==password) found=true;
        }
        if(found)
        cout<<"Login success";
        else
        cout<<"Failed";
    }
}