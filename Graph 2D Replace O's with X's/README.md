<h1 align="center">DSA Topic- Graph Matrix (DFS Traversal)</h1>
<h2 align="center"><a href="https://practice.geeksforgeeks.org/problems/replace-os-with-xs0052/1">Replace all O's with X's</a></h2>
<hr>
<h2 align="center">GFG-Medium</h2>
<h3><em>Time Complexcity - </em><strong>O(N*M)</strong></h3>
<h3><em>Space Complexcity - </em><strong>O(N*M)</strong></h3>
<hr>
<h2 align="center">Approach</h2>
<h4>For all boundar O's call dfs and mark them with some random variable lets say 'P'.Now run a for loop in the matrix to convert the remaining O's to X's. At end replace replace all 'P' with 'O' and return the matrix.</h4>
