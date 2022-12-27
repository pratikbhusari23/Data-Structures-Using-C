#include<stdio.h>

int size ,front,rear,flag=0;

int enqueue(int arr[]){

    if(rear==size-1){
        printf("Queue is Full\n");
        return -1;
    }
    if(front==-1){
        front=0;
    }
    
    rear++;
    printf("Enter Data :\n");
    scanf("%d",&arr[rear]);
    
}

// int enqueue(int arr[]){

//     if(rear==size-1){
//         return -1;
//     }
//     if(front==-1){

//         front++;
//     }
//     rear++;
//     printf("Enter The Data\n");
//     scanf("%d",&arr[rear]);

//     return 0;
// }

int dequeue(int arr[]){

    if(front==-1){
        flag =0;
        printf("Queue is Empty\n");
        return -1;
    }
    else {
        int data = arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front++;
        }
        flag=1;
        return data;
    }
}
// int dequeue(int arr[]){

//     for(int i=0 ; i<3 ; i++){

//         printf("%d",arr[i]);
//     }
//     printf("\n");

//     if(front==-1){
//         flag=0;
//         return -1;
//     }
//     else {

//         printf("%d front : \n",front);
//         printf("%d read : \n",rear);
//         int data = arr[front];

//         if(front==rear){

//             front=rear=-1;
//         }
//         else {

//             front ++;
//         }
//         flag=1;
//         return data;
//     }
// }

void frontElement(int arr[]){

    if(front==-1){
        printf("Queue is Empty\n");
    }
    else {
        printf("Front Element is : %d\n",arr[front]);
    }
}

void printQueue(int arr[]){

    if(front==-1){
        printf("Queue is Empty\n");
    }
    else {
        for(int i=front ; i<=rear ; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}

int rearElement(int arr[]){

    if(rear==-1){
        printf("Queue is Empty\n");
        return -1;
    }
    else {
        printf("Rear Element is : %d\n",arr[rear]);
    }
}

void main(){

    printf("Enter The Queue Size :\n");
    scanf("%d",&size);

    int arr[size];
    front=-1;
    rear=-1;

    char y;

    do{

        printf("1.Enqueue\n");
        printf("2.dequeue\n");
        printf("3.Front Element\n");
        printf("4.Print Queue\n");
        printf("5.Rear Element\n");
        
        int z;

        scanf("%d",&z);
        switch (z){

            case 1:{
                
                int data = enqueue(arr);

                // if(data==-1){
                //     printf("Queue is Full\n");
                // }
                
                printf("Data is Enqueued\n");
                
            }
                break;
            // case 1 :
            //     {
            //         int data =enqueue(arr);
            //         if(data==-1){
            //             printf("Queue is Full\n");
            //         }
            //         else {
            //             printf("Queue Pushed\n");
            //             break;
            //         }
            //     }
            case 2 :{

                int data = dequeue(arr);

                // if(flag==0){
                //     printf("Queue is Empty\n");
                // }
                
                printf("Data is Dequeued : %d\n",data);
                
            }
                break;
                // {
                //     int data = dequeue(arr);
                //     if(flag==0){

                //         printf("Queue Already Empty !");
                //     }
                //     else {
                //         printf("%d : dequeued data : \n",data);
                //     }
                //     break;
                // }
            case 3 :
                {
                    frontElement(arr);
                    break;
                }
            case 4 :
                {
                    printQueue(arr);
                    break;
                }
            case 5 :
                {
                    rearElement(arr);
                    break;
                }

            default :

                printf("Invalid Option");
        }
        printf("Do You want to Continue\n ");
        getchar();
        scanf("%c",&y);
    }
    while(y=='y' || y=='Y');
}
        