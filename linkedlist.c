\program for linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
 struct node *next;
}*p,*tmp,*tmp1;
void insert_end(int);
void insert_beg(int);
void ldelete(int);
void display();
void main()
{ 
  int val,n;
  p=NULL;
  do
	{printf("\n************************* MENU ************************");
	 printf("\n1.INSERT AT END");
	 printf("\n2.INSERT AT BEG");
	 printf("\n3.DELETE A PARTICULAR ELE");
	 printf("\n4.DELETE FROM BEG");
	 printf("\n5.DELETE FROM END");
	 printf("\n6.DISPLAY");
	 printf("\n7.EXIT");
	 printf("\nenter ur choice : ");
	 scanf("%d",&n);
	 switch(n)
		{case 1: printf("\nenter the value ");
			 scanf("%d",&val);
			 insert_end(val);
			 break;
		 case 2: printf("\nenter the value");
			 scanf("%d",&val);
			 insert_beg(val);
			 break;
		 case 3: printf("\nenter the value");
			 scanf("%d",&val);
			 l_delete(val);
			 break;
		 case 4: 
			 delete_beg();
			 break;
		 case 5: 
			 delete_end();
			 break;
		 case 6: display();
		 		 break;
		 case 7: exit(0);
		 		 break;
		 default: printf("\n Wrong Choice!");
		 		  break;
		}
	 printf("\n do u want to cont... ");
	}while('y'==getch());

 }

 void insert_end(int ele)
 {
	  tmp=p;
	  tmp1=(struct node*)malloc(sizeof(struct node));
	  tmp1->data=ele;
	  tmp1->next=NULL;
	  if(p==NULL)
		p=tmp1;
	  else
		{
			while(tmp->next!=NULL)
				tmp=tmp->next;
		 	tmp->next=tmp1;
		 }
 }

void insert_beg(int ele)
{
	 tmp=p;
	 tmp1=(struct node*)malloc(sizeof(struct node));
	 tmp1->data=ele;
	 tmp1->next=p;
	 p=tmp1;
}

void l_delete(int ele)
{
     tmp=p;
	 struct node *pre=tmp;
	 while(tmp!=NULL)
		{if(tmp->data==ele)
		    { if(tmp==p)
		       {p=tmp->next;
			free(tmp);
			return;
			}
		      else
			{pre->next=tmp->next;
			 free(tmp);
			 return;
			 }
		    }
		 else
		    { pre=tmp;
		      tmp=tmp->next;
		    }
		}
	  printf("\n no match found!! ");
 }
 
void delete_beg()
{	
	tmp=p;
	if(p==NULL)
		printf("\n no element to be deleted!! ");
	else
	{
		printf("\nelement deleted - %d", p->data);
		p=p->next;
	}

 }
 
void delete_end()
{	
	tmp=p;
	struct node* pre;
	if(p==NULL)
		printf("\n no element to be deleted!! ");
	else if(p->next==NULL)
	{
		printf("\nelement deleted - %d", p->data);
		p=NULL;

	}
		
	else
	{
		while(tmp->next!=NULL){
			pre=tmp;
			tmp=tmp->next;
		}
		pre->next=NULL;
		printf("\nelement deleted - %d", tmp->data);
		
	}

 }

void display()
{
	tmp=p;
 	while(tmp!=NULL)
		{printf("\n %d",tmp->data);
	 	tmp=tmp->next;
		}
}


Output:


************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter your choice : 1

enter the value 23

do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice :
1

enter the value 12

do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice :
2

enter the value67

do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice :
2

enter the value90

do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice :
6

 90
 67
 23
 12
do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice : 3

enter the value67

do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice :
6

 90
 23
 12
do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice :
4

element deleted - 90
do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice : 5

element deleted - 12
do u want to cont...
************************* MENU ************************
1.INSERT AT END
2.INSERT AT BEG
3.DELETE A PARTICULAR ELE
4.DELETE FROM BEG
5.DELETE FROM END
6.DISPLAY
7.EXIT
enter ur choice : 6

 23
do u want to cont...

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                   
    struct node *nextptr;       
}*stnode;

void createNodeList(int n);    
void reverseDispList();         
void displayList();            
int main()
{
    int n;
    printf("\n\n Linked List : Create a singly linked list and print it in reverse order :\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");		
    displayList();
    reverseDispList();
    printf("\n The list in reverse are :  \n");
    displayList();
    return 0;
}

void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL) 
    {
        printf(" Memory can’t  be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode-> num = num;      
        stnode-> nextptr = NULL;
        tmp = stnode;
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL) 
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;     
                fnNode->nextptr = NULL; 
                tmp->nextptr = fnNode; 
                tmp = tmp->nextptr;
            }
        }
    }
}

void reverseDispList()
{
    struct node *prevNode, *curNode;
 
    if(stnode != NULL)
    {
        prevNode = stnode;
        curNode = stnode->nextptr;
        stnode = stnode->nextptr;
 
        prevNode->nextptr = NULL;  
        while(stnode != NULL)
        {
            stnode = stnode->nextptr;
            curNode->nextptr = prevNode;
 
            prevNode = curNode;
            curNode = stnode;
        }
        stnode = prevNode; 
    }
}

void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);   
            tmp = tmp->nextptr;                 
        }
    }
}
