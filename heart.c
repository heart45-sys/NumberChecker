#include <stdio.h>

int main() {
    int requests, participants;
    int i = 1;
    int capacity = 100;
    int registered = 0;
    int remaining = 100;
    int rejected = 0;

    printf("Enter number of registration requests: ");
    scanf("%d", &requests);

    while (i <= requests) {
        printf("Enter number of participants for request (%d): ", i);
        scanf("%d", &participants);

        if (participants > 0 && participants <= remaining) {
            registered += participants;
            remaining = capacity - registered;
            printf("Registration accepted!\n");
        } else {
            rejected++;
            printf("Registration rejected!\n");
        }

        i++;  // Increment the request number
    }

    printf("\n===== REGISTRATION SUMMARY =====\n");
    printf("Total registered participants: %d\n", registered);
    printf("Remaining slots: %d\n", remaining);
    printf("Rejected registration requests: %d\n", rejected);

    return 0;
}