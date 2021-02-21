#include <iostream>
using namespace std;

int main() {
	 
	
	int N;
	cin>>N;
	
	int arr[N];
	
	for(int i=0;i<N;i++){
	    cin>>arr[i];
	}
	
	int q;
	cin>>q;
	
    int tempsum=0;
    for(int i=0;i<N;i++){
        tempsum+=arr[i];
    }
	
	while(q-->0){
	    int sum = 0;
	    
	    int m;
	    cin>>m;

             if(m!=1){
         
               
              sum=tempsum;
                for(int z=m; z>1;z--){
                    for(int i=0;i<N-m+1;i++){
	                    for(int z =i+1;z<N;z++){

	                        int temp = arr[i];
	                        for(int j=0;j<m-1;j++){
	                            temp=temp^arr[z+j];

	                        }
	        
	                        sum+=temp;
	                    }
                    }
                }
 
             
                 
            }
            else{
                 for(int i=0;i<N;i++){
                        sum+=arr[i];
                    }
            }
 
	        
	        
	  
	        
	         cout<<sum<<endl;
	    }
	   
	    	
	return 0;
	}
	
  
	

 
