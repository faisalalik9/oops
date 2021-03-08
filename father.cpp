#include <iostream>
using namespace std;
class father
{
protected:
    int age;
public:
     father(int a)
     {
        age=a;
     }
    virtual void iam()
     {
     cout<<"\nI am father.My age is:"<<age;
     }
};

class son:public father
{
private:
     int age;
public:
     son(int y,int x):father(x)
     {
     age=y;
     }
     void iam()
     {
     cout<<endl<<"I am son.My age is: "<<age;
     }
};
class daughter:public father
{
private:
     int age;
public:
     daughter(int c,int x):father(x)
     {
     age=c;
     }
     void iam()
     {
     cout<<endl<<"I am daughter.My age is: "<<age;
     }
};
int main()
{
father f(55);
son s(12,55);
daughter d(10,55);
f.iam();

father *p;
p=&s;
p->iam();

p=&d;
p->iam();

return 0;
}