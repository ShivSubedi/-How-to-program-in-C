
#include<stdio.h>
#include<string.h>
struct gradebook;
{
char name[10];
int testscore1;
int testscore2;
int testscore3;
};
//typedef struct phonebook NAME;
             
int main()
{
	struct gradebook  name[10], test1, test2, test3;
 int i;
 fflush(stdin);
 printf("You can enter max of 20 students name\n");
 for(i = 0; i < 20; i++)
 {
 printf("\nEnter the name of friend %d : ", i+1);
 fflush(stdin);
 gets(name[i].name);
 printf("Enter the first test grades: ");
 scanf("%d",&test1[i].testscore1);
 printf("Enter the second test grades: ");
 scanf("%d",&test2[i].testscore2);
 printf("Enter the third test grades: ");
 scanf("%d",&test3[i].testscore3);
 }

 for(i = 0;i < 20; i++)
 {
printf("%s \t%d \t%d  \t%d\n",name[i].name,test1[i].testscore,test2[i].testscore,test3[i].testscore);
 }
}
