//switch statement
# include <stdio.h>
int main ()
{
	char code;
	printf (" Enter the ticket class:");
	scanf (" %c", &code);
	switch (code)
	{
		case 'F':
		case 'f': printf (" First class");
		break;
		case 'B':
		case 'b': printf (" Business class");
		break;
		case 'E':
		case 'e': printf ("Economy class");
		break;
		default:
		printf (" No classification");
			}
			return 0;
}
