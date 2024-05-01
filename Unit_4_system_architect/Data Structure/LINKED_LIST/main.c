#include "linked_list.h"
int main()
{
	extern struct Sstudent*head;
	while(1)
	{
		int option;
		Dprintf("\n===========================\n");
		Dprintf("\tChoose on of the following Options");
		Dprintf("\n 1: AddStudent ");
		Dprintf("\n 2: Delete_Student ");
		Dprintf("\n 3: View_Student ");
		Dprintf("\n 4: DeleteAll  ");
		Dprintf("\n 5: GetNth  ");
		Dprintf("\n 6: Number of students  ");
		Dprintf("\n 7: GetNth_from_end  ");
		Dprintf("\n 8: Get_middle_student  ");
		Dprintf("\n 9: reverse_student  ");
		Dprintf("\n\n Enter Option Number: ");
		scanf("%d",&option);
		Dprintf("===========================\n");
		switch(option)
		{
			case 1:
				AddStudent();
				break;
			case 2:
				DeleteStudent();
				break;
			case 3:
				ViewStudent();
				break;
			case 4:
				DeleteAll();
				break;
			case 5:
				GetNth();
				break;
			case 6:
				Dprintf("number of students: %d",Get_Count(head));
				break;
			case 7:
				GetNth_from_end(head,head);
				break;
			case 8:
				get_middle();
				break;
			case 9:
				reverse_std();
				break;
			default:
				Dprintf("\nWrong option");
		}
	}
	return 0;
}

