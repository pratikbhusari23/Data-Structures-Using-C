/*

    1 10 11  20
    2 9  12  19 
    3 8  13  18
    4 7  14  17 
    5 6  15  16

*/

#include<stdio.h>

void main(){

    int m=5,n=4;
    int matrix[5][4]={{1,10,11,20},
                      {2,9,12,19},
                      {3,8,13,18},
                      {4,7,14,17},
                      {5,6,15,16}};

    for(int j=0 ; j<n ; j++){
        if(j%2==0){
                
            for(int i=0 ; i<m ; i++){

                printf("%d ",matrix[i][j]);
            }

        }
    
        else{

            for(int i=m-1 ; i>=0 ; i--){
                printf("%d ",matrix[i][j]);   
            }
        }
    }
}
