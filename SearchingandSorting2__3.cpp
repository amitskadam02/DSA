// Search in 2D matrix
#include <iostream>

using namespace std;

boll searchinMatrx(vector<vector<int>& matrix, int target>){
    
    int row=matrix.size();
    int col=matrix[0].size();
    int n= row*col;
    
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;
    
    while(s<=e){
        
        // to find currNumber
        int rowindex=mid/col;
        mid colindex= mid%col;
        int cuuNumber =matrix[rowindex][colindex];
        
        if(currNumber == target){
            return true;
        }else if(target>currNumber){
            //go right
            s=mid+1;
        }else{
            //go left
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}
