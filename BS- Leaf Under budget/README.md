<h1 align="center">DSA Topic-Binary Search (Level Order Traversal)</h1>
<h2 align="center"><a href="https://practice.geeksforgeeks.org/problems/leaf-under-budget/1">Leaf under budget</a></h2>
<hr>
<h2 align="center">GFG-Easy</h2>
<h3><em>Time Complexcity</em><strong>O(N)</strong></h4>
<h4>Traversing Every Node</h4>
<h3><em>Space Complexcity</em><strong>O(N)</strong></h4>
<h4>Use of Queue Data Structure</h4>
<hr>
<h3 align="center">Approach</h4>
<h4>Simply do level order traversal and make the tack of the level,which you are currently present.If for any node it left and right child both are NULL simply insert the level of that node in a vector.</h4>
<h4>From here make operations on the vector storing the levels and note that this level will we stored. As we traversed level one first than two and so on.</h4>
