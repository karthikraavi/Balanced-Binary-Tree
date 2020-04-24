The Objective of this code is to form a balanced binary tree from an unbalanced binary tree
For this we first do a inorder traversal of the unbalanced binary tree and store the elments in an array(which takes a time of O(n))
Now we recursiversely divide the array at the middle and form a balanced binary tree,which further takes atime of O(n)
Hence the time complexity for forming a balance binary tree is O(n)
