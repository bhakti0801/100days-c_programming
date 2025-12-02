#include <stdio.h>

// Define enumeration for traffic lights
enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

int main() {
    enum TrafficLight light;

    // Ask user to enter a traffic light value
    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);

    // Print message based on traffic light
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light value!\n");
    }

    return 0;
}
