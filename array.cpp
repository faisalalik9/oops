#include<bits/stdc++.h>
using namespace std;

class Arrray{

public:
    vector<int> arr;

    void getArray(){
        cout<<"Enter the elements of the array : ";
        int x =0;
        
        while(x!=10){
            int temp;
            cin>>temp;
            arr.push_back(temp);
            x++;
        }

    sort(arr.begin(),arr.end());
    
    }

    void largest(){
        cout<<"Largest element is : "<<arr[9]<<endl;
    }
    void secondLargest(){
        cout<<"Second largest element is : "<<arr[8]<<endl;
    }
    void smallest(){
        cout<<"Largest element is : "<<arr[0]<<endl;
    }
    void secondSmallest(){
        cout<<"Second smallest element is : "<<arr[1]<<endl;
    }



};


int main(){
    Arrray arr;
    arr.getArray();
    arr.largest();
    arr.secondLargest();
    arr.smallest();
    arr.secondSmallest();

}