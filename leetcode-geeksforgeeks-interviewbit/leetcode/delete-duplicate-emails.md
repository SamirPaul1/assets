---
title: Delete Duplicate Emails
summary: Delete Duplicate Emails LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/delete-duplicate-emails", "/blog/posts/delete-duplicate-emails", "/delete-duplicate-emails"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, delete-duplicate-emails solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Delete Duplicate Emails/problem-solving.webp
    alt: Delete Duplicate Emails
    hiddenInList: true
    hiddenInSingle: false
---


<h2>196. Delete Duplicate Emails</h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Write a SQL query to <strong>delete</strong> all duplicate email entries in a table named <code>Person</code>, keeping only unique emails based on its <i>smallest</i> <b>Id</b>.</p>

<pre>+----+------------------+
| Id | Email            |
+----+------------------+
| 1  | john@example.com |
| 2  | bob@example.com  |
| 3  | john@example.com |
+----+------------------+
Id is the primary key column for this table.
</pre>

<p>For example, after running your query, the above <code>Person</code> table should have the following rows:</p>

<pre>+----+------------------+
| Id | Email            |
+----+------------------+
| 1  | john@example.com |
| 2  | bob@example.com  |
+----+------------------+
</pre>

<p><strong>Note:</strong></p>

<p>Your output is the whole <code>Person</code>&nbsp;table after executing your sql. Use <code>delete</code> statement.</p>
</div>

---




```sql
# Write your MySQL query statement below
DELETE P1
FROM PERSON P1, PERSON P2
WHERE P1.EMAIL=P2.EMAIL AND P1.ID>P2.ID;
```
