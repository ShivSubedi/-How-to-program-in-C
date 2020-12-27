//Quizprob3
//SHIV SUBEDI (CS 5900)
#include <stdio.h>
//#include <string.h>
int main ()
{ 
int i, n;
char name[20];
int test1, test2, test3;
printf ("You can enter only names of 20 students");
printf ("How many names do you want to enter:");
scanf ("%d", &n);
	printf (" Name \t\t Test#1 \t Test#2 \t Test#3 \n");
	printf ("...............................................................................\n");
 for(i = 0; i < n; i++)
 {
 printf("\nEnter the name of student %d : ", i+1);
 scanf ("%s", &name);
 printf ("Enter the test#1 score of student %d: ", i+1);
 scanf ("%d", &test1[i]);
 printf ("Enter the test#2 score of student %d:", i+1);
 scanf ("%d", &test2[i]);
 printf ("Enter the test#3 score of student %d:", i+1);
 scanf ("%d", &test3[i]);
}
    

	for (i=0; i<n; i++)
	{
		printf (" \t\t   %d \t\t  %d \t\t  %d\n", test1[i], test2[i], test3[i]);
	}
	//printf ("................................................................................   \n");
	//for (i=0; i<n; i++)
	//{
		//tp= tp+ p[i];
		//ta = ta + a[i];
		//tb = tb + b[i];
	
	//}
	
	//	printf (" TOTAL \t\t   %d \t\t   %d \t\t   %d\n", tp, ta, tb);
		//class_avg= ()
		//return 0;
	//}
