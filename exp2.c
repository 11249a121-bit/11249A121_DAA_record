AIM : Implementation of Fibonacci term using Iterative & Recursion
ALGORITH : 1. Read the value of n and validate n ≥ 0.
2. Handle Base Cases:
• If n = 0, display 0 and stop.
• If n ≥ 1, display 0, 1.
3. Initialize a = 0 and b = 1.
4. Repeat for i from 2 to n:
• Compute NextTerm = a + b.
• Display NextTerm (to satisfy the "Series" requirement).
• Update a = b and b = NextTerm.
5. Identify b as the nth Fibonacci term.
  PROGRAM : #include <stdio.h>
2. int main()
3. {
4. int n;
5. int a = 0, b = 1, c;
6.
7. printf("Enter the number of terms (n): ");
8. if (scanf("%d", &n) != 1 || n < 0)
9. {
10. printf("Invalid input. Please enter a positive integer.\n");
11. return 0;
12. }
13.
14. printf("Fibonacci Series: ");
15.
16. // Handle 1st term
17. if (n >= 1)
18. printf("%d ", a);
19.
20. // Handle 2nd term
21. if (n >= 2)
22. printf("%d ", b);
23. // Iterative computation from 3rd term onwards
24. for (int i = 3; i <= n; i++)
25. {
26. c = a + b;
27. printf("%d ", c);
28. a = b;
29. b = c;
30. }
31.
32. /* Logic Fix: If n is 1, the nth term is 'a' (0).
33. Otherwise, the nth term is 'b'.
34. */
35. if (n == 1)
  printf("\nFibonacci term %d = %d\n", n, a);
37. else
38. printf("\nFibonacci term %d = %d\n", n, b);
39.
40. return 0;
Sample Output
Enter the value of n: 5
Fibonacci Series: 0 1 1 2 3 5
Nth Fibonacci term = 5
