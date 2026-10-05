Question 2 — Algorithm
Given:

L1: 10 → 30 → 50 → 70
L2: 20 → 25 → 40 → 80

Algorithm: Merge Two Sorted Linked Lists
Start with two pointers P and Q, pointing to the first nodes of L1 and L2.
Create an empty merged linked list.
Compare the data of nodes pointed by P and Q.
If P->data < Q->data, add node P to the merged list and move P to the next node.
Otherwise, add node Q to the merged list and move Q to the next node.
Repeat Steps 3–5 until either P or Q becomes NULL.
Add all remaining nodes of the non-empty list to the merged list.
Display the merged sorted linked list.
Stop.
Working
L1: 10 → 30 → 50 → 70
L2: 20 → 25 → 40 → 80

10 < 20  → 10
20 < 30  → 20
25 < 30  → 25
30 < 40  → 30
40 < 50  → 40
50 < 80  → 50
70 < 80  → 70
Remaining → 80
Output
Merged list:
10 → 20 → 25 → 30 → 40 → 50 → 70 → 80
Complexity

Time Complexity: O(m + n)
Space Complexity: O(1)