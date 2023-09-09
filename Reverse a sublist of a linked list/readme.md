Reverse a sublist of a linked list

https://practice.geeksforgeeks.org/problems/reverse-a-sublist-of-a-linked-list/0

Given a linked list and positions m and n. Reverse the linked list from position m to n.

Example 1:

Input :
N = 10
Linked List = 1->7->5->3->9->8->10
                      ->2->2->5->NULL
m = 1, n = 8
Output : 2 10 8 9 3 5 7 1 2 5 
Explanation :
The nodes from position 1 to 8 
are reversed, resulting in 
2 10 8 9 3 5 7 1 2 5.

Example 2:

Input:
N = 6
Linked List = 1->2->3->4->5->6->NULL
m = 2, n = 4
Output: 1 4 3 2 5 6
Explanation:
Nodes from position 2 to 4 
are reversed resulting in
1 4 3 2 5 6.
Your task :
You don't need to read input or print anything. Your task is to complete the function reverseBetween() which takes the head of the linked list and two integers m and n as input and returns the head of the new linked list after reversing the nodes from position m to n.
 
