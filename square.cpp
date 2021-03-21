#include<bits/stdc++.h>
using namespace std;

class math{

public:
    int num;

    math(int num){
        this->num = num;
    }

    int square(){
         return num*num;
      
    }

    double squareroot(){
        return sqrt(num);
         
    }

    
    
    double cuberoot(){
        return cbrt(num);
        
    }

    virtual int cube(){
        return 0;
    }

};


class mathCube : public math{
  
 public:

        int n;

        mathCube(int num): math(num){
            n = num;
        }

        int cube(){
          return n*n*n;
        }
};


int main(){

    cout<<"Enter the number and operation: "<<endl;
    int n;
    cin>>n;
    math a(n);
    mathCube b(n);
     
    cout<<"Enter 1 for square"<<endl;
    cout<<"Enter 2 for square root"<<endl;
    cout<<"Enter 3 for cube"<<endl;
    cout<<"Enter 4 for cube root"<<endl;

    int m;
    cin>>m;

    switch(m){
        case 1:
            cout<<"Square of "<<n<<" is : "<<a.square();
            break;
        case 2:
            cout<<"Square-root of "<<n<<" is : "<<a.squareroot();
            break;
        case 3:
            cout<<"Cube of "<<n<<" is : "<<b.cube();
            break;
        case 4:
            cout<<"Cube-root of "<<n<<" is : "<<a.cuberoot();
            break;
    }
    
  return 0;  

}