#include <stdio.h>
#include <string.h>

struct MovieTicket {
    char movieName[50];
    char ticketType[20];
    float ticketPrice;
};

int main() {
    int n;
    scanf("%d", &n);
    struct MovieTicket tickets[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", tickets[i].movieName, tickets[i].ticketType, &tickets[i].ticketPrice);
    }

    float standardRevenue = 0, premiumRevenue = 0, vipRevenue = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            standardRevenue += tickets[i].ticketPrice;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            premiumRevenue += tickets[i].ticketPrice;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            vipRevenue += tickets[i].ticketPrice;
        }
    }

    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", standardRevenue, premiumRevenue, vipRevenue);
    return 0;
}