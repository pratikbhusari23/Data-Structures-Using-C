
#include<stdio.h>
#include<stdlib.h>

int arr_size;
int front=-1,rear=-1;


void enqueue(int data,int arr[]){
    if(rear==arr_size-1){
        printf("Queue is Full");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        arr_size[rear]=data;
    }
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue is Empty");
    }
    else{
        front++;
    }
}

void sort(int arr[]){
    int i,j,temp;
    for(i=0;i<arr_size;i++){
        for(j=i+1;j<arr_size;j++){
            if(arr_size[i]>arr_size[j]){
                temp=arr_size[i];
                arr_size[i]=arr_size[j];
                arr_size[j]=temp;
            }
        }
    }
}   

void display(int arr[]){
    int i;
    for(i=front;i<=rear;i++){
        printf("%d ",arr_size[i]);
    }
}

int main(){

    printf("Enter Size of Array :");
    scanf("%d",&arr_size);

    int arr[arr_size];
    int i,data;
    for(i=0;i<arr_size;i++){
        printf("Enter Data :\n");
        scanf("%d",&data);
        enqueue(data,arr[arr_size]);
    }
    sort(arr[arr_size]);
    display(arr[arr_size]);
    return 0;
}
