//Example program #1 from Chapter 28
//File Chapter28ex1.c

/* The program takes the book info program from chapter 27
and writes the info to a file named bookinfo.txt. */

//First include the file with the structure definition
#include "bookinfo.h"
#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main()
{
    int ctr;
    struct bookinfo books[3];
    //Get the information about each book from the user

    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("What is the name of the book #%d?\n",(ctr+1));
        gets(books[ctr].title);
        puts("Who is the author");
        gets(books[ctr].author);
        puts("How much did the book cost? ");
        scanf(" %f", &books[ctr].price);
        puts("How many pages in the book? ");
        scanf(" %d", &books[ctr].pages);
        getchar(); //Clears last newline for the next loop
    }

    //Remember when typing your filename path to double up the
    //backslashes or C will think you are putting in a conversion
    //character
    //

    fptr = fopen("C:\\Users\\AM\\Documents\\bookinfo.txt", "w");

    //Test to ensure that the file opened

    if (fptr == 0)
    {
        printf("Error--file could not be opened.\n");
        exit(1);
    }

    //Print a header line and then loop through and print the info
    //to your file, but this time this printout will be in your
    //file and not on the screen.

    fprintf(fptr, "\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        fprintf(fptr, "#%d: %s by %s", (ctr+1), books[ctr].title, books[ctr].author);
        fprintf(fptr, "\nIt is %d pages and cost $%.2f", books[ctr].pages, books[ctr].price);
        fprintf(fptr, "\n\n");
    }
    fclose(fptr); // Always close your files
    return(0);
}
