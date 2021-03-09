#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct node
{

  int data;

  struct node *link;

};

typedef struct node ll;

ll *first, *temp, *temp2;
int ch;
int size = 0;
int i;
int
main ()
{

  do

    {

      menu ();

      printf ("Enter your choice \n");

      scanf ("%d", &ch);

      switch (ch)

	{

	case 1:
	  insertAtEnd ();
	  break;

	case 2:
	  insertAtPos ();
	  break;
	case 3:
	  insertatbegin ();
	  break;
	case 4:
	  delatbeg ();
	  break;
	case 5:
	  delatend ();
	  break;
	case 6:
	  delatpos ();
	  break;
	case 7:
	  print ();
	  break;

	case 8:
	  printsize ();
	  break;

	case 9:
	  exit (1);

	default:
	  printf ("Wrong choice choose 1 to 4");
	}

    }
  while (ch != 9);

  return 0;

}

void
insertAtEnd ()
{

  if (first == NULL)		//no node or linked list
    {

      first = (ll *) malloc (sizeof (ll));
      printf ("Enter Data ");

      scanf ("%d", &first->data);

      first->link = NULL;
      size++;
      printf ("inserted At End\n");

      return;

    }
  temp = first;

  while (temp->link != NULL)

    {

      temp = temp->link;

    }

  temp2 = (ll *) malloc (sizeof (ll));	// New Last Node

  printf ("Enter Data ");

  scanf ("%d", &temp2->data);

  temp2->link = NULL;		// NULL because it is going to be Last Node

  temp->link = temp2;
  size++;
  return;
}

void
insertAtPos ()
{
  int pos = 0;

  if (first == NULL)
    {
      printf ("linked list is empty\n");
      insertAtEnd ();
    }
  printf ("enter at which position you want to insert:\n");
  scanf ("%d", &pos);
  if (pos <= 0 || pos > size + 2)	//check for pos valid or not it doesnt work for 0 and size+2 and also for for pos=2,1 it gets inserted at node 2 only
    {
      printf ("invalid position");
      return;
    }
  if (pos == 1)
    {
      insertatbegin ();
      return;
    }


  temp = first;
  for (int i = 0; i < pos - 2; i++)	// at the end of loop temp is at pos-1
    {
      temp = temp->link;
    }
  ll *new = (ll *) malloc (sizeof (ll));

  printf ("enter data\n");
  scanf ("%d", &new->data);

  new->link = temp->link;
  temp->link = new;
  size++;
  printf ("Inserted node at  %d", pos);
  return;

}

void
insertatbegin ()
{
  if (first == NULL)		//only if no linked list i.e., no node there this executes
    {
      first = (ll *) malloc (sizeof (ll));
      printf ("enter data");
      scanf ("%d", &first->data);
      size++;
      printf ("First Node Created\n");
    }
  else
    {
      ll *new = (ll *) malloc (sizeof (ll));
      printf ("enter data");
      scanf ("%d", &new->data);
      new->link = first;
      first = new;
      size++;
      printf ("node inserted at beginning\n");
    }
  return;
}

void
delatbeg ()
{
  ll *temp;
  if (first == NULL)
    {
      printf ("linked list doesnt exists");
    }
  temp = first;
  printf ("deleted node is %d", first->data);
  first = first->link;
  free (temp);
  size--;
  return;
}

void
delatend ()
{
  ll *temp, *t;
  temp = t = first;
if (first == NULL)
    {
      printf ("linked list doesnt exists");
    }
  for (i = 1; i < size; i++)
    {
      t = temp;
      temp = temp->link;
    }
  t->link = NULL;
  printf ("deleted node is %d", temp->data);
  free (temp);
  size--;
  return;
}

void
delatpos ()
{
int pos=0;
if(first==NULL)
{
    printf("linked list is empty");
}
ll *t1,*t2;
printf("enter position you want to delete\n");
scanf("%d",&pos);
if (pos<=0 || pos>size+2)
    
    {
      
     printf ("invalid position");
      
     return;
    
}
  
if (pos == 1)
    
    {
      
delatbeg ();
      
return;
    
}
  
 
t1=t2=first;
for(i=0;i<pos-1;i++)
{
    t1=t2;
    t2=t2->link;
    
}
t1->link=t2->link;

printf("deleted  node is %d\n",t2->data);
free(t2);
size--;
return;
}

void
print ()
{

  temp = first;

  while (temp != NULL)

    {

      printf ("[%d %u]", temp->data, temp->link);

      temp = temp->link;

    }
  return;
}

void
printsize ()
{

  printf ("size is %d\n", size);
  return;
}

void
menu ()
{
  printf
    ("\n1 Insert at end \n2 Insert At Which Position \n3 insert at beginning \n4 delete at beginning \n5 delete at end \n6 delete at position \n7 Print \n8 size \n9 Exit \n");
  return;
}
