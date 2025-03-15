// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

int kthSmallestElement(int arr[], int size, int k){
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        int element = arr[i];
        pq.push(element);
    }
    
    for(int i=k; i<size;i++){
        int element = arr[i];
        if(element < pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
    
}
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int k = 4;
    cout<< kthSmallestElement(arr, size,k);

    return 0;
}