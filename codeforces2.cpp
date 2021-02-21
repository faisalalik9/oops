#include <bits/stdc++.h> 
using namespace std; 
 
int main(){
    int t;
    cin>>t;
    
    while(t-->0){
        int n,k;
        cin>>n>>k;
        
        int catB = 1;
        int catA = n;

        
        
        if(n%2==0){

        
        
                catA = catA - k +1;
                catB = catB +k -1;
                    
                if(catB>n){
                    catB =1;
                }
                if(catA<1){
                    catA=n;
                }
                
                if(catA == catB){
                    if(catB<n){
                        catB++;
                    }
                    else if(catB ==n){
                        catB=1;
                    }
                }

    }else{

           
                catA = catA - k +1;
                catB = catB +k;
                    
                if(catB>n){
                    catB =1;
                }
                if(catA<1){
                    catA=n;
                }
                
                if(catA == catB){
                    if(catB<n){
                        catB++;
                    }
                    else if(catB ==n){
                        catB=1;
                    }
            }

        
        }


        cout<<catB<<endl;
        
      
       
    }

    return 0;

}
     
 