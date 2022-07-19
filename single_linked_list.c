#include<stdio.h>
#include<stdlib.h>
struct student
{
	int data;
	struct student *link;
};
int cnt=0;
struct student *head=NULL;
void insert(int n)
{
	struct student *newnode=NULL,*temp=NULL;
	newnode=malloc(sizeof(struct student));
	if(newnode==NULL)
	{
		printf("memory was not allocted \n");
		exit(1);
	}
        cnt++;
	if(head==NULL)
	{
		newnode->data=n;
          newnode->link=NULL;
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->link)
		{
                  temp=temp->link;
		}
		newnode->data=n;
          newnode->link=NULL;
		temp->link=newnode;
	}
}
void display()
{
	struct student *temp;
	temp=head;
	while(temp)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
		}
}

void reverse()
{
	int i=0,j,c;
	struct student *temp=NULL,*p=NULL,*q=NULL;
	/*temp=head;
	while(temp)
        {
                cnt++;
                temp=temp->link;
                }*/
	printf("\n length =%d \n",cnt);
	temp=head;
	j=cnt-1;
	p=q=head;
	while(i<j)
	{
		int k=1;
		while(k<=j)
		{
			q=q->link;
			k++;
		}
		c=q->data;
		q->data=p->data;
		p->data=c;
		p=p->link;
		q=head;
		i++;j--;
	}
}
void ascending_order()
{
	int swap,i,j,a,b;
	struct student *p=NULL,*q=NULL,*temp=NULL;
	printf("\n");
	for(i=0;i<cnt-1;i++)
	{
		p=head;q=head->link;
		
		for(j=0;j<cnt-1;j++)
		{
			if(p->data>q->data)
			{
				swap=p->data;
				p->data=q->data;
				q->data=swap;
			}
			p=p->link;q=q->link;
	        }
	}
}
void descending_order()
{

int swap,i,j,a,b;
        struct student *p=NULL,*q=NULL,*temp=NULL;
        printf("\n");
        for(i=0;i<cnt-1;i++)
        {
                p=head;q=head->link;

                for(j=0;j<cnt-1;j++)
                {
                        if(p->data<q->data)
                        {
                                swap=p->data;
                                p->data=q->data;
                                q->data=swap;
                        }
                        p=p->link;q=q->link;
                }
        }
}

int main()
{
	insert(10);
	insert(20);
	insert(40);
	insert(50);
	insert(30);
	insert(60);
	display();
	reverse();
	display();
        ascending_order();
	display();
	descending_order();
	display();
}
