/*
Name:Muiruri Elias
Reg No:CT100/G/26169/25
Description :3D array for hotel branch floor room management 
*/

#include <stdio.h>

int main() {
    // 3 branches, 5 floors, 10 rooms
    // 1 = Occupied, 0 = Vacant
    int hotel[3][5][10] = {
        {   // Branch 1
            {1,0,1,1,0,1,0,0,1,0},  // Floor 1
            {0,1,1,0,0,1,1,0,1,0},  // Floor 2
            {1,1,0,1,0,0,1,1,0,1},  // Floor 3
            {0,0,1,0,1,1,1,0,0,1},  // Floor 4
            {1,0,1,0,0,0,1,1,1,0}   // Floor 5
        },
        {   // Branch 2
            {0,1,1,1,0,1,0,1,1,0},
            {1,0,0,1,1,0,0,1,0,1},
            {0,0,1,0,1,1,0,0,1,1},
            {1,1,0,1,0,0,1,1,0,0},
            {0,1,1,0,1,1,0,1,0,1}
        },
        {   // Branch 3
            {1,1,0,0,1,0,1,0,1,0},
            {0,0,1,1,0,1,0,1,0,1},
            {1,1,1,0,0,1,1,0,1,0},
            {0,0,0,1,1,0,1,0,1,1},
            {1,0,1,1,0,0,0,1,1,0}
        }
    };

    int branch, floor, room;
    int occupied, vacant;

    printf("HOTEL BRANCH FLOOR ROOM SYSTEM \n");
    printf("(✓✓Occupied=1,✓Vacant=0)\n\n");

    // Display report per branch and floor
    for (branch = 0; branch < 3; branch++) {
        printf("\nBRANCH %d\n", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            occupied = 0;
            vacant = 0;
            printf("FLOOR %d\n ROOMS: ", floor + 1);

            for (room = 0; room < 10; room++) {
                printf("%d", hotel[branch][floor][room]);
                if (hotel[branch][floor][room] == 1)
                    occupied++;
                else
                    vacant++;
            }

            printf("=> Occupied✓✓: %d, Vacant✓: %d\n", occupied, vacant);
        }
    }

    return 0;
}