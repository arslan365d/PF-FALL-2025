#include <stdio.h>
int main()
{
//Program : Asking user For deleting a File or Not
char userChoice;
printf("Are you sure to delete[Y/y] or [N/n]? ");
scanf("%c",&userChoice);
switch(userChoice){
case 'Y':
case 'y':
printf("Deleted Successfully!");
break;
case 'N':
case 'n':
printf("Deleted Cancelled!");
break;
default:
printf("Choose Right Option");
}
return 0;
}
