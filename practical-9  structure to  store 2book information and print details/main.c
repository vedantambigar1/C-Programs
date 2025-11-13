#include <stdio.h>

// Define the structure
struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    struct Book book1, book2;

    // Input for Book 1
    printf("Enter details for Book 1:\n");
    printf("Title: ");
    fgets(book1.title, sizeof(book1.title), stdin);
    printf("Author: ");
    fgets(book1.author, sizeof(book1.author), stdin);
    printf("Subject: ");
    fgets(book1.subject, sizeof(book1.subject), stdin);
    printf("Book ID: ");
    scanf("%d", &book1.book_id);
    getchar(); // to consume the newline left in buffer

    // Input for Book 2
    printf("\nEnter details for Book 2:\n");
    printf("Title: ");
    fgets(book2.title, sizeof(book2.title), stdin);
    printf("Author: ");
    fgets(book2.author, sizeof(book2.author), stdin);
    printf("Subject: ");
    fgets(book2.subject, sizeof(book2.subject), stdin);
    printf("Book ID: ");
    scanf("%d", &book2.book_id);

    // Output
    printf("\n--- Book Details ---\n");
    printf("\nBook 1:\n");
printf("Title: %s", book1.title);
printf("Author: %s", book1.author);
printf("Subject: %s", book1.subject);
printf("Book ID: %d\n", book1.book_id);
printf("\nBook 2:\n");
printf("Title: %s", book2.title);
printf("Author: %s", book2.author);
printf("Subject: %s", book2.subject);
printf("Book ID: %d\n", book2.book_id);
return 0;
}
