#include<stdio.h>
struct student
{
	char usn[10];
	char stu name[10];
	int sem;
	float m1,m2,m3,m4,m5,avg;
};
struct student s[10];
int i,n;
printf("Enter no. of student records\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Student USN");
scanf("%s",s[i]USN);
printf("Student name");
scanf("%s",s[i]stuname);
printf("Enter semester");
scanf("%d",s[i]sem);
printf("Enter 5 subjects marks");
scanf("%f %f %f %f %f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
}
for(i=0;i<n;i++)
{
s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5/5.0);
}
printf("Student scored above avg");
printf("\n USN\t student name\t average");
for(i=0;i<n;i++)
{
if(s[i]avg>50.0)
{
printf("\n%s\t%s\t%f\n",s[i].USN,s[i].stuname;s[i].avg);
}
}
printf("Students scored below avg");
printf("\nUSN\t Student name\t Average");
for(i=0,i<n;i++)
{
if(s[i].avg<50.0)
{
printf("\n%s\t%s\t/f",s[i]USN,s[i].stuname,s[i]avg);
}
}
return 0;
}
