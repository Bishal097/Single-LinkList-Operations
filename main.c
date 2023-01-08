#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct Node
{
  int val;
  struct Node *next;
};

typedef struct Node N;
void createlist();
void printlist();
void countlist();
void swaplist();
void deleteit();
void swapvalue();
void deletebefore();
void deleteafter();
void insertend();
void insertfirst();
void insertafter();
void insertbefore();
void deletefirst();
void search();
void reverse();
N* start=NULL,*ptr,*tmp;

void createlist()
{
    ptr=(N*)malloc(sizeof(N));
    printf("enter the value:\n");
    scanf("%d",&ptr->val);

    ptr->next=NULL;
    if(start==NULL)
    {
        start=ptr;
        tmp=ptr;
    }
    else{
        tmp->next=ptr;
        tmp=ptr;
    }
}
void printlist()
{
   ptr=start;
   printf("list is now\n");
   while(ptr!=NULL)
   {
      printf("%d->",ptr->val);
      ptr=ptr->next;
   }
}

void countlist()
{
    tmp=start;
    int c=1;
    while(tmp->next!=NULL)
    {
        c++;
        tmp=tmp->next;
    }
    printf("\n the count is %d",c);
}
void swaplist()
{
    tmp=start;
    ptr=start;
    while(tmp->next->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next->next=ptr->next;
    tmp->next=ptr;
    ptr->next=NULL;
    start=tmp;

}
void swapvalue()
{
    int pnode;
    tmp=start;
    ptr=start;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    pnode=ptr->val;
    ptr->val=tmp->val;
    tmp->val=pnode;
}
void deleteit()
{
    int n;
    printf("enter the value\n");
    scanf("%d",&n);
    tmp=start;
    while(tmp->val!=n)
    {
        ptr=tmp;
        tmp=tmp->next;
    }
    ptr->next=tmp->next;
    free(tmp);
}
void deletebefore()
{
    int n;
    printf("enter the value u want to delete before\n");
    scanf("%d",&n);
    tmp=start;
    while(tmp->next->val!=n)
    {
        ptr=tmp;
        tmp=tmp->next;
    }
    ptr->next=tmp->next;
    free(tmp);
}
void deleteafter()
{
    int n;
    printf("enter the node value\n");
    scanf("%d",&n);
   tmp=start;
   while(tmp->val!=n)
   {
       tmp=tmp->next;
       ptr=tmp->next;
   }
   tmp->next=ptr->next;
   free(ptr);

}
void insertend()
{
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    ptr=(N*)malloc(sizeof(N));
    printf("enter the value to enter \n");
    scanf("%d",&ptr->val);
    tmp->next=ptr;
    ptr->next=NULL;
}


void insertfirst()
{
    ptr=(N*)malloc(sizeof(N));
    printf("enter the value u want to insert\n");
    scanf("%d",&ptr->val);
    ptr->next=start;
    start=ptr;

}
void insertafter()
{
    int n;
    tmp=start;
    printf("enter the value after u want to insert\n");
    scanf("%d",&n);
    while(tmp->val!=n)
    {
        tmp=tmp->next;
    }
      ptr=(N*)malloc(sizeof(N));
    printf("enter the value u want to insert\n");
    scanf("%d",&ptr->val);
   ptr->next=tmp->next;
   tmp->next=ptr;

}
void insertbefore()
{
 int n;
 printf("enter the value before which u want to insert\n");
 scanf("%d",&n);
 tmp=start;
 while(tmp->next->val!=n)
 {
     tmp=tmp->next;
 }
  ptr=(N*)malloc(sizeof(N));
    printf("enter the value u want to insert\n");
    scanf("%d",&ptr->val);
   ptr->next=tmp->next;
   tmp->next=ptr;
}
void deletefirst()
{
  tmp=start;
  ptr=tmp->next;
  start=ptr;
  free(tmp);
}
void deletelast()
{
    tmp=start;
    while(tmp->next->next!=NULL)
    {
        tmp=tmp->next;
    }
    ptr=tmp->next;
    tmp->next=NULL;
    free(ptr);
}
void search()
{
    int k,p=1,flag=0;
    printf("\n Enter the number u want to search\n");
    scanf("%d",&k);
    tmp=start;
    while(tmp->next!=NULL)
    {
        if(tmp->val==k)
        {
            printf("\n %d element found at %d",k,p);
            flag=0;
            break;
        }
        else if(tmp->val!=k)
        {
            flag=1;
            p++;
        }
        tmp=tmp->next;
    }
    if(flag==1)
    {
        printf("Element not found\n");

    }

}
void reverse()
{
    N * pnode=NULL,*nnode=NULL;
    tmp=start;
    while(tmp!=NULL)
    {
        nnode=tmp->next;
        tmp->next=pnode;
        pnode=tmp;
        tmp=nnode;
    }
    start=pnode;
}

void main()
{

    int ch;
    do
    {
        printf("===\n MENU :- ========\n");
        printf("\n1 create list ----\n");
        printf("\n2 print list ----\n");
        printf("\n3 count list ----\n");
        printf("\n4 swap list ----\n");
        printf("\n5 delete it----\n");
        printf("\n6 swap value----\n");
        printf("\n7 delete before----\n");
        printf("\n8 delete after----\n");
        printf("\n9 insert end----\n");
        printf("\n10 insert first----\n");
        printf("\n11 insert after----\n");
        printf("\n12 insert before----\n");
        printf("\n13 delete first----\n");
        printf("\n14 delete last----\n");
        printf("\n15 search list-----\n");
        printf("\n16 reverse list----\n");
        printf("\n17 exit list ----\n");
        printf("\n");
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:createlist();break;
            case 2:printlist();break;
            case 3:countlist();break;
            case 4:swaplist();break;
            case 5:deleteit();break;
            case 6:swapvalue();break;
            case 7:deletebefore();break;
            case 8:deleteafter();break;
            case 9:insertend();break;
            case 10:insertfirst();break;
            case 11:insertafter();break;
            case 12:insertbefore();break;
            case 13:deletefirst();break;
            case 14:deletelast();break;
            case 15:search();break;
            case 16:reverse();break;

        }
    }
        while(ch!=17);
    }








