#include<iostream>

int search(int arr[], int x, int n){
    for(int i = 0;  i< n; i++){
        if(arr[i] ==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,-1,-2,-3,-4,-5,-6,-7, 10};
    int index = search(arr, 2, 10);
    std::cout << index << std::endl;
    return 0;
}