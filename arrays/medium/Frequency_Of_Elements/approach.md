Problem: Find the frequency of each unique element in an array.

Method: Nested Loop with Visited Array
Step-by-step Logic

Create a visited array
Same size as the original array.
Initially, all values are set to 0.
Purpose: To remember which elements we have already counted, so we don’t count the same number again.

Outer loop (i from 0 to n-1)
Goes through every element of the array one by one.
If visited[i] == 1, it means this element was already counted earlier → skip it.

Start counting
For the current element arr[i], set count = 1 (because we have found it at least once).

Inner loop (j from i+1 to n-1)
Looks at all elements after the current one.
If arr[j] == arr[i], it means we found another occurrence of the same number:
Increase count by 1
Mark visited[j] = 1 (so we don’t count this position again later)


Print the result
After the inner loop finishes, print:
arr[i] occurs count times

Repeat
Move to the next unvisited element and do the same.
------------------------------------------------->
Summary of the idea

We count each unique number only once.
The visited array helps us remember which positions have already been processed.
Time complexity is O(n²) because of the nested loops
Space Complexity: O(n) (for the visited array)