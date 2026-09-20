#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j= 0;j<c;j++){
            int el;
            scanf("%d",&el);
            arr[i][j]=el;
        }
    }

    for(int i=0;i<r;i++){
        int sum =0;
        for (int j= 0;j<c;j++){
            //printf("%d ",arr[i][j]);
            sum += arr[i][j];
        }
        printf("%d ",sum);
    }
    return 0;
}