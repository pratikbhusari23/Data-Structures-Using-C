#include<stdio.h>
#include<string.h>

struct movie{

	int tickets;
	char Mname[100];
	float imdb;
};

void main(){

	struct movie record[2];
	
	// 1st movie record 
	
	record[0].tickets=3;
	strcpy(record[0].Mname,"Avtaar2");
	record[0].imdb=9.9;

	// 2nd movie record
	
	record[1].tickets=5;
	strcpy(record[1].Mname,"Kantara");
	record[1].imdb=9.5;

	// 3rd movie record

	record[2].tickets=7;
	strcpy(record[2].Mname,"BhulBhulaiya");
	record[2].imdb=9.1;

	for(int i=0 ; i<3 ; i++){

		printf("Record of Movies Watch with friends : %d \n",i+1);

		printf("\nNo of Tickets for Movie %d : %d \n",i+1,record[i].tickets);
		printf("Name of The Movie : %s \n",record[i].Mname);
		printf("Imdb Rating of The Movie : %f \n",record[i].imdb);

	}
}
