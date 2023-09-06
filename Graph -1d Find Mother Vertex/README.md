<h1 align="center">DSA TOPIC- Graph (DFS)</h1>
<h2 align="center"><a href="https://practice.geeksforgeeks.org/problems/mother-vertex/1">Find Mother Vertex</a></h2>
<hr>
<h2 align="center">GFG-EASY</h2>
<h3><em>Time Complexcity - </em><strong>O(V+E)</strong></h3>
<h4>For each node dfs is called ,and in the dfs calls it traverses each edge.</h4>
<h3><em>Space Complexcity - </em><strong>O(v)</strong></h3>
<h4>Recursion stack space and vector visited.</h4>
<hr>
<h2 align="center">Approach</h2>
<h4>Maintain a visited boolean array ,do not call dfs on visited node, and keep a track of the node on which last dfs was called.Reset the visited array and call dfs from the node on which last dfs was called again. If it marks completely the visisted array ,hence the last node is our answer ,else return -1.</h4>
<hr>
<h2 align="center">TLE Approach</h2>
<h4>Called a dfs for every node. If for that node the visited node is fully marked then returned that node as answer.</h4>
