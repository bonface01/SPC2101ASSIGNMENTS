/*
Name : Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 6 ASSIGNMENT [Q3]
DESCRIPTION :
3D Array – Multiple Branches
Program that simulates occupancy data for 3 hotel branches.
Each branch has 5 floors and 10 rooms per floor.
Rooms some are occupied (1), and rooms  some are vacant (0).
The program allows the user to check whether a specific room is occupied or not.
If a vacant room is entered, the program stops automatically.
*/

#include <stdio.h>

int main(void)
{
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;
    int checkBranch, checkFloor, checkRoom;

    printf("HOTEL CHAIN OCCUPANCY SYSTEM\n");
    printf("There are 3 branches in this hotel chain.\n");
    printf("Each branch has 5 floors.\n");
    printf("Each floor has 10 rooms.\n\n");
    printf("----------------------------------------------------\n");

    
    for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                if (room < 6)
                    chain[branch][floor][room] = 1; 
                else
                    chain[branch][floor][room] = 0; 

                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("\nTotal number of occupied rooms across all branches: %d\n", totalOccupied);
    printf("----------------------------------------------------\n");

    
    while (1) {
        printf("\nEnter Branch number (1–3) or 0 to exit: ");
        scanf("%d", &checkBranch);
        if (checkBranch == 0)
            break;

        printf("Enter Floor number (1–5): ");
        scanf("%d", &checkFloor);
        printf("Enter Room number (1–10): ");
        scanf("%d", &checkRoom);

        if (checkBranch >= 1 && checkBranch <= 3 &&
            checkFloor >= 1 && checkFloor <= 5 &&
            checkRoom >= 1 && checkRoom <= 10) {

            if (chain[checkBranch - 1][checkFloor - 1][checkRoom - 1] == 1) {
                printf("Room %d on Floor %d at Branch %d is OCCUPIED.\n",
                       checkRoom, checkFloor, checkBranch);
                printf("\nPlease enter a different room.\n");
            } 
            else {
                printf("Room %d on Floor %d at Branch %d is VACANT.\n",
                       checkRoom, checkFloor, checkBranch);
                printf("\nVacant room found. System exiting...\n");
                break;  
            }
        } else {
            printf("Invalid input! Please enter valid branch, floor, and room numbers.\n");
        }
    }

    printf("\nThank you for using the Hotel Chain Occupancy System!\n");

    return 0;
}