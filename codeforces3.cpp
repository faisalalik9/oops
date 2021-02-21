#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t-->0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        bool checkcon = false;
        bool check = true;

        for(int i=n-1;i>=1;i--){
            if((arr[i]>=arr[i-1])){
                if((arr[i]==arr[i=1]) && arr[i]==0){
                    checkcon=true;
                }else{
                    continue;
                }
                
            }
            else{

                while(arr[i]<=arr[i-1]){
                    if(arr[i-1] != 0){
                    arr[i]++;
                    arr[i-1]--; 
                }
                }

                
                checkcon = true;
                
            }
        }
        
        if(checkcon){
            for(int i=n-1;i>=1;i--){
            if(arr[i]<=arr[i-1]){
                check = false;
            }
        }
        }
        
       
        
        if(check){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }

    return 0;
}