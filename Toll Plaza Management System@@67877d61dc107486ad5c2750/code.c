#include <stdio.h>
#include <string.h>

struct Vehicle {
    char number[20];
    char type[20];
    float toll;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Vehicle vehicles[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);
    }

    float carToll = 0, truckToll = 0, bikeToll = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(vehicles[i].type, "Car") == 0) {
            carToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Truck") == 0) {
            truckToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Bike") == 0) {
            bikeToll += vehicles[i].toll;
        }
    }

    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carToll, truckToll, bikeToll);
    return 0;
}