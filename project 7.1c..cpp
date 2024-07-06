#include <stdio.h>

main() 
{
    int percentes;
    char grade;
    
    
    printf("Enter your percentes: ");
    scanf("%d", &percentes);
    
    grade = (percentes >= 90) ? 'A' :
            (percentes >= 80) ? 'B' :
            (percentes >= 70) ? 'C' :
            (percentes >= 60) ? 'D' : 'F';
    
    switch (grade) 
	{
        case 'A':
        	printf("your grade is A\n");
            printf("Excellent work!\n");
            break;
        case 'B':
        	printf("your grade is 'B'\n");
            printf("Well done.\n");
            break;
        case 'C':
        	printf("your grade is 'C'\n");
            printf("Good job.\n");
            break;
        case 'D':
        	printf("your grade is 'D'\n");
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
        	printf("your grade is 'F'\n");
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }
    
    if (grade >= 'A' && grade <= 'D')
	 {
        printf(" Congratulations! You are eligible for the next level.\n");
    } 
	else 
	{
        printf(" Please try again next time.\n");
    }

}

