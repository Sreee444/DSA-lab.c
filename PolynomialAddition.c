#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coeff ;
    int expo;
    struct node  * link;
}*poly1 = NULL, *poly2 = NULL, *poly3 = NULL;

 void main()
  {
    int n1,n2;
    printf("Enter the highest degree of the 1st polynomial : ");
    scanf("%d",&n1);
    printf("Enter the highest degree of the 2st polynomial : ");
    scanf("%d",&n2);

    for(int i = 0;i <n1;i++)
     {
        
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        temp ->link = NULL;
        printf("Enter the %d Exponent of first polyomial : ",i+1);
        scanf("%d",&temp ->expo);
        printf("Enter the %d coefficent of first polyomial : ",i+1);
        scanf("%d",&temp ->coeff);

        if(poly1 ==NULL)
         {
            poly1 = temp;
            poly1 ->link =NULL;
         }
        else 
         {
           struct node *ptr =poly1;
           while (ptr->link != NULL)
           {
            ptr = ptr->link;
           }
          ptr ->link = temp;  
         }
     }

    for(int i = 0;i <n2;i++)
     {    
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        temp ->link = NULL;
        printf("Enter the %d Exponent of Second polyomial : ",i+1);
        scanf("%d",&temp ->expo);
        printf("Enter the %d coefficent of Second polyomial : ",i+1);
        scanf("%d",&temp ->coeff);

        if(poly2 ==NULL)
         {
            poly2 = temp;
            poly2 ->link =NULL;
         }
        else 
         {
           struct node *ptr =poly2;
           while (ptr->link != NULL)
           {
            ptr = ptr->link;
           }
          ptr ->link = temp;  
         }
     }
   
   printf("The first polynomial is  : ");
   struct node *ptr1 = poly1;
   while (ptr1 != NULL)
   {
    printf(" ( %d X^%d ) ",ptr1->coeff,ptr1->expo);
    if(ptr1->link!=NULL)
      {
        printf(" + ");
      }
     ptr1 = ptr1->link;
   }
   
   printf("\nThe Second polynomial is  : ");
   struct node *ptr2 = poly2;
   while (ptr2 != NULL)
   {
    printf(" ( %d X^%d ) ",ptr2->coeff,ptr2->expo);
    if(ptr2->link!=NULL)
      {
        printf(" + ");
      }
     ptr2 = ptr2->link;
   }

  struct node * ptr3 = poly1;
  struct node * ptr4 = poly2;

  while(ptr3 != NULL|| ptr4 != NULL)
   {
      struct node *temp = (struct node *) malloc(sizeof(struct node));
     if(ptr3 != NULL &&( ptr4 == NULL || ptr3 ->expo > ptr4 ->expo))
      {
          temp ->coeff = ptr3 ->coeff;
          temp -> expo = ptr3 ->expo;
          temp->link = NULL; 
          ptr3 = ptr3 ->link;
      }
      else if(ptr4 != NULL &&( ptr4 == NULL || ptr4 ->expo > ptr3 ->expo))
      {
          temp ->coeff = ptr4 ->coeff;
          temp -> expo = ptr4 ->expo;
          temp->link = NULL; 
          ptr4 = ptr4 ->link;
      }
      else{
     temp ->coeff = ptr3 ->coeff + ptr4 ->coeff;
      temp ->expo = ptr3 ->expo;
      ptr3 = ptr3 ->link;
      ptr4 = ptr4 ->link;
      }
     temp ->link = NULL;

     if (poly3 == NULL)
     {
        poly3 = temp;
     }
     else
      {
        struct node * ptr5 = poly3;
        while (ptr5 ->link != NULL)
        {
            
            ptr5 = ptr5 ->link;
        }
        ptr5->link = temp;
      }
   }

   printf("\nAdded polynomial is  : ");
   struct node *ptr6 = poly3;
   while (ptr6 != NULL)
   {
    printf(" ( %d X^%d ) ",ptr6->coeff,ptr6->expo);
    if(ptr6->link!=NULL)
      {
        printf(" + ");
      }
     ptr6 = ptr6->link;
   }

}