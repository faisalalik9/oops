#include<iostream>
using namespace std;

class TollBooth{
    int numberofCars;
    double revenue;


    public:
    TollBooth(){
        numberofCars = 0;
        revenue = 0.0;
    }

    void payingCar(){
        numberofCars+=1;
        revenue+=2.5;
    }

    void noPaying(){
        numberofCars+=1;
    }

    void displ(){
        std::cout<<"Total number of cars are : "<<numberofCars<<endl;
        std::cout<<"Total revenue collected : "<<revenue<<endl;
    }
};



int main(){
    TollBooth booth;
     
    
    
    

    char c;
    std::cin>>c;

    while(c != 'x'){
        cout<<"Enter the mode"<<endl;
        int a;
        std::cin>>a;
        if(a == 1){
            booth.payingCar();
            booth.displ();
        }
        else{
            booth.noPaying();
            booth.displ();
        }

        std::cin>>c;
    }
}