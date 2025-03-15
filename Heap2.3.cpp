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

int kthGreatestElement(int arr[], int size, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0; i<k; i++){
        int element = arr[i];
        pq.push(element);
    }
    
    for(int i=k; i<size; i++){
        int element = arr[i];
        if(element > pq.top())
        {
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int k = 2;
    //cout<< "Kth smallest element un array:"<<kthSmallestElement(arr, size,k)<<endl;
    cout<< "Kth largest element un array:"<<kthSmallestElement(arr, size,k)<<endl;

    return 0;
}