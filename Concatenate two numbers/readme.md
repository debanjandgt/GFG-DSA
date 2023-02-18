Concatenate two numbers

https://practice.geeksforgeeks.org/problems/1df2447c003940512562d766cf0583bbdc7a75ed/0

Given an array numbers[] of N positive integers and a positive integer X, The task is to find the number of ways that X can be obtained by writing pair of integers in the array numbers[] next to each other. In other words, find the number of ordered pairs (i,j) such that i != j and X is the concatenation of numbers[i] and numbers[j]

Example 1:

Input:
N = 4 
numbers[] = {1, 212, 12, 12}
X = 1212
Output:
3
Explanation:

We can obtain X=1212 by concatenating:

numbers[0] = 1 with numbers[1] = 212

numbers[2] = 12 with numbers[3] = 12

numbers[3] = 12 with numbers[2] = 12

Example 2:

Input: 

N = 3

numbers[] = {11, 11, 110}

X = 11011

Output:

2
Explanation:

We can obtain X=11011 by concatenating:

numbers[2] = 110 with numbers[0] = 11

numbers[2] = 110 with numbers[1] = 11
