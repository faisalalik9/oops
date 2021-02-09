#include<iostream>
#include<math.h>
using namespace std;

struct complex{
    public:
    int x;
    int y;

    void getNum(){
        std::cout << "Enter the number"<<endl;
        std::cout << "Enter the real part : ";
        std::cin >> x;
        std::cout << "Enter the imaginary part : ";
        std::cin >> y;
    }

      void display()
    {
        cout<<"The number is:"<<"("<<x<<" + i"<<y<<")"<<endl;
    }


};

void Sum(complex A, complex B){
    int real = A.x + B.x;
    int imag = A.y + B.y;

    std::cout << "Sum is "<< real << " + i"<< imag<<endl;
}


void Diff(complex A, complex B){
    int real = A.x - B.x;
    int imag = A.y - B.y;
    if(imag > 0){
        std::cout << "Difference is "<< real << " + i"<< imag<<endl;
    }
    else{
        imag = imag * -1;
        std::cout << "Difference is "<< real << " - i"<< imag<<endl;
    }
}

void Multiply(complex A, complex B){
    int real = A.x*B.x - A.y*B.y;
    int imag = A.x*B.y + A.y*B.x;
    if(imag > 0){
        std::cout << "Product is "<< real << " + i"<< imag<<endl;
    }
    else{
        imag = imag * -1;
        std::cout << "Product is "<< real << " - i"<< imag<<endl;
    }
}

void Divide(complex A, complex B){
    int real = (A.x*B.x + A.y*B.y)/(B.x*B.x + B.y*B.y);
    int imag = (A.y*B.x - A.x*B.y)/(B.x*B.x + B.y*B.y);

    if(imag > 0){
        std::cout << "Division is "<< real << " + i"<< imag<<endl;
    }
    else{
        imag = imag * -1;
        std::cout << "Division is "<< real << " - i"<< imag<<endl;
    }    
}



int main(){
    complex x,y;
    int sum;
    x.getNum();
    x.display();
    y.getNum();
    y.display();
    Sum(x,y);
    Diff(x,y);
    Multiply(x,y);
    Divide(x,y);

}
