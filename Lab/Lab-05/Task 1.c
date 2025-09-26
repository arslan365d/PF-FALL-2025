#include <stdio.h>
int main()
{
//\tProgram : Asking user For deleting a File or Not
\tchar userChoice;
\tprintf("Are you sure to delete[Y/y] or [N/n]? ");
\tscanf("%c",&userChoice);
\n\tswitch(userChoice){
\t\tcase 'Y':
\t\tcase 'y':
\t\tprintf("Deleted Successfully!");
\t\tbreak;
\t\t\n\t\tcase 'N':
\t\tcase 'n':
\t\tprintf("Deleted Cancelled!");
\t\tbreak;
\t\t\n\t\tdefault:
\t\t\tprintf("Choose Right Option");
\t\t}
\n\treturn 0;
}