/*  Yet Not Concluded But think so Self referential Nested Structure either cant be created or my syntax is at fault.

my reasons that self referential structure cant be created -

same code print first 4 printf statements in vscode
and prints only 1 printf statement in vim editor 

*/


#include<stdio.h>
#include<string.h>

struct MovieVideoEditor{

    char VideoEditor[20];
    struct MovieVideoEditor * next4;
    
};

struct MovieDirector{

    char Director[20];
    struct MovieDirector * next3;
    
};

struct MovieActress{

    char actress[20];
    struct MovieActress * next2;
    
};

struct MovieActor{

    char actor[20];
    struct MovieActor * next1;
    
};

struct Movie{

    char mName[20];
    struct MovieActor * obj1;
    struct MovieActress * obj2;
    struct MovieDirector * obj3;
    struct MovieVideoEditor * obj4;

    struct Movie * next;
};

void main(){

    struct Movie obj5,obj6;
    struct MovieActor obj11,obj12;
    struct MovieActress obj21,obj22;
    struct MovieDirector obj31,obj32;
    struct MovieVideoEditor obj41,obj42;
    struct Movie * head=&obj5;

    strcpy(head->mName,"Drishyam2");
    printf("%s\n",head->mName);

    strcpy(head->obj1->actor,"AjayDevgan");
    head->obj1->next1=&obj11;
    printf("%s\n",head->obj1->actor);

    strcpy(head->obj1->next1->actor,"SaurabhShukla");
    head->obj1->next1->next1=&obj12;
    printf("%s\n",head->obj1->next1->actor);

    strcpy(head->obj1->next1->next1->actor,"RajatKapoor");
    head->obj1->next1->next1->next1=NULL;
    printf("%s\n",head->obj1->next1->next1->actor);

    strcpy(head->obj2->actress,"IshitaDutta");
    head->obj2->next2=&obj21;
    printf("%s\n",head->obj2->actress);

    // strcpy(head->obj2->next2->actress,"MrunalJadhav");
    // head->obj2->next2->next2=&obj22;

    // strcpy(head->obj2->next2->next2->actress,"ShriyaSaran");
    // head->obj2->next2->next2->next2=NULL;

    
    // printf("%s\n",head->obj2->next2->actress);
    // printf("%s\n",head->obj2->next2->next2->actress);



    // strcpy(head->obj3->Director,"Abhishek Pathak");
    // head->obj3->next3=&obj31;

    // strcpy(head->obj3->next3->Director,"Jeethu Joseph");
    // head->obj3->next3->next3=NULL;

    // strcpy(head->obj4->VideoEditor,"Jithesh Mangalapilly");
    // head->obj4->next4=&obj41;

    // strcpy(head->obj4->next4->VideoEditor,"Dheeraj Palliyil");
    // head->obj4->next4->next4=&obj42;

    // strcpy(head->obj4->next4->VideoEditor,"ThomasAjay Abraham");
    // head->obj4->next4->next4->next4=NULL;

    // head->next=&obj6;

    // strcpy(head->next->mName,"Tumbbad");

    // strcpy(head->next->obj1->actor,"Sohum Shah");
    // head->obj1->next1=&obj11;

    // strcpy(head->obj1->next1->actor,"Deepak Damle");
    // head->obj1->next1->next1=&obj12;

    // strcpy(head->obj1->next1->next1->actor,"Nitish");
    // head->obj1->next1->next1->next1=NULL;

    // strcpy(head->obj2->actress,"Jyoti Malshe");
    // head->obj2->next2=&obj21;

    // strcpy(head->obj2->next2->actress,"Ronjini Chakraborthy");
    // head->obj2->next2->next2=&obj22;

    // strcpy(head->obj2->next2->next2->actress,"Anita Kelkar");
    // head->obj2->next2->next2->next2=NULL;

    //  strcpy(head->obj3->Director,"Rahi Anil Barve");
    // head->obj3->next3=&obj31;

    // strcpy(head->obj3->next3->Director,"Anand Gandhi");
    // head->obj3->next3->next3=&obj32;

    // strcpy(head->obj3->next3->next3->Director,"Adesh Prasad");
    // head->obj3->next3->next3->next3=NULL;

    // strcpy(head->obj4->VideoEditor,"Ritesh Chandan");
    // head->obj4->next4=&obj41;

    // strcpy(head->obj4->next4->VideoEditor,"Pravin Chaudhari");
    // head->obj4->next4->next4=&obj42;

    // strcpy(head->obj4->next4->next4->VideoEditor,"Rupali Gatti");
    // head->obj4->next4->next4->next4=NULL;

    // head->next->next=NULL;

    
    // printf("%s\n",head->next->mName);



}


