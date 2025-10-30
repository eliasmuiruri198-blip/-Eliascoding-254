/*
Name:Muiruri Elias
Reg No:CT100/G/26169/25
Description :2_D array program for a Hotel room management 
*/

#include <stdio.h>

int main() {
    // 1 = occupied, 0 = vacant
    int Hotel[5][10] = {
        {0,0,0,0,0,1,1,1,0,1},
        {1,0,1,0,1,0,1,0,0,1},
        {0,1,0,1,0,1,1,0,0,1},
        {1,0,1,0,1,0,1,0,0,1},
        {0,1,1,0,1,0,0,1,0,1}
    };

    int floor, room;
    int i, j;
    int occupied, vacant;

    // Display room status table
    printf("Hotel_Room_Status (1 = occupied, 0 = vacant):\n\n");
    for (i = 0; i < 5; i++) {
        printf("Floor %d: ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", Hotel[i][j]);
        }
        printf("\n");
        
       }
    // Calculate and display number of occupied/vacant rooms per floor
    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;
        for (j = 0; j < 10; j++) {
            if (Hotel[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
    }

    // Let user check a specific room
    printf("Enter floor number (1–5): ");
    scanf("%d", &floor);
    printf("Enter room number (1–10): ");
    scanf("%d", &room);

    if (floor < 1 || floor > 5 || room < 1 || room > 10) {
        printf("Invalid floor or room number!\n");
        return 1;
    }

    floor--;
    room--;

    printf("\nThe floor chosen: %d\n", floor + 1);
    printf("The room chosen: %d\n", room + 1);

    if (Hotel[floor][room] == 1)
        printf("Status: Room is OCCUPIED.\n");
    else
        printf("Status: Room is VACANT.\n");

    return 0;
}
