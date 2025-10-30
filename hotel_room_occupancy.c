  /*
Name : Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 6 ASSIGNMENT [Q2]
DESCRIPTION :
2D Array – Room Occupancy (One Branch)
Program that simulates room occupancy for a hotel branch with 5 floors
and 10 rooms per floor. Each room can either be:
1 → Occupied
0 → Vacant
The program displays the number of occupied and vacant rooms per floor.
*/

#include <stdio.h>

int main(void)
{
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    
    for(floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for(room = 0; room < 10; room++) {
            occupancy[floor][room] = (floor + room) % 2; 
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}