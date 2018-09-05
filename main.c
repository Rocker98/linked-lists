#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data
{
	char name[20];
	struct data *next;
};

typedef struct data PERSON;
typedef PERSON *LINK;


int main()
{

LINK head = 0;
LINK current =0;
LINK newest = 0;


//add to start

newest=(LINK)malloc(sizeof(PERSON));
newest->next=head;
head=newest;

strcpy(newest->name,"Alonso");


//end of list

current=head;
while(current->next!=0)
current=current->next;

newest=(LINK)malloc(sizeof(PERSON));
current->next=newest;
newest->next=0;
strcpy(newest->name,"Calradiy");

//add to second position

newest=(LINK)malloc(sizeof(PERSON));
newest->next=head->next;
head->next=newest;
strcpy(newest->name,"Bishop");

current=head;
while(current!=0)
{
	printf("\n%s",current->name);
	current=current->next;
}

	return 0;
}
