#include<stdio.h>

struct Employee{
	int emp_id;
	char emp_name[50];
	int emp_age;
	char emp_role[50];
	char emp_city[50];
	int emp_experience;
	char emp_company_name[50];
	
};

void main()
{
	int i,n;
	
	printf("How many Employees :  ");
	scanf("%d",&n);
	
	struct Employee e[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Employee's id :  ");
		scanf("%d",&e[i].emp_id);
		printf("Enter Employee's name :  ");
		scanf("%s",&e[i].emp_name);
		printf("Enter Employee's age :  ");
		scanf("%d",&e[i].emp_age);
		printf("Enter Employee's role :  ");
		scanf("%s",&e[i].emp_role);
		printf("Enter Employee's city :  ");
		scanf("%s",&e[i].emp_city);
		printf("Enter Employee's experience :  ");
		scanf("%d",&e[i].emp_experience);
		printf("Enter Employee's company name :  ");
		scanf("%s",&e[i].emp_company_name);
		
		printf("--------------------------------------\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("Id : %d\n",e[i].emp_id);
		printf("Name : %s\n",e[i].emp_name);	
		printf("Age : %d\n",e[i].emp_age);
		printf("Role : %s\n",e[i].emp_role);
		printf("City : %s\n",e[i].emp_city);
		printf("Experience : %d\n",e[i].emp_experience);
		printf("Company name : %s\n",e[i].emp_company_name);
		
		printf("--------------------------------------\n");
	}
	
}
