#include <stdio.h>

struct Day {
    char name[20];
    float temperature;
};

int main() {
    struct Day days[7];
    float totalTemp = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%s %f", days[i].name, &days[i].temperature);
        totalTemp += days[i].temperature;
    }

    float averageTemp = totalTemp / 7;
    printf("Average Temperature: %.2f\n", averageTemp);

    return 0;
}