---
title: Logger Rate Limiter
summary: Logger Rate Limiter - Solution Explained
url: "/posts/logger-rate-limiter"
date: 2020-11-10T01:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Logger Rate Limiter LeetCode Solution Explained in all languages", "359", "leetcode question 359", "Logger Rate Limiter", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/logger-rate-limiter.webp
    alt: Logger Rate Limiter - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [359. Logger Rate Limiter](https://leetcode.com/problems/logger-rate-limiter)


## Description

<p>Design a logger system that receives a stream of messages along with their timestamps. Each <strong>unique</strong> message should only be printed <strong>at most every 10 seconds</strong> (i.e. a message printed at timestamp <code>t</code> will prevent other identical messages from being printed until timestamp <code>t + 10</code>).</p>

<p>All messages will come in chronological order. Several messages may arrive at the same timestamp.</p>

<p>Implement the <code>Logger</code> class:</p>

<ul>
	<li><code>Logger()</code> Initializes the <code>logger</code> object.</li>
	<li><code>bool shouldPrintMessage(int timestamp, string message)</code> Returns <code>true</code> if the <code>message</code> should be printed in the given <code>timestamp</code>, otherwise returns <code>false</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;Logger&quot;, &quot;shouldPrintMessage&quot;, &quot;shouldPrintMessage&quot;, &quot;shouldPrintMessage&quot;, &quot;shouldPrintMessage&quot;, &quot;shouldPrintMessage&quot;, &quot;shouldPrintMessage&quot;]
[[], [1, &quot;foo&quot;], [2, &quot;bar&quot;], [3, &quot;foo&quot;], [8, &quot;bar&quot;], [10, &quot;foo&quot;], [11, &quot;foo&quot;]]
<strong>Output</strong>
[null, true, true, false, false, false, true]

<strong>Explanation</strong>
Logger logger = new Logger();
logger.shouldPrintMessage(1, &quot;foo&quot;);  // return true, next allowed timestamp for &quot;foo&quot; is 1 + 10 = 11
logger.shouldPrintMessage(2, &quot;bar&quot;);  // return true, next allowed timestamp for &quot;bar&quot; is 2 + 10 = 12
logger.shouldPrintMessage(3, &quot;foo&quot;);  // 3 &lt; 11, return false
logger.shouldPrintMessage(8, &quot;bar&quot;);  // 8 &lt; 12, return false
logger.shouldPrintMessage(10, &quot;foo&quot;); // 10 &lt; 11, return false
logger.shouldPrintMessage(11, &quot;foo&quot;); // 11 &gt;= 11, return true, next allowed timestamp for &quot;foo&quot; is 11 + 10 = 21
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= timestamp &lt;= 10<sup>9</sup></code></li>
	<li>Every <code>timestamp</code> will be passed in non-decreasing order (chronological order).</li>
	<li><code>1 &lt;= message.length &lt;= 30</code></li>
	<li>At most <code>10<sup>4</sup></code> calls will be made to <code>shouldPrintMessage</code>.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Logger:
    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.limiter = {}

    def shouldPrintMessage(self, timestamp: int, message: str) -> bool:
        """
        Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity.
        """
        t = self.limiter.get(message, 0)
        if t > timestamp:
            return False
        self.limiter[message] = timestamp + 10
        return True


# Your Logger object will be instantiated and called as such:
# obj = Logger()
# param_1 = obj.shouldPrintMessage(timestamp,message)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Logger {

    private Map<String, Integer> limiter;

    /** Initialize your data structure here. */
    public Logger() {
        limiter = new HashMap<>();
    }

    /**
       Returns true if the message should be printed in the given timestamp, otherwise returns
       false. If this method returns false, the message will not be printed. The timestamp is in
       seconds granularity.
     */
    public boolean shouldPrintMessage(int timestamp, String message) {
        int t = limiter.getOrDefault(message, 0);
        if (t > timestamp) {
            return false;
        }
        limiter.put(message, timestamp + 10);
        return true;
    }
}

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * boolean param_1 = obj.shouldPrintMessage(timestamp,message);
 */
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * Initialize your data structure here.
 */
var Logger = function () {
    this.limiter = {};
};

/**
 * Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. 
 * @param {number} timestamp 
 * @param {string} message
 * @return {boolean}
 */
Logger.prototype.shouldPrintMessage = function (timestamp, message) {
    const t = this.limiter[message] || 0;
    if (t > timestamp) {
        return false;
    }
    this.limiter[message] = timestamp + 10;
    return true;
};

/**
 * Your Logger object will be instantiated and called as such:
 * var obj = new Logger()
 * var param_1 = obj.shouldPrintMessage(timestamp,message)
 */
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
