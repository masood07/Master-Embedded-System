#include "linked_list.h"
struct Sstudent *head=NULL;
static struct Sstudent *last_node=NULL;
void AddStudent()
{
	std=(struct Sstudent *)malloc(sizeof(struct Sstudent));
	if(head==NULL)
		head=std;
	else
		last_node->next=std;
	Dprintf("Enter the ID : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&std->Sdata.ID);
	Dprintf("Enter student full name : ");
	fflush(stdin); fflush(stdout);
	gets(std->Sdata.name);
	Dprintf("Enter height : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&std->Sdata.height);
	std->next=NULL;
	last_node=std;
}
void ViewStudent()
{
	int count=1;
	struct Sstudent * current_Std=head;
	//check if list is empty
	if(!head)
	{Dprintf("empty list");}
	else
	{
		//loop until reach NULL
		while(current_Std)
		{
			Dprintf("\nrecord number %d\n",count++);
			Dprintf("ID: %d\n",current_Std->Sdata.ID);
			Dprintf("Name: %s\n",current_Std->Sdata.name);
			Dprintf("Height: %f\n",current_Std->Sdata.height);
			current_Std=current_Std->next;
		}
	}

}
int DeleteStudent()
{
	struct Sstudent * selcted_std=head;
	struct Sstudent *prev_std=NULL;
	/*check if list is empty*/
	if(head)
	{
		int id;
		Dprintf("Enter the ID to delete: ");
		scanf("%d",&id);
		/*search for node that have id*/
		while(selcted_std)
		{
			if(selcted_std->Sdata.ID==id)
			{
				/*if it is the first node*/
				if(prev_std==NULL)
				{
					/*head =std2*/
					head=head->next;
				}
				/*if in the node is last node*/
				else if(!selcted_std->next)
				{
					prev_std->next=NULL;
				}
				else
				{
					/*std1->next*/
					prev_std->next=selcted_std->next;
				}
				free(selcted_std);
				return 1;
			}
			prev_std=selcted_std;
			selcted_std=selcted_std->next;
		}

		Dprintf(" cannot find ID");
		return 0;
	}
	else
	{
		Dprintf("empty list");
		return -1;
	}

}
void DeleteAll()
{
	struct Sstudent * current_Std=head;
	struct Sstudent * temp=NULL;
	if(!head)
	{Dprintf("empty list");}
	else
	{
		/*deallocate all nodes*/
		while(current_Std)
		{
			temp=current_Std;
			current_Std=current_Std->next;
			free(temp);
		}
		head=NULL;
		Dprintf("All students deleted");
	}
}
int GetNth()
{
	if(head)
	{
		int index=0;
		struct Sstudent *selcted_std=head;
		Dprintf("Enter the index: ");
		scanf("%d",&index);
		//loop until find index
		index--;
		while(index--)
		{
			selcted_std=selcted_std->next;
			if(selcted_std==NULL)
			{
				Dprintf("index not exist");
				return 0;
			}
		}
		//print node
		Dprintf("ID: %d\n",selcted_std->Sdata.ID);
		Dprintf("Name: %s\n",selcted_std->Sdata.name);
		Dprintf("Height: %f\n",selcted_std->Sdata.height);
		return 1;
	}
	else
	{
		Dprintf("empty list");
		return -1;
	}
}
/*void Get_Count()//iterative
{
	struct Sstudent*selcted_std=head;
	int count=0;
	while(selcted_std)
	{
		selcted_std=selcted_std->next;
		count++;
	}
	printf("number of students: %d",count);
}*/

int Get_Count(struct Sstudent*selcted_std)//Recursive
{
	//if list is empty
	if(!head)
	{
		return 0;
	}
	else
	{
		//if reach NULL return the count
		if(!selcted_std)
		{
			return 0;
		}
		return 1+Get_Count(selcted_std->next);
	}
}
/*int GetNth_from_end()//first method slow
{
	if(!head)
	{
		Dprintf("empty list");
		return -1;
	}
	else
	{
		struct Sstudent *selcted_std=head;
		int rev_index;
		//calculate the length of list
		int length=Get_Count(head);
		Dprintf("Enter the index from end: ");
		scanf("%d",&rev_index);
		//calculate the index from the head
		int index=length-rev_index-1;
		//get the node
		while(index--)
		{
			selcted_std=selcted_std->next;
			if(selcted_std==NULL)
			{
				Dprintf("index not exist");
				return 0;
			}
		}
		Dprintf("ID: %d\n",selcted_std->Sdata.ID);
		Dprintf("Name: %s\n",selcted_std->Sdata.name);
		Dprintf("Height: %f\n",selcted_std->Sdata.height);
		return 1;
	}
}*/
int GetNth_from_end(struct Sstudent *main_p,struct Sstudent *ref_p)//2nd method fast
{
	//check if the list is empty
	if(!head)
	{
		Dprintf("empty list");
		return -1;
	}
	else
	{
		//main will increment by one and ref will increment with the rev_index value untill reach NULL
		int rev_index;
		Dprintf("Enter the index from end: ");
		scanf("%d",&rev_index);
		//make ref_p point to the rev_index node
		while(rev_index--)
		{
			ref_p=ref_p->next;
			if(!ref_p)//if ref_p reach null before rev_index
			{
				Dprintf("index not exist");
				return 0;
			}
		}
		//loop until ref_p point to null
		while(ref_p)
		{
			main_p=main_p->next;
			ref_p=ref_p->next;
		}
		//then access the index
		Dprintf("ID: %d\n",main_p->Sdata.ID);
		Dprintf("Name: %s\n",main_p->Sdata.name);
		Dprintf("Height: %f\n",main_p->Sdata.height);
		return 1;
	}
}
int get_middle()
{
	//check if list is empty
	if(!head)
	{
		Dprintf("empty list");
		return -1;
	}
	else
	{
		//define two pointer slow_p take 1step and fast_p take 2step
		struct Sstudent*slow_p=head;
		struct Sstudent*fast_p=head;
		//loop till fast_p point to NULL
		while(1)
		{
			// odd case
			if(!fast_p->next)
			{
				break;
			}
			// even case
			if(!fast_p->next->next)
			{
				slow_p=slow_p->next;
				break;
			}
			fast_p=fast_p->next->next;
			slow_p=slow_p->next;
		}
		//print node
		Dprintf("ID: %d\n",slow_p->Sdata.ID);
		Dprintf("Name: %s\n",slow_p->Sdata.name);
		Dprintf("Height: %f\n",slow_p->Sdata.height);
		return 1;
	}
}
int reverse_std()
{
	//check if list is empty
	if(!head)
	{
		Dprintf("empty list");
		return -1;
	}
	else
	{
	struct Sstudent*p_1=head,*p_2=head->next,*p_3;
	//assign last_node to help when add student
	last_node=p_1;
	//if list length is one so it is the same
	if(!p_2)
	{
		return 1;
	}
	p_3=p_2->next;
	//if list length is two
	if(!p_3)
	{
		head=p_2;
		p_2->next=p_1;
		p_1->next=NULL;
		return 1;
	}
	//if list length is bigger than 2
	p_1->next=NULL;
	while(1)
	{
		p_2->next=p_1;
		p_1=p_3->next;
		p_3->next=p_2;
		//check if p_2 equal NULL
		if(!p_1)
		{
			head=p_3;
			break;
		}
		p_2=p_1->next;
		//check if p_3 equal NULL
		if(!p_2)
		{
			head=p_1;
			p_1->next=p_3;
			break;
		}
		p_3=p_2->next;
	}
	return 1;
	}
}

