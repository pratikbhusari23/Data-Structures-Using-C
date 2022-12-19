#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int array[1000000],c,d,swap,position;
    time_t start,end;
    double tc; 
    int n;
    printf("Enter total elements : ");
    scanf("%d",&n);

    for(c=n;c>0;c--){
        array[c]=c+1;
    }
    
    start=clock();
    for(c=0;c<n-1;c++){
        position =c;
        for(d=c+1;d<n-c-1;d++){
            if(array[position]>array[d]){
                position=d;
                if(position!=c){
                    swap=array[c];
                    array[c]=array[position];
                    array[position]=swap;
                }
            }
        }
        end=clock();
        tc=(difftime(end,start)/CLOCKS_PER_SEC);
        printf("\nTime efficiency is %lf\n",tc);
    }
}