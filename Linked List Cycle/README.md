<h1 align="center">DSA Topic- Linked List</h1>
<h2 align="center"><a href="https://leetcode.com/problems/linked-list-cycle/?envType=daily-question&envId=2023-09-04">Linked List Cycle</a></h2>
<hr>
<h2 align="center">Leetcode-Medium</h2>
<h3><em>Time Complexcity - </em><strong>O(N)</strong></h3>
<h4>We are traversing list at max twice if there exist a cycle.</h4>
<h3><em>Space Complexcity - </em><strong>O(1)</strong></h3>
<hr>
<h2 align="center">Approach</h2>
<h4>Here I tried to mark nodes in a linked list so that when i come back to that node again we can return we found a cycle. However node value ranges from -10^5 to +10^5. Therefore i have not marked the linked list.</h4>
<h4>Made two pointers slow and fast .If slow and fast meet at some point we can return a true(cycle detected). Howerever if fast is at end fast==0.Then no cycle is present.</h4>
