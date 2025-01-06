#include<iostream>
#include<deque>

using namespace std;

void firstNegativeinWindowofK(int *arr, int size, int k){
    deque<int>dq;
    // for first window
    for(int i = 0; i < k; i++){
        if(arr[i] < 0){
            dq.push_back(i);
        }
    }
    
    // proces remaining window addition and removal.
    for(int i = k; i < size-1; i++){
        //
        if(!dq.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[dq.front()];
        }
        
        // removal
        if(i - dq.front() >= k){
            dq.pop_front();
        }
        // addition
        if(arr[i] < 0){
            dq.push_back(i);
        }
    }
    
    // last window answer
    if(!dq.empty()){
        cout<<"0"<<" ";
    }
    else{
        cout<<arr[dq.front()];
    }
    
}

int main(){
    int arr[] = {1,-2,-5,7,-8,9};
    int size = 6;
    int k = 3;
    firstNegativeinWindowofK(arr,size,k);
    
    return 0;
}