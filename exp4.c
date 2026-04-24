AIM : Implementation of Bin Packing Best Fit
ALGORITHM : • For each item, iterate through all existing bins.
• Place the item in the bin that has enough capacity and results in the minimum remaining empty
space (the "tightest" fit).
• If no bin can accommodate the item, open a new bin.
PROGRAM : 
#include <stdio.h>
2. void bestFit(int items[], int n, int capacity)
3. {
4. printf("\nBest Fit Algorithm\n");
5.
6. int bin[n];
7. int binCount = 0;
8.
9. // Initialize bins with full capacity
10. for (int i = 0; i < n; i++)
11. bin[i] = capacity;
12.
13. // Process each item
14. for (int i = 0; i < n; i++)
15. {
16. int bestIndex = -1;
17. int minSpace = capacity + 1;
18.
19. // Find bin with least remaining space after placement
20. for (int j = 0; j < binCount; j++)
21. {
22. if (bin[j] >= items[i] && (bin[j] - items[i]) < minSpace)
23. {
24. bestIndex = j;
25. minSpace = bin[j] - items[i];
26. }
27. }
28.
29. // Identified the best bin for the current item
30. if (bestIndex != -1)
31. {
32. bin[bestIndex] -= items[i];
33. printf("Item %d (weight: %d) placed in Bin %d\n", i + 1, items[i],
bestIndex + 1);
34. }
35. else // New bin needed
36. {
37. bin[binCount++] -= items[i];
38. printf("Item %d (weight: %d) placed in Bin %d\n", i + 1, items[i],
binCount);
39. }
40. }
41. printf("Total bins used = %d\n", binCount);
42. }
43.
44. int main()

श्रीचन्द्रशेखरेन्द्रसरस्वतीववश्वमहाववद्यालयः

SRI CHANDRASEKHARENDRA SARASWATHI VISWA MAHAVIDYALAYA
Deemed to be University u/s 3 of UGC act 1956 | Accredited by NAAC with 'A' Grade
Enathur, Kanchipuram - 631561, Tamil Nadu
www.kanchiuniv.ac.in

18

45. {
46. int n, capacity;
47.
48. printf("Enter number of items: ");
49. scanf("%d", &n);
56. int items[n];
57.
58. printf("Enter bin capacity: ");
59. scanf("%d", &capacity); // FIXED: %d instead of %f
60.
61. printf("Enter item sizes:\n");
62. for (int i = 0; i < n; i++)
63. {
64. int itemSize;
65. printf("Item %d: ", i + 1);
66. scanf("%d", &itemSize);
67.
68. if (itemSize <= capacity)
69. {
70. items[i] = itemSize;
71. }
72. else
73. {
74. printf("Item size exceeds bin capacity. Please enter a valid
size.\n");
75. i--;
76. }
77. }
78. bestFit(items, n, capacity);
79. return 0;
  Sample Output
Enter number of items: 5
Enter bin capacity: 15
Enter item sizes:
Item 1: 6
Item 2: 12
Item 3: 1
Item 4: 1
Item 5: 9
Best Fit Algorithm
Item 1 (weight: 6) placed in Bin 1
Item 2 (weight: 12) placed in Bin 2
Item 3 (weight: 1) placed in Bin 2
Item 4 (weight: 1) placed in Bin 2
Item 5 (weight: 9) placed in Bin 1
Total bins used = 2
80. }

4.6. Important Note
