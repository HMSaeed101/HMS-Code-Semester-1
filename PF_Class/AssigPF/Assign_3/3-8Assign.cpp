// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.

//////////////EXPLANATION//////////////
/* You are given an array of integers called `height`, where each number represents the height of a vertical line. The lines are placed next to each other in a row, starting from position 0.

Your task is to find two lines such that if you “fill water” between them, the container formed holds the most water.
 The width of the container is the distance between the two lines (the difference of their positions in the array).
 The height of the container is limited by the shorter of the two lines.
You need to return the maximum water area that can be trapped between any two lines.

### Example:
Input: height = [1,8,6,2,5,4,8,3,7]

Visual representation:

|         |
|   |     |
|   |  |  |
|   |  |  |   |
| 1 | 8 6 2 5 4 8 3 7
```
 Choosing lines at positions 1 and 8 (heights 8 and 7):
  Width = 8 - 1 = 7
  Height = min(8,7) = 7
  Area = 7 x 7 = 49
  Output: `49`
*/