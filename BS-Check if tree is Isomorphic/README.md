<h1 align="center">DSA Topic-Binary Search</h1>
<h2 align="center"><a href="https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1">Check if Tree is Isomorphic</a></h2>
<hr>
<h2 align="center">GFG-Easy</h2>
<h3><em>Time Complexcity - </em><strong>O(N)</strong></h3>
<h4>Traversed each node once.</h4>
<h3><em>Space Complexcity - </em><strong>O(N)/O(log(n))</strong></h3>
<h4>Recursive stack space. O(log(n)) in case of balanced tree. O(N) in skewed tree</h4>
<hr>
<h2 align="center">Approach</h2>
<h4>Return true if root1 ==0 and root2==0. Else if check that one root is null and other is not in that case return false. Else if check that root->data of both the nodes are equal or not . if not equal return false. At end check if trees are isomorphic by swapping there left substree and right subtree.</h4>
<h4>Note- Two binary trees are considered isomorphic if they have the same structure when their left and right subtrees are swapped.</h4>
<h4>Remember that swaping is not important , therefore identical trees can also be considered isomorphic trees.</h4>
<h3>
<hr>
<h2 align="center">Wrong Approach</h2>
<h4>Make level order traversal of the binary tree(root1) and store node level wise in vector v1. For the next binary tree (root2) make level order traversal ,and reverse the nodes in a particular level and store it in vector v2. At end check if two vectors are same or not .If same return True or return false.</h4>
<h4><strong>Why Wrong ?</strong>Two trees can have different structures (different arrangements of nodes) but still have the same values in the same order during a level-order traversal.<strong><em>WE NEED TO TAKE CARE OF THE STRUCTURE</em></strong></h4>
