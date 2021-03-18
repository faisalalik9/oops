#include<bits/stdc++.h>
using namespace std;

class Time{
    public:
    int hour;
    int min;
    int sec;

    void getTime(){
        cout<<"Hour : ";
        cin>>hour;
        cout<<"Min : ";
        cin>>min;
        cout<<"Sec : ";
        cin>>sec;

    }

    friend void addTime(Time &t1, Time &t2);
};

void addTime(Time &t1, Time &t2){
    Time temp;
    temp.hour = t1.hour + t2.hour;
    temp.min = t1.min + t2.min;
    temp.sec = t1.sec + t2.sec;

    if(temp.sec >= 60){
        int k = temp.sec/60;
        temp.sec = temp.sec%60;
        temp.min = temp.min+k;
    }

    if(temp.min>=60){
        int k = temp.min/60;
        temp.min = temp.min%60;
        temp.hour = temp.hour + k;
    }

    if(temp.hour>=24){
        temp.hour = temp.hour%24;
    
    }

    cout<<"Added time"<<endl;
    cout<<temp.hour<<" : "<<temp.min<<" : "<<temp.sec;

}

int main(){
    Time t1;
    Time t2;
    t1.getTime();
    t2.getTime();

    addTime(t1,t2);
}
