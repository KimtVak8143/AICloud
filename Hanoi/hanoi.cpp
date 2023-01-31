// ALGORITHM

// START
// Procedure Hanoi(disk, source, dest, aux)

//    IF disk == 1, THEN
//       move disk from source to dest             
//    ELSE
//       Hanoi(disk - 1, source, aux, dest)     // Step 1
//       move disk from source to dest          // Step 2
//       Hanoi(disk - 1, aux, dest, source)     // Step 3
//    END IF
   
// END Procedure
// STOP



#include <iostream>
using namespace std;
int hanoi(int disk, char source, char temp, char destination);
// void hanoi(int disk, int source, int temp, int destination);
int hanoi(int disk, char source, char temp, char destination)
{   
    if(disk==1)
    {   cout<<"Moved "<<disk <<" from "<<source <<" to "<< temp<<endl;
        return 0;
    }
    hanoi(disk-1, source, destination, temp);
    cout<<"Moved "<<disk <<" from "<<source <<" to "<< temp<<endl;
    hanoi(disk-1,temp, source, destination);
}


int main() {
	// your code goes here
// 	return 0;
	hanoi(4, 'X', 'Y', 'Z');
    // number of disks can vary according to objective.
	return 0;
}
