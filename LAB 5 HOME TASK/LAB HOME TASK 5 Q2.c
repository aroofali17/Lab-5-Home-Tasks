#include<stdio.h>
int main()
{
	int department,tmarks,pmarks,att_percent;
	printf("Enter department 1.Computer Science 2.Electrical Engineering 3.Business Administration 4.Mathematics\n");
	scanf("%d",&department);
	printf("Enter theory marks\n");
	scanf("%d",&tmarks);
	printf("Enter practical marks\n");
	scanf("%d",&pmarks);
	printf("Enter Attendance percentage\n");
	scanf("%d",&att_percent);
	switch(department){
		case 1:
			printf("Your department is Computer Science\n"); break;
		case 2:
			printf("Your department is Electrical Engineering\n"); break;
		case 3:
		    printf("Your department is Business Administration\n"); break;
		case 4:
			printf("Your department is Mathematics\n"); break;
		default:
			printf("Invalid\n"); break;
			}
	if(department==1){
		if(tmarks>=50&&pmarks>=40&&att_percent>=75)
			printf("Pass\n");
		else 
		printf("Fail\n");
		}
	else if(department==2){
		if(tmarks>=55&&pmarks>=45&&att_percent>=75)
			printf("Pass\n");
		else 
		printf("Fail\n");
		}
	else if(department==3){
		if(tmarks>=50&&pmarks>=35&&att_percent>=80)
			printf("Pass\n");
		else 
		printf("Fail\n");
		}
	else if(department==4){
		if(tmarks>=60&&pmarks>=40&&att_percent>=75)
			printf("Pass\n");
		else 
		printf("Fail\n");
		}
	else printf("NO DEPARTMENT\n");
	if(tmarks>=85&&pmarks>=80&&att_percent>=90)
	printf("Distinction A\n");
	else printf("No Distinction\n");
	if(tmarks%3==0)
	printf("Seat A\n");
	else if(tmarks%3==1)
	printf("Seat B\n");
	else if(tmarks%3==2)
	printf("Seat C\n");
	else printf("No Seat\n");
	return 0;
		}

	
	
	
	
	

