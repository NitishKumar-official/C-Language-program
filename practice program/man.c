#include<stdio.h>
void main()
{
	int choice;
    printf("\t\t\t\t==========:student management system:==========\n\n\n\n");
	printf("\t\t\t\t\twelcome to gec munger\n\n\n");
	printf("\t\t\t\t\tCOMPUTER SCIENCE ENGG\n");
	printf("1.ADD STUDENT\n 2.MODIFY STUDENT\n 3.SHOW ALL STUDENT\n 4.INDIVIUAL VIEW\n 5.REMOVE STUDENT\n 6.LOGOUT\n");
	printf("\t\t\t\t\tchoose any option");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("====ADD STUDENT PAGE====\n");
		        printf("enter your------\n");
		       printf("enter roll------\n");
               printf("enter branch------\n");
               printf("enter date------\n");
		       printf("enter registration------\n");
               printf("enter class teacher------\n");
			   printf("\t\t\t\t==========:student management system:==========\n\n\n\n");break;
		case 2:printf("====MODIFY PAGE====\n");
		        printf("click here to modify name------\n");
		       printf("enter old name------\n");
               printf("enter verification code------\n");
               printf("enter mobile number\n");
		       printf("enter gmail id------\n");
               printf("click on submit------\n");
			   printf("\t\t\t\t==========:student management system:==========\n\n\n\n");break; 
		case 3:printf("====SHOW ALL STUDENTS====\n");
		        printf("name1------\n");
		       printf("name2------\n");
               printf("name3------\n");
               printf("name4------\n");
		       printf("name5------\n");
               printf("name6------\n");
			   printf("\t\t\t\t==========:student management system:==========\n\n\n\n");break;
		case 4:printf("====INDIVIDUAL VIEW====\n");
		        printf("your name");
		       printf("your all data\n");
               printf("name3------\n");
               printf("name4------\n");
		       printf("name5------\n");
               printf("name6------\n");
			   printf("\t\t\t\t==========:student management system:==========\n\n\n\n");break;
		case 5:printf("====REMOVE STUDENT====\n");
		        printf("name1------\n");
		       printf("name2------\n");
               printf("name3------\n");
               printf("name4------\n");
		       printf("name5------\n");
               printf("name6------\n");
			   printf("\t\t\t\t==========:student management system:==========\n\n\n\n");break;
		case 6:printf("====LOGOUT====\n");
		        printf("name1------\n");
		       printf("name2------\n");
               printf("name3------\n");
               printf("name4------\n");
		       printf("name5------\n");
               printf("name6------\n");
			   printf("\t\t\t\t==========:student management system:==========\n\n\n\n");break;
		}
	getch();
}
