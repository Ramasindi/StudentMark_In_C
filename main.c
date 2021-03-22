#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Weights array
    double weights[4] = {0.35,0.15,0.25,0.25};
    //User input variables declaration and initialisation
    char nameAndSurname[30];
    double projectMark = 0.0;
    double practicalMark = 0.0;
    double test1Mark = 0.0;
    double test2Mark = 0.0;
    //prompting user to enter required information
    printf("Please enter your First Name and your Last Name:\n");
    gets(nameAndSurname);

    printf("Please enter the project mark:\n");
    scanf("%lf",&projectMark);

    printf("Please enter the practical mark:\n");
    scanf("%lf",&practicalMark);

    printf("Please enter test 1 mark:\n");
    scanf("%lf",&test1Mark);

    printf("Please enter test 2 mark:\n");
    scanf("%lf",&test2Mark);

    //Weighted average calculation
    double studentFinalMark = (projectMark * weights[0])
                            + (practicalMark * weights[1])
                            + (test1Mark * weights[2])
                            + (test2Mark * weights[3]);
    //Printing Student Name and final mark
    printf("Calculating...\n");
    system("pause");
    printf(nameAndSurname);
    printf (" Final Mark is : %.2f", studentFinalMark);
    return 0;
}
