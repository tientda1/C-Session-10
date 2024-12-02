
#include <stdio.h>
int main(){
    int arr[6]={0,1,2,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key){
                       arr[j+1]=arr[j];
                       j=j-1;
                       }
            arr[j+1]=key;
    }
    int a;
    printf("Nhap vao mot phan tu bat ki: ");
    scanf("%d",&a);
    int arr1[100],index=0;
    for(int i=0;i<n;i++){
        if (arr[i]==a){
            arr1[index]=i;
            index++;
        }
    }
    for (int i = 0; i < index; i++){
        printf("%d, ", arr1[i]);
    }
}

