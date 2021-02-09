#include<iostream>
using namespace std;

class rational{

    float num,denom;

    public:
    rational(){}

    rational(float num,float denom){
        if(denom != 0){
            this->num = num;
            this->denom = denom;
        }
    }

    void reduce(){
        float hcf = __gcd(num,denom);
        num = num/hcf;
        denom = denom/hcf;
        std::cout<<num<<"/"<<denom;

    }



};


int main(){
    rational num(12.0, 3.0);
    num.reduce();
}