#include<iostream>

int main(){
    float a;
    float b;
    std::cout << "Enter any two numbers: \n";

    std::cin >> a;
    std::cin >> b;

    int sum = a + b;
    int diff = a - b;
    int product = a*b;
    float div = a/b;

    std::cout<< "Sum is :"<<sum<<"\n";
    std::cout<< "Diff is :"<<diff<<"\n";
    std::cout<< "Product is :"<<product<<"\n";
    std::cout<< "Div is :"<<div<<"\n";

    return 0;
    
}