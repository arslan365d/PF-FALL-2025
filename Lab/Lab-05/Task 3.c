#include <stdio.h>
int main()
{
	float ntsMarks,fscMarks;
	float fscPercent;
	printf("SEAT ALLOCATION PROGRAM!!!\n\n");
	printf("Enter your NTS Marks:");
	scanf("%f",&ntsMarks);
	printf("Enter your FSC Marks:"); 
	scanf("%f",&fscMarks);

	fscPercent = fscMarks / 1100 * 100;

//	For Oxford University
if(fscPercent>70){
	if(ntsMarks>70){
		printf("\nOxford\nYou are eligible for IT department\n");
		printf("You You are eligible for Electronics department\n");
		printf("You You are eligible for Telecommunication department\n");
	}else if(ntsMarks>60){
		printf("\nOxford\n You You are eligible for Electronics department\n");
		printf("You You are eligible for Telecommunication department\n");
	}else if(ntsMarks>50){
		printf("\nOxford\n You are eligible for Telecommunication department\n");
	}else{
		printf("\nSorry! Your NTS Marks are not compatible to any department of Oxford");
	}
}else{
	printf("\nSorry! Your FSC Marks are low for Admission in Oxford\n");
}

//	For MIT University
if(ntsMarks>50){
	if(fscPercent>=60){
			printf("\nMIT\nYou are eligible for IT department\n");
			printf("You are eligible for Chemical department\n");
			printf("You are eligible for Computer department\n");
	}else if(fscPercent>50){
		printf("\nMIT\nYou are eligible for Chemical department\n");
		printf("You are eligible for Computer department\n");
	}else if(fscPercent>40){
		printf("\nMIT\nYou You are eligible for Computer department\n");
	}else{
			printf("\nSorry! Your FSC Marks are not compatible to any department of MIT");
	}
	
}else{
	printf("\nSorry! Your NTS Marks are low for Admission in MIT");
}

return 0;
}
