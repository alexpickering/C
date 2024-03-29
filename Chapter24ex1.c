// Example program #1 from Chapter 24
// File Chapter24ex1.c

/* This program demonstrates pointers by declaring and initializing
both regular and pointer variables for int, float, and char types
and then displays the values of each. */

#include <stdio.h>

main()
{
    int kids;
    int * pKids;
    float price;
    float * pPrice;
    char code;
    char * pCode;

    price = 17.50;
    pPrice = &price;

    printf("\nHow many kids are you taking to the water park? ");
    scanf(" %d", &kids);

    pKids = &kids;

    printf("\nDo you have a discount ticket for the park?");
    printf("\nEnter E for Employee Discount, S for Sav-More ");
    printf("Discount, or N for No Discount: ");
    scanf(" %c", &code);

    pCode = &code;

    printf("\nFirst let's do it with the variables:\n");
    printf("You've got %d kids...\n", kids);
    switch (code)
    {
        case ('E'): printf("The employee discount saves you 25%% on the ");
                    printf("$%.2f price", price);
                    printf("\nTotal ticket cost: $%.2f", (price*.75*kids));
                    break;
        case ('S'): printf("The Sav-more discount saves you 15%% on the ");
                    printf("$%.2f price", price);
                    printf("\nTotal ticket cost: $%.2f", (price*.85*kids));
                    break;
        default: //Either entered N for No discount or an invalid letter
                    printf("You will be paying full price of $%.2f for your tickets", price);
    }
    printf("\n\n\nNow let's do it with the pointers:\n");
    printf("You've got %d kids...\n", *pKids);
    switch (*pCode)
    {
    case ('E'):
                    printf("The employee discount saves you 25%% on the ");
                    printf("$%.2f price", *pPrice);
                    printf("\nTotal ticket cost: $%.2f", (*pPrice * .75 * *pKids));
                    break;
    case ('S'):
                    printf("The Sav-more discount saves you 15%% on the $%.2f price", *pPrice);
                    printf("\nTotal ticket cost $%.2f", (*pPrice * .85 * *pKids));
                    break;
    default :
                    printf("You will be paying full price of $%.2f for your tickets", *pPrice);

    }
    return(0);
}
