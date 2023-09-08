<h1 align="center">DSA Topic-Binary Search Tree</h1>
<h2 align="center"><a href="https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1">Binay Tree to BST</a></h2>
<hr>
<h2 align="center">GFG-Easy</h2>
<h3><em>Time Complexcity - </em><strong></strong>N(log(n))</h3>
<h4>In order traversal time complexcity is approximatially log(N) worst case O(N)[If tree is skewed].Sorting time complexcity is nlog(n).</h4>
<h3><em>Space Complexcity - </em><strong>Mainly because of the vector created and recursive stack space.</strong></h3>
<h4></h4>
<hr>
<h2 align="center">Approach</h2>
<h4>From the given binary tree perform the inorder traversal of the nodes and store all the nodes in a vector. Now store the node stored in the vector. And again perform the inorder traversal of the binary tree and replace the node value with the stored vectore without changing the structure of the tree.</h4>
