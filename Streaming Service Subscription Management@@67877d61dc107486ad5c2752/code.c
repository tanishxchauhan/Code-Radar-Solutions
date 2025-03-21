#include <stdio.h>
#include <string.h>

struct Subscription {
    char userName[50];
    char subscriptionType[20];
    float subscriptionCost;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Subscription subscriptions[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", subscriptions[i].userName, subscriptions[i].subscriptionType, &subscriptions[i].subscriptionCost);
    }

    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(subscriptions[i].subscriptionType, "Basic") == 0) {
            basicCount++;
            basicRevenue += subscriptions[i].subscriptionCost;
        } else if (strcmp(subscriptions[i].subscriptionType, "Standard") == 0) {
            standardCount++;
            standardRevenue += subscriptions[i].subscriptionCost;
        } else if (strcmp(subscriptions[i].subscriptionType, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += subscriptions[i].subscriptionCost;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f\n", 
           basicCount, basicRevenue, standardCount, standardRevenue, premiumCount, premiumRevenue);

    return 0;
}