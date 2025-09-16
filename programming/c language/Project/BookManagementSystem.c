#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book {
    int id;
    char bookname[30];
    char authorname[30];
    char category[30];
    int price;
    int rating;
};

void storebook(struct book*, int);
void displaybook(struct book*, int);
void addbook(struct book**, int*);
void searchbyid(struct book*, int);
void searchbyname(struct book*, int);
void searchbyauthorname(struct book*, int);
void searchbycategory(struct book*, int);
void searchbyprice(struct book*, int);
void searchbyrating(struct book*, int);
void removebook(struct book*, int*);

void main() {
	
	
    int bookCount = 20;
    
    struct book *b = (struct book*)malloc(bookCount * sizeof(struct book));
    if (b == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    storebook(b, 20);
   
    
    printf("                    BOOK MANAGEMENT\n");
    printf("-------------------------------------------------------------------------------\n");
    

//    printf("\n=== INITIAL BOOK COLLECTION ===\n");
//    displaybook(b, bookCount);
    
    int a, flag = 1;
    
    while(flag) {
        printf("\n================ MENU ================\n");
        printf("press 1 for Add book\n");
        printf("press 2 for search book\n");
        printf("press 3 for display all books\n");
        printf("press 4 for remove any book\n");
        printf("Choice: ");
        scanf("%d", &a);
        printf("\n");
        
        if(a == 1) {
            printf("\n=== ADDING NEW BOOK ===\n");
            addbook(&b, &bookCount);
            printf("\n=== UPDATED BOOK COLLECTION (Old + New) ===\n");
            displaybook(b, bookCount);
        } 
        else if(a == 2) {
            int sr;
            printf("\n=== SEARCH OPTIONS ===\n");
            printf("press 1 for search book by id\n");
            printf("press 2 for search book by name\n");
            printf("press 3 for search book by author name\n");
            printf("press 4 for search book by book category\n");
            printf("press 5 for search book by price\n");
            printf("press 6 for search book by rating\n");
            printf("Choice: ");
            scanf("%d", &sr);
            fflush(stdin);
            
            if(sr == 1) {
                searchbyid(b, bookCount);
            } else if(sr == 2) {
                searchbyname(b, bookCount);
            } else if(sr == 3) {
                searchbyauthorname(b, bookCount);
            } else if(sr == 4) {
                searchbycategory(b, bookCount);
            } else if(sr == 5) {
                searchbyprice(b, bookCount);
            } else if(sr == 6) {
                searchbyrating(b, bookCount);
            }
        } 
        else if(a == 3) {
            printf("\n=== ALL BOOKS IN COLLECTION ===\n");
            displaybook(b, bookCount);
        } 
        else if(a == 4) {
            removebook(b, &bookCount);
            printf("\n=== UPDATED BOOK COLLECTION AFTER REMOVAL ===\n");
            displaybook(b, bookCount);
        } 
        else {
            printf("Invalid option!\n");
        }
        
        printf("\ndo you want to exit press 0\n");
        printf("do you want to continue press 1: ");
        scanf("%d", &flag);
    }
    
    free(b);
}

void addbook(struct book **b, int *bookCount) {
    struct book *temp = (struct book*)realloc(*b, (*bookCount + 1) * sizeof(struct book));
    if (temp == NULL) {
        printf("Memory reallocation failed! Cannot add more books.\n");
        return;
    }
    
    *b = temp;
    
    struct book newBook;
    newBook.id = *bookCount + 1;
    
    fflush(stdin);
    printf("Enter book name: ");
    fgets(newBook.bookname, sizeof(newBook.bookname), stdin);
    newBook.bookname[strcspn(newBook.bookname, "\n")] = 0; // Remove newline
    
    printf("Enter name of author: ");
    fgets(newBook.authorname, sizeof(newBook.authorname), stdin);
    newBook.authorname[strcspn(newBook.authorname, "\n")] = 0;
    
    printf("Enter book category: ");
    fgets(newBook.category, sizeof(newBook.category), stdin);
    newBook.category[strcspn(newBook.category, "\n")] = 0;
    
    printf("Enter book price: ");
    scanf("%d", &newBook.price);
    
    printf("Enter book rating out of 5: ");
    scanf("%d", &newBook.rating);
    
    (*b)[*bookCount] = newBook;
    (*bookCount)++;
    
    printf("\nBook added successfully!\n");
}

void searchbyid(struct book *b, int size) {
    int idn;
    printf("Enter book ID to search: ");
    scanf("%d", &idn);
    
    int found = 0;
    for(int i = 0; i < size; i++) {
        if(b[i].id == idn) {
            printf("\nBook found at position %d:\n", i);
            printf("%-5s %-20s %-15s %-15s %-10s %-6s\n","Id","Bookname","AuthorName","Category","Price","Rating");
            printf("---------------------------------------------------------------------------------\n");
            printf("%-5d %-20s %-15s %-15s %-10d %-6d\n", b[i].id, b[i].bookname, b[i].authorname, b[i].category, b[i].price, b[i].rating);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Book with ID %d not found!\n", idn);
    }
}

void searchbyname(struct book *b, int size) {
    char n1[30];
    fflush(stdin);
    printf("Enter book name to search: ");
    fgets(n1, sizeof(n1), stdin);
    n1[strcspn(n1, "\n")] = 0;
    
    int found = 0;
    for(int i = 0; i < size; i++) {
        if(strcmp(b[i].bookname, n1) == 0) {
            printf("\nBook found at position %d:\n", i);
            printf("%-5s %-20s %-15s %-15s %-10s %-6s\n","Id","Bookname","AuthorName","Category","Price","Rating");
            printf("---------------------------------------------------------------------------------\n");
            printf("%-5d %-20s %-15s %-15s %-10d %-6d\n", b[i].id, b[i].bookname, b[i].authorname, b[i].category, b[i].price, b[i].rating);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Book '%s' not found!\n", n1);
    }
}

void searchbyauthorname(struct book *b, int size) {
    char n1[30];
    fflush(stdin);
    printf("Enter author name to search: ");
    fgets(n1, sizeof(n1), stdin);
    n1[strcspn(n1, "\n")] = 0;
    
    int found = 0;
    printf("\nBooks by author '%s':\n", n1);
    printf("%-5s %-20s %-15s %-15s %-10s %-6s\n","Id","Bookname","AuthorName","Category","Price","Rating");
    printf("---------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < size; i++) {
        if(strcmp(b[i].authorname, n1) == 0) {
            printf("%-5d %-20s %-15s %-15s %-10d %-6d\n", b[i].id, b[i].bookname, b[i].authorname, b[i].category, b[i].price, b[i].rating);
            found = 1;
        }
    }
    if(!found) {
        printf("No books found by author '%s'!\n", n1);
    }
}

void searchbycategory(struct book *b, int size) {
    char n1[30];
    fflush(stdin);
    printf("Enter category to search: ");
    fgets(n1, sizeof(n1), stdin);
    n1[strcspn(n1, "\n")] = 0;
    
    int found = 0;
    printf("\nBooks in category '%s':\n", n1);
    printf("%-5s %-20s %-15s %-15s %-10s %-6s\n","Id","Bookname","AuthorName","Category","Price","Rating");
    printf("---------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < size; i++) {
        if(strcmp(b[i].category, n1) == 0) {
            printf("%-5d %-20s %-15s %-15s %-10d %-6d\n", b[i].id, b[i].bookname, b[i].authorname, b[i].category, b[i].price, b[i].rating);
            found = 1;
        }
    }
    if(!found) {
        printf("No books found in category '%s'!\n", n1);
    }
}

void searchbyprice(struct book *b, int size) {
    int pr;
    printf("Enter maximum price to search: ");
    scanf("%d", &pr);
    
    int found = 0;
    printf("\nBooks with price <= %d:\n", pr);
    printf("%-5s %-20s %-15s %-15s %-10s %-6s\n","Id","Bookname","AuthorName","Category","Price","Rating");
    printf("---------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < size; i++) {
        if(b[i].price <= pr) {
            printf("%-5d %-20s %-15s %-15s %-10d %-6d\n", b[i].id, b[i].bookname, b[i].authorname, b[i].category, b[i].price, b[i].rating);
            found = 1;
        }
    }
    if(!found) {
        printf("No books found with price <= %d!\n", pr);
    }
}

void searchbyrating(struct book *b, int size) {
    int rate;
    printf("Enter minimum rating to search: ");
    scanf("%d", &rate);
    
    int found = 0;
    printf("\nBooks with rating >= %d:\n", rate);
    printf("%-5s %-20s %-15s %-15s %-10s %-6s\n","Id","Bookname","AuthorName","Category","Price","Rating");
    printf("---------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < size; i++) {
        if(b[i].rating >= rate) {
            printf("%-5d %-20s %-15s %-15s %-10d %-6d\n", b[i].id, b[i].bookname, b[i].authorname, b[i].category, b[i].price, b[i].rating);
            found = 1;
        }
    }
    if(!found) {
        printf("No books found with rating >= %d!\n", rate);
    }
}

void removebook(struct book *b, int *bookCount) {
    int no, index = -1;
    printf("Enter book ID which you want to remove: ");
    scanf("%d", &no);
    
    for(int i = 0; i < *bookCount; i++) {
        if(b[i].id == no) {
            index = i;
            break;
        }
    }
    
    if(index != -1) {
        for(int i = 2; i < *bookCount - 1; i++) {
            b[i] = b[i + 1];
        }
        (*bookCount)--;
        printf("Book with ID %d removed successfully!\n", no);
    } else {
        printf("Book with ID %d not found!\n", no);
    }
}

void storebook(struct book *b, int size) {
    b[0].id = 1;
    strcpy(b[0].bookname, "WingsFire");
    strcpy(b[0].authorname, "Kalam");
    strcpy(b[0].category, "Biography");
    b[0].price = 337;
    b[0].rating = 5;

    b[1].id = 2;
    strcpy(b[1].bookname, "Alchemist");
    strcpy(b[1].authorname, "Coelho");
    strcpy(b[1].category, "Fiction");
    b[1].price = 299;
    b[1].rating = 5;

    b[2].id = 3;
    strcpy(b[2].bookname, "Fearless");
    strcpy(b[2].authorname, "Aroor");
    strcpy(b[2].category, "Military");
    b[2].price = 227;
    b[2].rating = 5;

    b[3].id = 4;
    strcpy(b[3].bookname, "Physics");
    strcpy(b[3].authorname, "Verma");
    strcpy(b[3].category, "Academic");
    b[3].price = 408;
    b[3].rating = 5;

    b[4].id = 5;
    strcpy(b[4].bookname, "Sapiens");
    strcpy(b[4].authorname, "Harari");
    strcpy(b[4].category, "History");
    b[4].price = 205;
    b[4].rating = 5;

    b[5].id = 6;
    strcpy(b[5].bookname, "ThinkBig");
    strcpy(b[5].authorname, "Schwartz");
    strcpy(b[5].category, "SelfHelp");
    b[5].price = 169;
    b[5].rating = 5;

    b[6].id = 7;
    strcpy(b[6].bookname, "Secrets");
    strcpy(b[6].authorname, "Das");
    strcpy(b[6].category, "Motivate");
    b[6].price = 125;
    b[6].rating = 5;

    b[7].id = 8;
    strcpy(b[7].bookname, "IndnGirl");
    strcpy(b[7].authorname, "Bhagat");
    strcpy(b[7].category, "Romance");
    b[7].price = 95;
    b[7].rating = 4;

    b[8].id = 9;
    strcpy(b[8].bookname, "SmallGod");
    strcpy(b[8].authorname, "Roy");
    strcpy(b[8].category, "Literary");
    b[8].price = 174;
    b[8].rating = 4;

    b[9].id = 10;
    strcpy(b[9].bookname, "WordPower");
    strcpy(b[9].authorname, "Lewis");
    strcpy(b[9].category, "Language");
    b[9].price = 96;
    b[9].rating = 4;

    b[10].id = 11;
    strcpy(b[10].bookname, "SubMind");
    strcpy(b[10].authorname, "Murphy");
    strcpy(b[10].category, "SelfHelp");
    b[10].price = 99;
    b[10].rating = 5;

    b[11].id = 12;
    strcpy(b[11].bookname, "SubtleArt");
    strcpy(b[11].authorname, "Manson");
    strcpy(b[11].category, "SelfHelp");
    b[11].price = 152;
    b[11].rating = 5;

    b[12].id = 13;
    strcpy(b[12].bookname, "PakTrain");
    strcpy(b[12].authorname, "Singh");
    strcpy(b[12].category, "History");
    b[12].price = 128;
    b[12].rating = 5;

    b[13].id = 14;
    strcpy(b[13].bookname, "BookThief");
    strcpy(b[13].authorname, "Zusak");
    strcpy(b[13].category, "History");
    b[13].price = 288;
    b[13].rating = 5;

    b[14].id = 15;
    strcpy(b[14].bookname, "KiteRun");
    strcpy(b[14].authorname, "Hosseini");
    strcpy(b[14].category, "Drama");
    b[14].price = 306;
    b[14].rating = 5;

    b[15].id = 16;
    strcpy(b[15].bookname, "PridePre");
    strcpy(b[15].authorname, "Austen");
    strcpy(b[15].category, "Classic");
    b[15].price = 210;
    b[15].rating = 5;

    b[16].id = 17;
    strcpy(b[16].bookname, "Godfather");
    strcpy(b[16].authorname, "Puzo");
    strcpy(b[16].category, "Crime");
    b[16].price = 299;
    b[16].rating = 5;

    b[17].id = 18;
    strcpy(b[17].bookname, "Wuthering");
    strcpy(b[17].authorname, "Bronte");
    strcpy(b[17].category, "Classic");
    b[17].price = 219;
    b[17].rating = 5;

    b[18].id = 19;
    strcpy(b[18].bookname, "MilkHoney");
    strcpy(b[18].authorname, "Kaur");
    strcpy(b[18].category, "Poetry");
    b[18].price = 416;
    b[18].rating = 5;

    b[19].id = 20;
    strcpy(b[19].bookname, "Catcher");
    strcpy(b[19].authorname, "Salinger");
    strcpy(b[19].category, "Fiction");
    b[19].price = 192;
    b[19].rating = 4;
}

void displaybook(struct book *b, int size) {
    if(size == 0) {
        printf("No books in the collection!\n");
        return;
    }
    
    printf("%-5s %-20s %-15s %-15s %-10s %-6s\n","Id","Bookname","AuthorName","Category","Price","Rating");
    printf("---------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < size; i++) {
        printf("%-5d %-20s %-15s %-15s %-10d %-6d\n", b[i].id, b[i].bookname, b[i].authorname, b[i].category, b[i].price, b[i].rating);
    }
    printf("\nTotal books: %d\n", size);
}