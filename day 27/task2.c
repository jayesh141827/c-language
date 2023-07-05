#include<stdio.h>
#include<string.h>

struct Student{
	
	int id;
    char name[20];
    int age;
    char role[20];
    char city[20];
    int experience;
    char company_name[20];
};
int main(){
	int n;
	
	printf("enter arry value :");
	scanf("%d",&n);
	
	struct Student stu[n];
	int i;
	
	for(i=0;i<=n;i++){
	
	printf("enter id :");
	scanf("%d",&stu[i].id);
	
	printf("enter name :");
	scanf("%s",&stu[i].name);
	
	printf("enter age :");
	scanf("%d",&stu[i].age);
	
	printf("enter course :");
	scanf("%s",&stu[i].role);
	
	printf("enter city :");
	scanf("%s",&stu[i].city);
	
	printf("enter std :");
	scanf("%d",&stu[i].experience);
	
	printf("enter school :");
	scanf("%s\n\n",&stu[i].company_name);
    }
   	for(i=0;i<=1;i++){
   			printf("%d\n",&stu[i].id);
   			printf("%s\n",&stu[i].name);
   			printf("%d\n",&stu[i].age);
   			printf("%s\n",&stu[i].role);
			printf("%s\n",&stu[i].city);
   			printf("%d\n",&stu[i].experience);
   			printf("%s\n\n",&stu[i].company_name);
    }
	return 0;
}
