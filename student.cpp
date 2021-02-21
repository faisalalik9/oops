#include<iostream>
#include<string>
using namespace std;

struct Student{
    string Name;
    int rollNo;
    double marks;
    string grade;

    void getStudent(){
        cout<<"Enter the name"<<endl;
        cin>> Name;
        cout<<"Enter the roll. No."<<endl;
        cin>> rollNo;
        cout<<"Enter the marks obtained out of 500"<<endl;
        cin>> marks;

    }

    void Grades(){
        if(marks>=485){
            grade = "A+";
        }
        else if(marks>=475 && marks<485){
            grade = "A";
        }
        else if(marks>=450 && marks<475){
            grade = "B";
        }
        else if(marks>=400 && marks<450){
            grade = "C";
        }
        else if(marks>=300 && marks<400){
            grade = "D";
        }
        else if(marks>=220 && marks<300){
            grade = "E";
        }
        else{
            grade = "Fail";
        }
    }

    void Display(){
        cout<<"Student Name : "<<Name<<endl;
        cout<<"Roll. No : "<<rollNo<<endl;
        cout<<"Total Marks "<<marks<<endl;
        cout<<"Grade obtained : "<<grade<<endl;
    }
};

int main(){
    int i=10;

    while(i-->0){
        
        Student x;
        x.getStudent();
        x.Grades();
        cout<<"----------------"<<endl;
        x.Display();
        cout<<"-----------------"<<endl;
    }

    return 0;
}