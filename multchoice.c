
//menu-1.c
// ET2100 Summer 2016
/* Menu Driven Program using switch statement */
#include<stdio.h>
float Carea(int l, int w, int n);
int main ()
{
      int choice,r,l,w,b,h;
      float area;
      printf("\n\t************* MENU of Options ************ \n\n");
      printf("\n\t******************************************\n");
      printf("\n\t** Enter 1 for area of circle \t\t**");
      printf("\n\t** Enter 2 for area of rectangle \t**");
      printf("\n\t** Enter 3 for area of triangle \t**\n");
       printf("\n\t******************************************\n");
      printf("\nEnter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 printf("\nEnter the radius of the circle\n");
                 scanf("%d",&r);
                        area=3.1412*r*r;
                 break;
            case 2:
                    area = Carea(l, w, choice);                 // invoking the module 
  /*
                  printf("\nEnter length and width of the rectangle\n");
                  scanf("%d %d",&l,&w);
                        area=l*w;
    */
                  break;
            case 3:
                  printf("\nEnter the base and vetical height\n");
                  scanf("%d %d",&b,&h);
                        area=.5*b*h;
                  break;
            default: {
                  printf("\nInvalid Choice! Try again!! \n");
                  area = 0.0;
                }
          }
          printf("\nComputed AREA = %.2f \n", area);
    return 0;
}
float Carea(int l, int w, int n)
{
   float area;
        printf("\nEnter length and width of the rectangle\n");
        scanf("%d %d",&l,&w);
                        area=l*w;
 //  printf("\nComputed AREA = %.2f \n", area);
//Page 1
//menu-1.c
   return (area);
}
//Page 2

