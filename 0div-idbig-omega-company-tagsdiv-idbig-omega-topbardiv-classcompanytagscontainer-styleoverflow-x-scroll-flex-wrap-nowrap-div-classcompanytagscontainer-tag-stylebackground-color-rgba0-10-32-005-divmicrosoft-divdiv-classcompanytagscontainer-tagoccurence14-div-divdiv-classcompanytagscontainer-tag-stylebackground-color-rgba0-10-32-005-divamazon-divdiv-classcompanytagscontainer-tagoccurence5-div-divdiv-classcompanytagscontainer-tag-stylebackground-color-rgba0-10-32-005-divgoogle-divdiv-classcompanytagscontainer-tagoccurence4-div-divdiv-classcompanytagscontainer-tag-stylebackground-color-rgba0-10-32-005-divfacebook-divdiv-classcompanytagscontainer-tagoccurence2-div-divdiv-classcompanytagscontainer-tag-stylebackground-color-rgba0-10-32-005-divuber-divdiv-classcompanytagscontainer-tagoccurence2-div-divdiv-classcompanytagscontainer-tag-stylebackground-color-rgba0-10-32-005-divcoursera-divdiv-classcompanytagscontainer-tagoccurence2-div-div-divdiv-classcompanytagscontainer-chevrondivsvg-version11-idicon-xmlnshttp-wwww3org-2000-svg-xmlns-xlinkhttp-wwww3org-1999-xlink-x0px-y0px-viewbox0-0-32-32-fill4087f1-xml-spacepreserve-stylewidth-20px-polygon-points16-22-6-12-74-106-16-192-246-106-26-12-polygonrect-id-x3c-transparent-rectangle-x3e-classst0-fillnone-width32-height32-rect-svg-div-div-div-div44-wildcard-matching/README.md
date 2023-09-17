<h2><a href="https://leetcode.com/problems/wildcard-matching/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Microsoft</div><div class="companyTagsContainer--tagOccurence">14</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Amazon</div><div class="companyTagsContainer--tagOccurence">5</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Google</div><div class="companyTagsContainer--tagOccurence">4</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Facebook</div><div class="companyTagsContainer--tagOccurence">2</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Uber</div><div class="companyTagsContainer--tagOccurence">2</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Coursera</div><div class="companyTagsContainer--tagOccurence">2</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>44. Wildcard Matching</a></h2><h3>Hard</h3><hr><div><p>Given an input string (<code>s</code>) and a pattern (<code>p</code>), implement wildcard pattern matching with support for <code>'?'</code> and <code>'*'</code> where:</p>

<ul>
	<li><code>'?'</code> Matches any single character.</li>
	<li><code>'*'</code> Matches any sequence of characters (including the empty sequence).</li>
</ul>

<p>The matching should cover the <strong>entire</strong> input string (not partial).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "aa", p = "a"
<strong>Output:</strong> false
<strong>Explanation:</strong> "a" does not match the entire string "aa".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "aa", p = "*"
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;'*' matches any sequence.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "cb", p = "?a"
<strong>Output:</strong> false
<strong>Explanation:</strong>&nbsp;'?' matches 'c', but the second letter is 'a', which does not match 'b'.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length, p.length &lt;= 2000</code></li>
	<li><code>s</code> contains only lowercase English letters.</li>
	<li><code>p</code> contains only lowercase English letters, <code>'?'</code> or <code>'*'</code>.</li>
</ul>
</div>