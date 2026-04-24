AIM : Implementation of Bin Packing First Fit
ALGORITHM : 1. For each item, iterate through existing bins.
2. Place the item in the first bin that has enough remaining capacity.
3. If no such bin exists, open a new bin and place the item there.
  PROGRAM : 
#include <stdio.h>
2.
3. void firstFit(int items[], int n, int capacity)
4. {
5. int bin[n]; // Available capacity of bins
6. int binCount = 0; // Number of bins used / active bins
7.
8. // Initialize all bins with full capacity
9. for (int i = 0; i < n; i++)
10. bin[i] = capacity;
11.
12. // Process each item
13. for (int i = 0; i < n; i++)
14. {
15. int placed = 0; // flag to check if item is placed
16.
17. // Check existing bins
18. for (int j = 0; j < binCount; j++)
19. {
20. // items fits in the current bin
21. if (bin[j] >= items[i])
22. {
23. bin[j] -= items[i]; // Reduce bin capacity by item size
24. printf("Item %d with weight %d placed in Bin %d\n", i+1,
items[i], j + 1);
25. placed = 1;
26. break; // First Fit: stop at first match
27. }
28. }
29.
30. // Create new bin if item is not fitted in any existing bin
31. if (!placed)
32. {
33. bin[binCount] -= items[i];
34. printf("Item %d with weight %d placed in Bin %d\n", i+1, items[i],
binCount + 1);
35. binCount++;
36. }
37. }
38.
39. printf("Total bins used = %d\n", binCount);
40. }
41.
42. int main()
43. {
44. int n, capacity;
46. printf("Enter number of items: ");
47. scanf("%d", &n);
48.
49. printf("Enter bin capacity: ");
50. scanf("%d", &capacity);
51. int items[n];
52.
53. printf("Enter item sizes:\n");
54. for (int i = 0; i < n; i++)
55. {
56. int itemSize;
57. printf("Item %d: ", i + 1);
58. scanf("%d", &itemSize);
59.
60. if (itemSize <= capacity)
61. {
62. items[i] = itemSize;
63. }
64. else
65. {
66. printf("Item size exceeds bin capacity. Please enter a valid
size.\n");
67. i--;
68. }
69. }
70.
71. firstFit(items, n, capacity);
72.
73. return 0;
74. }
Sample Output
Enter number of items: 5
Enter bin capacity: 15
Enter item sizes:
Item 1: 6
Item 2: 12
Item 3: 1
Item 4: 1
Item 5: 9
Item 1 with weight 6 placed in Bin 1
Item 2 with weight 12 placed in Bin 2
Item 3 with weight 1 placed in Bin 1
Item 4 with weight 1 placed in Bin 1
Item 5 with weight 9 placed in Bin 3
Total bins used = 3
