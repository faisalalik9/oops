#include<iostream>

int main(){

    char a;
    std::cout << "Enter any character: \n";

    std::cin >> a;

    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        std::cout << "Entered character is a vowel";
    }else{
        std::cout << "Entered character is a consonant";
    }

    return 0;
}