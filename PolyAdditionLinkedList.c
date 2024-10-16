#include<stdio.h>
#include<stdlib.h>

struct node {
    int expo;
    int coeff;
    struct node *Link;
} *poly1 = NULL, *poly2 = NULL, *poly3 = NULL;

int main() {  
    int n1, n2, i = 0, j = 0;
    printf("Enter the size of First Polynomial: ");
    scanf("%d", &n1);
    printf("Enter the size of Second Polynomial: ");
    scanf("%d", &n2);

    
    while(i < n1) {
        struct node *temp = (struct node*) malloc(sizeof(struct node)); 
        printf("Enter the %d Exponent of 1st Polynomial: ", i + 1);
        scanf("%d", &temp->expo);
        printf("Enter the %d Coefficient of 1st polynomial: ", i + 1);
        scanf("%d", &temp->coeff);
        temp->Link = NULL;  

        if(poly1 == NULL) {
            poly1 = temp;
        } else {
            struct node *ptr = poly1;
            while(ptr->Link != NULL) {
                ptr = ptr->Link;
            }
            ptr->Link = temp;
        }
        i++;   
    }

    
    while(j < n2) {
        struct node *temp = (struct node*) malloc(sizeof(struct node)); 
        printf("Enter the %d Exponent of 2nd Polynomial: ", j + 1);
        scanf("%d", &temp->expo);
        printf("Enter the %d Coefficient of 2nd polynomial: ", j + 1);
        scanf("%d", &temp->coeff);
        temp->Link = NULL;  

        if(poly2 == NULL) {
            poly2 = temp;
        } else {
            struct node *ptr = poly2;
            while(ptr->Link != NULL) {
                ptr = ptr->Link;
            }
            ptr->Link = temp;
        }
        j++;
    }

    
    printf("The first polynomial is: ");
    struct node *ptr5 = poly1;
    while(ptr5 != NULL) {
        printf("(%dX^%d) ", ptr5->coeff, ptr5->expo);
        if(ptr5->Link != NULL) {
            printf("+ ");
        } 
        ptr5 = ptr5->Link;
    }
    printf("\n");

    
    printf("The second polynomial is: ");
    struct node *ptr6 = poly2;
    while(ptr6 != NULL) {
        printf("(%dX^%d) ", ptr6->coeff, ptr6->expo);
        if(ptr6->Link != NULL) {
            printf("+ ");
        }
        ptr6 = ptr6->Link;
    }
    printf("\n");

    
    struct node *ptr1 = poly1;
    struct node *ptr2 = poly2;

    while(ptr1 != NULL || ptr2 != NULL) {
        struct node *temp = (struct node*) malloc(sizeof(struct node));
        if(ptr1 != NULL && (ptr2 == NULL || ptr1->expo > ptr2->expo)) {
            temp->coeff = ptr1->coeff;
            temp->expo = ptr1->expo;
            ptr1 = ptr1->Link;
        } else if(ptr2 != NULL && (ptr1 == NULL || ptr2->expo > ptr1->expo)) {
            temp->coeff = ptr2->coeff;
            temp->expo = ptr2->expo;
            ptr2 = ptr2->Link;
        } else { 
            temp->coeff = ptr1->coeff + ptr2->coeff;
            temp->expo = ptr1->expo; 
            ptr1 = ptr1->Link;
            ptr2 = ptr2->Link;
        }
        temp->Link = NULL; 
        
        
        if(poly3 == NULL) {
            poly3 = temp;
        } else {
            struct node *ptr3 = poly3;
            while(ptr3->Link != NULL) {
                ptr3 = ptr3->Link;
            }
            ptr3->Link = temp;
        }
    }

  
    printf("The Sum polynomial is: ");
    struct node *ptr1 = poly3;
    while(ptr9 != NULL) {
        printf("(%dX^%d) ", ptr9->coeff, ptr9->expo);
        if(ptr9->Link != NULL) {
            printf("+ ");
        }
        ptr9 = ptr9->Link; 
    }
    printf("\n");

    return 0;
}
