#include <stdio.h>
int main(){
    int arr[5]={0,1,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    for(int i=0; i<n; i++){
            printf("[%d]",arr[i]);
    }
}
