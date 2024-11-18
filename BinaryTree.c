# include<stdio.h>
 void main()
  {
    int i,j,node,Size,ch;
    printf("Enter the size of the Tree : ");
    scanf("%d",&Size);
    int T[Size];
    printf("Enter the elements : \n");
    for ( i = 0; i < Size; i++)
     {
        scanf("%d",&T[i]);
     } 
    printf("The entered elements are : [ ");
    for( i = 0; i < Size; i++)
     {
        printf(" %d ",T[i]);
     } 
     printf(" ]\n");

  while (ch != 0)
   {
    printf("Enter a Node : ");
    scanf("%d",&node);
    node = node;
    printf("The index Starts from 0 to %d\n",Size -1);
    if (node ==0)
     {
        printf("It is the Parent node \n");
    
     }
    else
     {
        printf("The value of Enterd node is [ %d ]\n",T[node]);
        printf("The parent node of [ %d ] is at [ %d ] index \n",T[node],((node-1)/2));
        printf("The value of parent node is : [ %d ]\n",T[(node-1)/2]);
     }
    

    int LC = (2*node)+1;
    int RC = (2*node)+2;

     if (LC == 0 || LC >Size)
     {
       printf("It has no Left Child \n");
     }
     else
      {
        printf("Its Left child is at index [ %d ] and its value is [ %d ]\n",LC,T[LC]);
      }

    
      if (RC == 0 || RC >=Size)
     {
       printf("It has no Right Child \n");
     }
     else
      {
        printf("Its Right child is at index [ %d ] and its value is [ %d ]\n",RC,T[RC]);
      }
      printf("If u want to Exit type '0' : ");
     scanf("%d",&ch);
  } 
} 
  