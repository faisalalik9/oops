#include<iostream>
#include<math.h>

using namespace std;

struct Point{
    public:
    int x;
    int y;

    void get(){
        std::cout << "Enter the x coordinate";
        std::cin >> x;
        std::cout << "Enter the y coordinate";
        std::cin >> y;
    }

      void display()
    {
        cout<<"the point is:"<<"("<<x<<","<<y<<")"<<endl;
    }


};

double Distance(Point a, Point b){
    double d;

    d=sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));

    return d;
}


int main(){
   Point p,q;
    double d;
    p.get();
    p.display();
    q.get();
    q.display();
    d=Distance(p,q);
    cout<<d;
}