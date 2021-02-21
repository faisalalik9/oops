#include<iostream>
using namespace std;
class temp_guage
{
    public:
    double current_temp;
    double req_temp;
    void get_temp()
    {
        cout<<"enter current temp:";
        cin>>current_temp;
        cout<<"\n";
        cout<<"enter req temp:";
        cin>>req_temp;
    }
};
class Switch
{
    public:
    void on()
    {
        cout<<"switch is on"<<endl;
    }
    void off()
    {
        cout<<"switch is off"<<endl;
    }
    void no()
    {
        
{
        cout<<"status remains unchanged"<<endl;
    }
};
class thermostat:public temp_guage,public Switch
{
    public:
    void test()
    {
    if(current_temp<(0.95*req_temp))
    Switch::on();
    else if(current_temp>(1.05*req_temp))
    Switch::off();
    else
    Switch::no();
    }
};
int main()
{
    thermostat x;
    x.get_temp();
    x.test();
}