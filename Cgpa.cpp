#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    int numCourses;
    double totalGradePoints=0;
    double totalCredit=0;

    cout<< "---CGPA Calculator---" <<endl;
    cout<<"Enter the number of courses";
    cin>>numCourses;

    for(int i=0;i<numCourses;++i){
        double grade,credits;
        cout<<"\nCourse"<<i+1<<endl;

        //Condition:Grade aur Credit hours input lena
        cout<<"Enter grade points (0-10)";
        cin>>grade;
        cout<<"Enter credit hours";
        cin>>credits;

        //Condition: Total Credits and Total grade points input lena
        totalGradePoints +=(grade*credits);
        totalCredit += credits;

        //Condition: GPA/CGPA Compute krna
        double cgpa=totalGradePoints/totalCredit;

        //Condition:Individual course details aur final CGPA display karna
        cout<<"\n======================================"<<endl;
        cout<<"Final Calculator Summary"<<endl;
        cout<<"Total Credit hours"<<totalCredit<<endl;
        cout<<"Total Grade Points"<<totalGradePoints<<endl;
        cout<<"Final CGPA"<<cgpa<<endl;
        cout<<"======================================="<<endl;
        return 0;
    }
}