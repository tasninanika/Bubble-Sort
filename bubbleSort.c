#include<stdio.h>

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i<n; i++){
    scanf("%d",&arr[i]);
    }

    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }

    int temp=0;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

