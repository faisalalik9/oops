#include<iostream>

int main(){
    int a,b;
    int temp;
    std::cout << "Enter a and b\n";
    
    std::cin >> a;
    std::cin >> b;

    std::cout << "a is : "<< a<<"\n";
    std::cout << "b is : "<< b<<"\n";

    //to swap the numbers
    temp = a;
    a = b;
    b = temp;

    std::cout << "Updated a is : "<< a<<"\n";
    std::cout << "Updated b is : "<< b<<"\n";

    return 0;
    
}