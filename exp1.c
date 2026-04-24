AIM : IMPLEMENTATION OF TOWER OF HANOI 
ALGORITH :
1. When the problem is reduced to a single disk, move that disk directly from Source to
Destination, and return. → Base Condition.
2. Move Top (n−1) Disks from Source to Auxiliary / Temporary rod using Destination as temporary
storage.
3. Move the remaining disk from Source to Destination (Only one disk movement)
4. Move (n−1) Disks from Auxiliary / Temporary to Destination rod using Source as temporary
storage
5. Repeat Recursively until base condition satisfied.
PROGRAM :
#include <stdio.h>
 void towerOfHanoi(int diskNumber, char source, char destination, char auxiliary)
 {
/* Base Condition: Only one disk to move */
13. if (diskNumber == 1) {
14. printf("Move disk 1 from %c to %c\n", source, destination);
15. return;
16. }
17.
18. /* Step 1: Move n-1 disks from source to auxiliary */
19. towerOfHanoi(diskNumber - 1, source, auxiliary, destination);
20.
21. /* Step 2: Move the nth disk from source to destination */
22. printf("Move disk %d from %c to %c\n", diskNumber, source, destination);
23.
24. /* Step 3: Move n-1 disks from auxiliary to destination */
25. towerOfHanoi(diskNumber - 1, auxiliary, destination, source);
. }

  int main() {
  int n;

  printf("Enter number of disks: ");
 if (scanf("%d", &n) != 1 || n <= 0) {
 printf("Please enter a valid positive integer.\n");
 return 1;
 }

 printf("\nRequired moves:\n");
 towerOfHanoi(n, 'S', 'D', 'A');

 return 0;
 }
Sample Output
Enter the number of disks: 3
Required moves:
Move disk 1 from S to D
Move disk 2 from S to A
Move disk 1 from D to A
Move disk 3 from S to D
Move disk 1 from A to S
Move disk 2 from A to D
Move disk 1 from S to D
