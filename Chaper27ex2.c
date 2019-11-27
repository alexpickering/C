//Example program #2 from Chapter 27
// File Chapter27ex2.c

/* The program again looks to fill three book structures with info,
but it uses a pointer array this time. */

//First include the file with the structure definition
#include "bookinfo.h"
#include <stdio.h>
#include <stdlib.h>

main()
{
    int ctr;
    struct bookinfo * books[3]; // Array of three structure variables

    //Get information about each book from the user

    for (ctr = 0; ctr < 3; ctr++)
    {
        books[ctr] = (struct bookinfo*)malloc(sizeof(struct bookinfo));
        printf("What is the name of the book #%d?\n", (ctr+1));
        gets(books[ctr]->title);
        puts("Who is the author? ");
        gets(books[ctr]->author);
        puts("How much did the book cost? ");
        scanf(" %f", &books[ctr]->price);
        puts("How many pages in the book? ");
        scanf(" %d", &books[ctr]->pages);
        getchar(); //clears newline input to keep things clean for next round
    }

    // Print a header line and then loop through the print info

    printf("\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("#%d: %s by %s", (ctr+1), books[ctr]->title, books[ctr]->author);
        printf("\nIt is %d pages and costs $%.2f", books[ctr]->pages, books[ctr]->price);
        printf("\n\n");
    }
    return(0);
}

