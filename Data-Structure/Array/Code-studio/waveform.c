/*
  int matrix[R][C] ={{  1,  6, 11, 16},
                    {  2,  7, 12, 17},
                    {  3,  8, 13, 18},
                    {  4,  9, 14, 19},
                    {  5, 10, 15, 20}};

                    */

#include <stdio.h>

void main(){

    int m=5,n=4;
    int matrix[5][4]={{1,6,11,16},
                      {2,7,12,17},
                      {3,8,13,18},
                      {4,9,14,19},
                      {5,10,15,20}};

    for(int j=0 ; j<n ; j++){
    
        for(int i=0 ; i<m ; i++){

            printf("%d ",matrix[i][j]);
        } 
        
    }
}