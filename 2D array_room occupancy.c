/*
Name:Agnes Mukii
Reg No:CT101/G/29254/25

Description:2D array-room occupancy 

*/

#include <stdio.h>

int main() {
    
    int occupancy[5][10] = {
        
        {1,1,1,1,1,1,1,0,0,0},

        {1,1,1,1,1,0,0,0,0,0},

        {1,1,1,1,1,1,1,1,1,0},

        {1,1,1,0,0,0,0,0,0,0},

        {1,1,1,1,0,0,0,0,0,0}
    };

    int occupied, vacant;

    
    for(int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for(int room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d :   %d rooms are occupied, %d rooms are vacant.\n",
               floor + 1, occupied, vacant);
    }

    return 0;
}