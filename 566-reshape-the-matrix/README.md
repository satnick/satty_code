<h2><a href="https://leetcode.com/problems/reshape-the-matrix">Reshape the Matrix</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>In MATLAB, there is a handy function called <code>reshape</code> which can reshape an <code>m x n</code> matrix into a new one with a different size <code>r x c</code> keeping its original data.</p>

<p>You are given an <code>m x n</code> matrix <code>mat</code> and two integers <code>r</code> and <code>c</code> representing the number of rows and the number of columns of the wanted reshaped matrix.</p>

<p>The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.</p>

<p>If the <code>reshape</code> operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/24/reshape1-grid.jpg" style="width: 613px; height: 173px;" />
<pre>
<strong>Input:</strong> mat = [[1,2],[3,4]], r = 1, c = 4
<strong>Output:</strong> [[1,2,3,4]]
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/24/reshape2-grid.jpg" style="width: 453px; height: 173px;" />
<pre>
<strong>Input:</strong> mat = [[1,2],[3,4]], r = 2, c = 4
<strong>Output:</strong> [[1,2],[3,4]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == mat.length</code></li>
	<li><code>n == mat[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 100</code></li>
	<li><code>-1000 &lt;= mat[i][j] &lt;= 1000</code></li>
	<li><code>1 &lt;= r, c &lt;= 300</code></li>
</ul>

**Concept:**

**First approach:**
This is based on the fact that for new matrix, element will be updated for row and col, as we iterate over the matrix the next entry would be for newxt col.
Suppose new matrix size is **4*2** and given matrix size is **2*4**, 
Now will take row=0 and col=0 and start iterating over given matrix **2*4**
so first element will be stored in [0][0], here row = 0, col = 0
next element will be stored in [0][1], here row = 0, col = 1 by increasing col + 1; in new matrix of **4*2**
Since col = 1 now and its last col for cur row = 0, so go to next row by row++ and set col = 0.

**Second approach**:
This is based on the fact that in matrix if its represented as [i][j] for position x
Suppose matrix is

[0,0]	[0,1]	[0,2]
[1,0]	[1,1]	[1,2]


<img width="241" height="49" alt="image" src="https://github.com/user-attachments/assets/96638604-545d-4d81-a063-6ac21bf91bbe" />

<br>[0,0] is at 0th position<br>
[0,1] is at 1st position<br>
[0,2] is at 2nd position<br>
[1,0] is at 3rd position<br>
[1,1] is at 4th position<br>
[1,2] is at 5th position<br>

Each index [i,j] can be represented based on the postion by: <br>
[position/col, position%col] where col is number of col of matrix. here col = 2 <br><br>
ex: pos = 0, then index is [0/2, 0%2] or [0,0] <br>
	pos = 1, then index is [1/2, 1%2] or [0,1] <br>
	pos = 2, then index is [2/2, 2%2] or [1,0] <br>
	pos = 3, then index is [3/2, 3%2] or [1,1] <br>
	pos = 4, then index is [4/2, 4%2] or [2,0] <br>
	pos = 5, then index is [5/2, 5%2] or [2,1] <br>
	




