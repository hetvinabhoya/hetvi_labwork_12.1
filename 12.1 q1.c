#include<stdio.h>

struct Student{
	int stu_id;
	char stu_name[50];
	int stu_age;
	char stu_course[50];
	char stu_city[50];
	int stu_standard;
	char stu_school[50];
	
};

void main()
{
	
	struct Student s1,s2,s3;
	
	printf("Student 1\n");
	
		printf("Enter Student's id : ");
		scanf("%d",&s1.stu_id);
		printf("Enter Student's name : ");
		scanf("%s",&s1.stu_name);
		printf("Enter Student's age : ");
		scanf("%d",&s1.stu_age);
		printf("Enter Student's course : ");
		scanf("%s",&s1.stu_course);
		printf("Enter Student's city : ");
		scanf("%s",&s1.stu_city);
		printf("Enter Student's standard : ");
		scanf("%d",&s1.stu_standard);
		printf("Enter Student's school : ");
		scanf("%s",&s1.stu_school);


		printf("Id : %d\n",s1.stu_id);
		printf("Name : %s\n",s1.stu_name);
		printf("Age : %d\n",s1.stu_age);
		printf("Course : %s\n",s1.stu_course);
		printf("City : %s\n",s1.stu_city);
		printf("Standard : %d\n",s1.stu_standard);
	    printf("School : %s\n",s1.stu_school);

    printf("------------------------------------\n");

	printf("Student 2\n");
	
		
        printf("Enter Student's id : ");
		scanf("%d",&s2.stu_id);
		printf("Enter Student's name : ");
		scanf("%s",&s2.stu_name);
		printf("Enter Student's age : ");
		scanf("%d",&s2.stu_age);
		printf("Enter Student's course : ");
		scanf("%s",&s2.stu_course);
		printf("Enter Student's city : ");
		scanf("%s",&s2.stu_city);
		printf("Enter Student's standard : ");
		scanf("%d",&s2.stu_standard);
		printf("Enter Student's school : ");
		scanf("%s",&s2.stu_school);


		printf("Id : %d\n",s2.stu_id);
		printf("Name : %s\n",s2.stu_name);
		printf("Age : %d\n",s2.stu_age);
		printf("Course : %s\n",s2.stu_course);
		printf("City : %s\n",s2.stu_city);
		printf("Standard : %d\n",s2.stu_standard);
	    printf("School : %s\n",s2.stu_school);

    printf("------------------------------------\n");

	printf("Student 3\n");
	
		
        printf("Enter Student's id : ");
		scanf("%d",&s3.stu_id);
		printf("Enter Student's name : ");
		scanf("%s",&s3.stu_name);
		printf("Enter Student's age : ");
		scanf("%d",&s3.stu_age);
		printf("Enter Student's course : ");
		scanf("%s",&s3.stu_course);
		printf("Enter Student's city : ");
		scanf("%s",&s3.stu_city);
		printf("Enter Student's standard : ");
		scanf("%d",&s3.stu_standard);
		printf("Enter Student's school : ");
		scanf("%s",&s3.stu_school);


		printf("Id : %d\n",s3.stu_id);
		printf("Name : %s\n",s3.stu_name);
		printf("Age : %d\n",s3.stu_age);
		printf("Course : %s\n",s3.stu_course);
		printf("City : %s\n",s3.stu_city);
		printf("Standard : %d\n",s3.stu_standard);
	    printf("School : %s\n",s3.stu_school);
			
}
