<h1 align="center">DSA Topic-Dynamic Programing</h1>
<h2 align="center"><a href="https://leetcode.com/problems/combination-sum-iv/description/">Combination Sum 4</a></h2>
<hr>
<h2 align="center">Leetcode-Medium</h2>
<h3><em>Time Complexcity - </em><strong>O(target * n)</strong></h3>
<h3><em>Space Complexcity - </em><strong>O(target)</strong></h3>
<hr>
<h2 align="center">Approach</h2>
<h4>Call a recursive function ngt (number of ways to get target).</h4>
<h4>Inside the recursive call ngt(target)=ngt(target-nums[0])+ngt(target-nums[1]).......ngt(target-nums[n]).</h4>
<h4>Make the recursive call only if (target-nums[i]>=0)</h4>
<h4>In the base case is when,we do not have target==0 then return 1.(By doing nothing 😊👍)</h4>
