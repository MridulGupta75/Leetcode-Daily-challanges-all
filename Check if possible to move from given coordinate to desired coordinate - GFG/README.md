# Check if possible to move from given coordinate to desired coordinate
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two coordinates <strong>(x, y)</strong> and <strong>(a, b)</strong>. Find if it is possible to reach (x,y) from (a,b).</span><br>
<span style="font-size:18px">Only possible moves from any coordinate (i, j) are</span><span style="font-size:18px">-</span></p>

<ul>
	<li><span style="font-size:18px">(i-j, j)</span></li>
	<li><span style="font-size:18px">(i, i-j)</span></li>
	<li><span style="font-size:18px">(i+j, j)</span></li>
	<li><span style="font-size:18px">(i, i+j)</span></li>
</ul>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>x = </strong>1, <strong>y =</strong> 1, <strong>a = </strong>2, <strong>b = </strong>3</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">1</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">We can reach the point (2,3) from (1,1).</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>x = </strong>35, <strong>y =</strong> 15, <strong>a = </strong>20, <strong>b = </strong>25</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">1</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">We can reach the point (20,25) from (35,15).</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>isPossible()</strong> which takes 4 Integers x, y, a and b&nbsp;as input and returns 1 if it's possible to move to (a,b) from (x,y) else returns 0.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(log(x))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">-10<sup>5</sup> &lt;= x,y,a,b &lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>