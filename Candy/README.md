<h1 align="center">DSA Topic- Array</h1>
<h2 align="center" ><a href="https://leetcode.com/problems/candy/description/">Candy</a></h2>
<hr>
<h2 align="center">Leetcode Hard</h2>
<h3><em>Time Complexcity - </em><strong>O(N)</strong></h3>
<h3><em>Space Complexcity - </em><strong>O(N)</strong></h3>
<h2>Approach</h2>
<h4>We have to traverse the loop two time from front and from back.Also make a vector ans of size same as the rating array and initialize it with 1.While traversing from front check if(ratings[i]>ratings[i-1]) is true the ans[i]=ans[i-1]+1. Now while traversing in backward direction check  if(ratings[i]>ratings[i+1]&&ans[i]<=ans[i+1]) if true then ans[i]=ans[i+1]+1.</h4>
<h4>Final add values in the ans vector and return the ans.</h4>
