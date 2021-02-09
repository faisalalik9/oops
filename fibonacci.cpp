#include<iostream>

int main(){
    int n;
    std::cout << "Enter the number of terms : ";

    std::cin >> n;

    int a = 0;
    int b = 1;
    int c;
    std::cout << a <<" "<< b<< " ";

    for(int i = 0; i< n; i++){
        c = a + b;

        std::cout << c <<" ";
        a = b;
        b = c;
        
    }

    return 0;
}