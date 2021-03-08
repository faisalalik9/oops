#include<bits/stdc++.h>
using namespace std;

struct date{
    int dd;
    int mm;
    int yy;
};

class Hospital{

    public:
        string name;
        struct date doa;
        string disease;
        struct date dod;


        void getPatient(string name,struct date doa,string disease,struct date dod){
            this->name = name;
            this->doa.dd = doa.dd;
            this->doa.mm = doa.mm;
            this->doa.yy = doa.yy;
            this->disease = disease;
            this->dod.dd = dod.dd;
            this->dod.mm = dod.mm;
            this->dod.yy = dod.yy;
        }

        void Display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Date of Add. : "<<doa.dd<<" / "<<doa.mm<<" / "<<doa.yy<<endl;
            cout<<"Disease : "<<disease<<endl;
            cout<<"Dare of Discharge : "<<dod.dd<<" / "<<dod.mm<<" / "<<dod.yy<<endl;
        }
};


class Age:public Hospital{

public:
    int age;


    void getAge(int age){
         
        this->age = age;
    }


    void isPediatric(){
        if(age<12){
            cout<<"Pediatric Patient"<<endl;
        }else{
            cout<<"Non-Pediatric Patient"<<endl;
        }
    }


};





int main(){
    struct date d1;
    d1.dd=8;
    d1.mm=4;
    d1.yy=20;
    Hospital h;
    h.getPatient("Rohan",d1,"Cold",d1);
    Age a;
    a.getAge(10);
    h.Display();
    a.isPediatric();
}