#include <bits/stdc++.h> 
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
        int sum =0;
         
        int size = sizeof(arr) / sizeof(arr[0]); 
        sort(arr, arr + size); 
      
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(arr[i]>arr[j]){
                   
                    sum++;
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }

    

return 0;
}


  
 
 
