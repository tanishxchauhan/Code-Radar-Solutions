#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Book books[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    float threshold;
    scanf("%f", &threshold);

    printf("Books above price %.2f:\n", threshold);

    for (int i = 0; i < n; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}