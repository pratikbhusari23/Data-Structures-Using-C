#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int sum=0,x,y,z;
        
        x=(n-1)/3;
        y=(n-1)/5;
        z=(n-1)/15;
        sum=(3*x*(x+1))/2+(5*y*(y+1))/2-(15*z*(z+1))/2;
        printf("%d\n",sum);
        
    }
    
    return 0;
}

// int main(){
//     int t;
//     scanf("%d",&t);
//     for(int a0 = 0; a0 < t; a0++){
//         int n; 
//         scanf("%d",&n);
//         int sum=0;
//         for(int i=3 ; i<n ; i++){
            
//             if(i%3==0 || i%5==0){
            
//                 sum+=i;
//             }
            
//         }
//         printf("%d\n",sum);
        
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int t;
//     scanf("%d",&t);
    
//     while(t){
        
//         int n; 
//         scanf("%d",&n);
        
//         int x=0,y=0,z=0;
//         for(int i=3 ; i<n ; i++){
            
//             if(i%3==0 ){
//                 x+=i;
//             }
//             if(i%5==0){
//                 y+=i;
//             }
//             if(i%15==0){
//                 z+=i;
//             }
//         }
//         printf("%d\n",x+y-z);
//         t--;
//     }
//     return 0;
// }

