
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int max,arr[106];
    max = arr[0];

    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }


    for (int i=0; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }

    }

    for (int i=0; i<n; i++){
        arr[i]=max-arr[i];
    }
    for (int i=0; i<n; i++){

        printf("%d ",arr[i]);
    }

    return 0;

}
