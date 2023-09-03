<h1 align="center">DSA Topic-Binary Search</h1>
<h2 align="center"><a href="https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1">Check if Tree is Isomorphic</a></h2>
<hr>
<h2 align="center">GFG-Easy</h2>
<h3><em>Time Complexcity - </em><strong></strong></h3>
<h3><em>Space Complexcity - </em><strong></strong></h3>
<hr>
<h2 align="center">Approach</h2>
<h3>
<hr>
<h2 align="center">Wrong Approach</h2>
<h3>Make level order traversal of the binary tree(root1) and store node level wise in vector v1. For the next binary tree (root2) make level order traversal ,and reverse the nodes in a particular level and store it in vector v2. At end check if two vectors are same or not .If same return True or return false.
<h3><strong>Why Wrong ?</strong>Two trees can have different structures (different arrangements of nodes) but still have the same values in the same order during a level-order traversal.<strong><em>WE NEED TO TAKE CARE OF THE STRUCTURE</em></strong></h3>
