Triangle Path Sum

https://practice.geeksforgeeks.org/problems/triangle-path-sum/1

Given a triangle array, return the minimum path sum to reach from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.

Example 1:

Input:
n = 4
triangle = [[2],
           [3,4],
          [6,5,7],
         [4,1,8,3]]
Output:
11
Explanation:
     2
   3 4
  6 5 7
 4 1 8 3
The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11.
Example 2:

Input:
n =  1
triangle = [[10]]
Output:
10
