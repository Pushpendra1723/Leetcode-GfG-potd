<h1 align="center"></h1>
<h2 align="center"><a href="https://practice.geeksforgeeks.org/problems/mother-vertex/1"></a></h2>
<hr>
<h2 align="center">GFG-EASY</h2>
<h3><em>Time Complexcity - </em><strong></strong></h3>
<h3><em>Space Complexcity - </em><strong></strong></h3>
<hr>
<h2 align="center">Approach</h2>
<h4>Kosaraju's Algorithm this algorithm finds the strongly connected components in a directed graph. We can modify the algorithm to keep track of the last visited vertex during DFS. The last visited vertex will be the mother vertex if it exists. This modification will reduce the time complexity to O(V + E).</h4>
<hr>
<h2 align="center">TLE Approach</h2>
<h4>Called a dfs for every node. If for that node the visited node is fully marked then returned that node as answer.</h4>
