#include<stdio.h>
#include<stdlib.h>

void Insertion_at_Begining();
void Insertion_at_AnyPosition();
void Insertion_at_End();
void Deletion_at_Begining();
void Deletion_at_AnyPosition();
void Deletion_at_End();
void Display();

 
 struct node
  {
    int data;
    struct node *Link;
  }*head = NULL;
  
  void main()
   {
    int choice;
    do 
     {
       printf("linked List Operations \n");
       printf("----------------------\n");
       printf("1 : INSERTION AT BEGINING\n");
       printf("2 : INSERTION AT ANY POSITION\n");
       printf("3 : INSERTION AT END\n");
       printf("4 : DELETION AT BEGINING\n");
       printf("5 : DELETION AT ANY POSITION\n");
       printf("6 : DELETION  AT END\n");
       printf("7 : DISPLAY\n");
       printf("8 : EXIT\n");
       printf("CHOOSE AN OPERATION : ");
       scanf("%d",&choice);
     
       switch(choice)
        {
         case 1:
          Insertion_at_Begining();
          break;
        case 2:
          Insertion_at_AnyPosition();
          break;
         case 3:
          Insertion_at_End();
          break;
         case 4:
          Deletion_at_Begining();
          break;
        case 5:
          Deletion_at_AnyPosition();
          break;
         case 6:
          Deletion_at_End();
          break;
         case 7:
          Display();
          break;
         case 8:
          Display();
          printf("EXITED\n");
          break;
         default:
          printf("Choose a valid option\n");
        }
     }
    while(choice != 8);
 }
  

void Insertion_at_Begining()
 {
   struct node * temp = (struct node *)malloc (sizeof(struct node));
   temp ->Link = NULL;
   if(temp == NULL)
    {
      printf("Memory is full\n");
    }
    printf("Enter the data to add : ");
    scanf("%d",&temp->data);


  if (head == NULL)
   {
    head = temp;
    printf("Data added successfully\n");
    head ->Link = NULL;
    }
  else{
    temp ->Link = head;
    head = temp;
    printf("Data added successfully\n");
  }
 }

void Insertion_at_AnyPosition() 
 {
  int pos;
  struct node * temp = (struct node *)malloc (sizeof(struct node));
   temp ->Link = NULL;
   if(temp == NULL)
    {
      printf("Memory is full\n");
    }
    printf("Enter the data to add : ");
    scanf("%d",&temp->data);
     printf("Enter the element you want to insert after it : ");
    scanf("%d",&pos);
    if (head == NULL || head ->data == pos )
   {
    head = temp;
    printf("Data added successfully\n");
    head ->Link = NULL;
    }
  else 
   {
    printf("Enter the element you want to insert after it : ");
    scanf("%d",&pos);
    struct node * ptr = head;
    while (ptr != NULL && ptr-> data != pos )
    {
      ptr = ptr ->Link;
    }
    if(ptr==NULL)
     {
      printf("Element not found \n");
     }
     else
     {
       temp ->Link = ptr ->Link;
       ptr->Link =temp;
        printf("Data added successfully\n");
     }
    
   }

 }
void Insertion_at_End()
 {
   struct node * temp = (struct node *)malloc (sizeof(struct node));
   temp ->Link = NULL;
   if(temp == NULL)
    {
      printf("Memory is full");
    }
    printf("Enter the data to add : ");
    scanf("%d",&temp->data);


  if (head == NULL)
   {
    head = temp;
    printf("Data added successfully\n");
    head ->Link = NULL;
    }
  else 
   {
    struct node * ptr = head;
    while (ptr ->Link != NULL)
    {
      ptr = ptr ->Link;
    }
    ptr ->Link = temp;
   }

 }

void Deletion_at_Begining()
 {
  if (head == NULL)
  {
  printf("Empty \n");
  }
 else
  {
    printf("Deleted element is %d \n",head->data);
    head =head ->Link;
  }
 }

 void Deletion_at_AnyPosition()
  {
    int pos;
  if (head == NULL)
  {
  printf("Empty \n");
  }
   printf("Enter the element you want to delete  : ");
    scanf("%d",&pos);
    struct node * ptr = head;
    while (ptr ->Link != NULL && ptr->Link-> data != pos )
    {
      ptr = ptr ->Link;
    }
    if (head ->Link == NULL)
     {
      printf("The deleted element is %d\n",head ->data);
      free(head);
     }
    if(ptr ->Link ==NULL)
     {
      printf("Element not found \n");
     }
     else
      {
        struct node * ptr1 ;
        ptr1 = ptr ->Link;
        printf("The deleted element is %d\n",ptr1 ->data);
        ptr ->Link = ptr1->Link;
        free(ptr1);
      }
  }

 void Deletion_at_End()
  {
    if (head == NULL)
  {
  printf("Empty \n");
  }
  if(head ->Link == NULL)
   {
    printf("Deleted element is %d \n",head->data);
   free(head);
   }
 else
  {
    struct node * ptr = head;
     struct node * ptr1 = ptr ->Link;
     while (ptr1 ->Link != NULL)
     {
      ptr ->Link  = ptr1 ;
      ptr1 = ptr1 ->Link;
     }
     
    printf("Deleted element is %d \n",ptr1->data);
    ptr ->Link = NULL;
    free(ptr1);
  }
 
}

void Display()
 {
  if (head == NULL)
  {
    printf("Empty\n");
  }
else
 {
   printf(" Elements are : [");
   struct node *ptr = head;
    while (ptr!=NULL)
    {
      printf(" %d ",ptr ->data);
      ptr = ptr ->Link;
    }printf(" ]\n");
    
  }
 }