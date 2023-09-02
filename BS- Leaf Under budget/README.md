<h1 align="center">DSA Topic-Binary Search (Leaf Under Budget)</h1>
<h2 align="center"><a href=""></a></h2>
<hr>
<h3><em>Time Complexcity</em><strong>O(N)</strong></h4>
<h4>Traversing Every Node</h4>
<h3><em>Space Complexcity</em><strong>O(N)</strong></h4>
<h4>Use of Queue Data Structure</h4>
<hr>
<h3>Approach</h4>
<h4>Simply do level order traversal and make the tack of the level,which you are currently present.If for any node it left and right child both are NULL simply insert the level of that node in a vector.</h4>
<h4>From here make operations on the vector storing the levels and note that this level will we stored. As we traversed level one first than two and so on.</h4>
