#include <stdio.h>
int main(){
    int arr[5]={0,1,2,4,3};
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
    int a,exist;
    printf("Nhap vao mot phan tu bat ki: ");
    scanf("%d",&a);
    int l=0,r=5-1;
    while(l<=r){
                int m=(l+r)/2;
                if(arr[m]==a){
                printf("Nam o vi tri %d o mang",m);
                exist=1;
                break;
                }
                else if(arr[m]<a){
                     l=m+1;
                     }
                else{
                     r=m-1;
                }
    }
    if(exist==0){
        printf("Khong tim thay");
    }
}
