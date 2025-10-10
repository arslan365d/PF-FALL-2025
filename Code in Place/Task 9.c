#include <stdio.h>
int main()
{
	int programType,uniYear;
	printf("Enter your program type of University:\n");
	printf("1=Computer Science.\n2=Electrical Engineering.\n");
	scanf("%d",&programType);
	
	switch(programType){
		case 1:
			printf("Enter your year of Uni.\n1=First Year.\n2=Second Year\n");
			scanf("%d",&uniYear);
			switch(uniYear){
			case 1:
				printf("You have Following Courses in First Year of Computer Science Program\n");
			    printf("1.Islamic Studies.\n2.Ideology and Constitution of Pakistan.\n3.Programming Fundamentals.\n4.IT Fundamentals.\n5.Applied Physics.\n6.Functional English.\n");
	            break;
	        case 2:
			    printf("You have Follwoing Courses in Second Year of Computer Science Program\n");
			    printf("1.DataBase Management System.\n2.Pakistan Studies.\n3.OOPS.\n4.Data Structure and Algorithm.\n5.Applied Physics.\n6.Functional English.\n"); 
			    break;
			default:
			  printf("Please select First or Second Year only.");    
		}
		break;
		case 2:
		   	printf("Enter your year of Uni.\n1=First Year.\n2=Second Year\n");
			scanf("%d",&uniYear);
			switch(uniYear){
			case 1:
				printf("You have Following Courses in First Year of Electrical Engineering Program\n");
			    printf("1.Islamic Studies.\n2.Ideology and Constitution of Pakistan.\n3.Electrical Fundamentals.\n4.IT Fundamentals.\n5.Applied Physics.\n6.Functional English.\n");
	            break;
	        case 2:
			    printf("You have Follwoing Courses in Second Year of Electrical Engineering Program\n");
			    printf("1.Digital Logic Design.\n2.Pakistan Studies.\n3.Signals and Systems.\n4.Power Systems.\n5.Digital Signal Processing (DSP).\n6.Functional English.\n"); 
			    break;
			default:
			  printf("Please select First or Second Year only."); 
		}
		break;
		default:
			printf("Please Enter Correct Program Number!!");
	}
}
