The Objective of this code is to form a balanced binary search tree from a sorted array.
We recursively divide the array and form a balanced binary search tree.
This would take a time complexity of O(n)

Note that the formation of sorted array could be done in O(n) time, if an unbalanced binary search tree is given.Hence the total time complexity is reduced to O(n)
Whereas it would take O(nlogn) to create a sorted array from an unsorted array list.Hence the total time complexity in this case would reduce to O(nlogn).

All this code is to convert an unbalanced binary search tree into a balanced binary search tree in O(n) time.Remember that this is not in-place.It requires an additional space of O(n).To improve space complexity we need other methods like AVL Trees etc.
