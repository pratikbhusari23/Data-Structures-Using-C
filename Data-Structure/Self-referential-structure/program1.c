#include<stdio.h>
#include<string.h>
typedef struct employee {

    int empid;
    char empName[20];
    float empSal;
    struct employee *next;
}emp;

void main(){

    emp obj1,obj2,obj3;
    emp *head=&obj1;

    // obj1.empid=1;
    // strcpy(obj1.empName,"Kanha");
    // obj1.empSal=10000.23;
    // obj1.next=&obj2;

    head->empid=1;
    strcpy(head->empName,"Kanha");
    head->empSal=10000.23;
    head->next=&obj2;

    // obj2.empid=2;
    // strcpy(obj2.empName,"Rahul");
    // obj2.empSal=11000.23;
    // obj2.next=&obj3;

    head->next->empid=2;
    strcpy(head->next->empName,"Rahul");
    head->next->empSal=11000.23;
    head->next->next=&obj3;

    // obj3.empid=3;
    // strcpy(obj3.empName,"Ashish");
    // obj3.empSal=12000.23;
    // obj3.next=NULL;

    head->next->next->empid=3;
    strcpy(head->next->next->empName,"Ashish");
    head->next->next->empSal=12000.23;
    head->next->next->next=NULL;

    printf("%d\n",head->empid);
    printf("%s\n",head->empName);
    printf("%f\n",head->empSal);

    // printf("%d\n",(*head).empid);
    // printf("%s\n",(*head).empName);
    // printf("%f\n",(*head).empSal);

    // printf("%d\n",obj1.empid);
    // printf("%s\n",obj1.empName);
    // printf("%f\n",obj1.empSal);

    printf("%d\n",head->next->empid);
    printf("%s\n",head->next->empName);             
    printf("%f\n",head->next->empSal);

    // printf("%d\n",obj1.next->empid);
    // printf("%s\n",obj1.next->empName);
    // printf("%f\n",obj1.next->empSal);

    printf("%d\n",head->next->next->empid);
    printf("%s\n",head->next->next->empName);             
    printf("%f\n",head->next->next->empSal);
}
