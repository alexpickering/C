// Example program #2 from Chap 17 asdfjkl;asdfjkla;sdfjkl;asdfjkl;asdfjkl;
// File Chapter17ex2.c

/* This program presents a menu of choices (three different decades),
gets the user's choice, and then presents a secondary menu (sports,
entertainment, and politics).
When the user makes her second choice, it prints a list of key
information from that specific decade in that specific category. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Despite being a long program, you only need two variables:
    // one for the first menu, one for the second

    int choice1;
    int choice2;

    // The potential decade choices

    printf("What do you want to see?\n");
    printf("1. The 1980's\n");
    printf("2. The 1990's\n");
    printf("3. The 2000's\n");
    printf("4. Quit\n");

    // The top-menu choice and the switch statement that makes the resulting information
    //appear are encased in a do-while loop that ensures one of the 4 menu choices are made
    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice1);
        switch (choice1)
        {
            // In the first case, the user picked the 1980s. Now it's
            //time to see what specific info they need.

        case (1):
            {
                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. The Movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", & choice2);

                if (choice2 == 1)
                {
                    printf("\n\nWorld Series Champions ");
                    printf("of the 1980s:\n");
                    printf("1980: Philadelphia Phillies\n");
                    printf("1981: Los Angeles Dodgers\n");
                    printf("1982: St. Louis Cardinals\n");
                    printf("1983: Baltimore Orioles\n");
                    printf("1984: Detroit Tigers\n");
                    printf("1985: Kansas City Royals\n");
                    printf("1986: New York Mets\n");
                    printf("1987: Minnesota Twins\n");
                    printf("1988: Los Angeles Dodgers\n");
                    printf("1989: Oakland A's\n");
                    printf("\n\n\n");
                    break;
                } else if (choice2 == 2)
                {
                    printf("\n\nOscar-Winning Movies in the 1980s:\n");
                    printf("1980: Ordinary People\n");
                    printf("1981: Chariots of Fire\n");
                    printf("1982: Gandhi\n");
                    printf("1983: Terms of Endearment\n");
                    printf("1984: Amadeus\n1985: Out of Africa\n");
                    printf("1986: Platoon\n");
                    printf("1987: The Last Emperor\n");
                    printf("1988: Rain Man\n");
                    printf("1989: Driving Miss Daisy\n");
                    printf("\n\n\n");
                    break;
                } else if (choice2 == 3)
                {
                    printf("\n\nUS Presidents in the 1980s: \n");
                    printf("1980: Jimmy Carter\n");
                    printf("1981-1988: Ronald Reagan\n");
                    printf("1989: George Bush\n");
                    printf("\n\n\n");
                    break;
                } else if (choice2 == 4)
                {
                    exit(1);
                } else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            }

            //THis case is for the 1990s.
            //Unlike the top menu, there isn't a data-validation
            //do-while loop

        case (2):
            {

                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. The Movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {
                    printf("\n\nWorld Series Champions of ");
                    printf("the 1990s\n");
                    printf("1990: Cincinnati Reds\n1991: Minnesota Twins\n1992: Toronto Blue Jays\n1993: Toronto Blue Jays\n1994: No World Series\n");
                    printf("1995: Atlanta Braves\n1996: New York Yankees\n1997: Florida Marlins\n1998: New York Yankees\n1999: New York Yankees\n\n\n\n");
                    break;
                } else if(choice2 == 2)
                {
                    printf("\n\nOscar-Winning Movies in the 1990s:\n");
                    printf("1990: Dances with Wolves\n1991: The Silence of the Lambs\n1992: Unforgiven\n1993: Schindler's List\n");
                    printf("1996: THe English Patient\n1997: Titanic\n1998: Shakespeare in Love\n1999: American Beauty\n\n\n\n");
                    break;
                } else if (choice2 == 3)
                {
                    printf("\n\nUS Presidents in the 1990s:\n");
                    printf("1990-1992: George Bush\n");
                    printf("1993-1999: Bill Clinton\n");
                    printf("\n\n\n");
                    break;
                } else if (choice2 == 4)
                {
                    exit(1);
                } else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            }

            // The section for when the user selects the 2000s
        case (3):
            {

                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. The Movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {
                    printf("\n\nWorld Series Champions of the 2000s:\n");
                    printf("2000: New York Yankees\n2001: Arizona Diamondbacks\n2002: Anaheim Angels\n2003: Florida Marlins\n");
                    printf("2004: Boston Red Sox\n2005: Chicago White Sox\n2006: St. Louis Cardinals\n2007: Boston Red Sox\n");
                    printf("2008: Philadelphia Phillies\n2009: New York Yankees\n\n\n\n");
                    break;
                } else if (choice2 == 2)
                {
                    printf("\n\nOscar-Winning Movies in the 2000s:\n");
                    printf("2000: Gladiator\n2001: A Beautiful Mind\n2002: Chicago\n2003: The Lord of the Rings: The Return of the King\n");
                    printf("2004: Million Dollar Baby\n2005: Crash\n2006: The Departed\n2007: No Country for Old Men\n2008: Slumdog Millionaire\n");
                    printf("2009: THe Hurt Locker\n\n\n\n");
                    break;
                } else if (choice2 == 3)
                {
                    printf("\n\nUS Presidents in the 2000s\n");
                    printf("2000: Bill Clinton\n");
                    printf("2001-2008: George Bush\n");
                    printf("2009: Barrack Obama\n");
                    printf("\n\n\n");
                    break;
                } else if (choice2 == 4)
                {
                    exit(1);
                } else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            }
        case (4):
            exit(1);

        default: printf("\n%d is not a valid choice.\n", choice1);
        printf("Try again.\n");
        break;
        }
    } while ((choice1 < 1) || (choice1 > 4));

    return 0;

}