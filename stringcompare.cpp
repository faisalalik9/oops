#include<bits/stdc++.h>
 
using namespace std;


class CompareString { 
  
public: 
   
    char str[10]; 
  
   
    CompareString(char str1[]) 
    { 
        
        strcpy(this->str, str1); 
    } 
  
   
    int operator==(CompareString s2) 
    { 
        if (strcmp(str, s2.str) == 0) 
            return 1; 
        else
            return 0; 
    } 
  
 
    int operator<=(CompareString s3) 
    { 
        if (strlen(str) <= strlen(s3.str)) 
            return 1; 
        else
            return 0; 
    } 
  
  
    int operator>=(CompareString s3) 
    { 
        if (strlen(str) >= strlen(s3.str)) 
            return 1; 
        else
            return 0; 
    } 
}; 

 

void compare(CompareString s1, CompareString s2) 
{ 
  
    if (s1 == s2) 
        cout << s1.str << " is equal to "
             << s2.str << endl; 
    else { 
        cout << s1.str << " is not equal to "
             << s2.str << endl; 
        if (s1 >= s2) 
            cout << s1.str << " is greater than "
                 << s2.str << endl; 
        else
            cout << s2.str << " is greater than "
                 << s1.str << endl; 
    } 
} 



int main(){
    char a[] ="Faisal";
    char b[] = "Ali";
     CompareString s1(a); 
     CompareString s2(b); 

     compare(s1, s2);
}