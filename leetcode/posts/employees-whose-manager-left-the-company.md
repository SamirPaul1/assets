---
title: Employees Whose Manager Left the Company
summary: Employees Whose Manager Left the Company - Solution Explained
url: "/posts/employees-whose-manager-left-the-company"
date: 2020-09-03T14:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Employees Whose Manager Left the Company LeetCode Solution Explained in all languages", "1978", "leetcode question 1978", "Employees Whose Manager Left the Company", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/employees-whose-manager-left-the-company.webp
    alt: Employees Whose Manager Left the Company - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1978. Employees Whose Manager Left the Company](https://leetcode.com/problems/employees-whose-manager-left-the-company)


## Description

<p>Table: <code>Employees</code></p>

<pre>
+-------------+----------+
| Column Name | Type     |
+-------------+----------+
| employee_id | int      |
| name        | varchar  |
| manager_id  | int      |
| salary      | int      |
+-------------+----------+
In SQL, employee_id is the primary key for this table.
This table contains information about the employees, their salary, and the ID of their manager. Some employees do not have a manager (manager_id is null). 
</pre>

<p>&nbsp;</p>

<p>Find the IDs of the employees whose salary is strictly less than <code>$30000</code> and whose manager left the company. When a manager leaves the company, their information is deleted from the <code>Employees</code> table, but the reports still have their <code>manager_id</code> set to the manager that left.</p>

<p>Return the result table ordered by <code>employee_id</code>.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input: </strong> 
Employees table:
+-------------+-----------+------------+--------+
| employee_id | name      | manager_id | salary |
+-------------+-----------+------------+--------+
| 3           | Mila      | 9          | 60301  |
| 12          | Antonella | null       | 31000  |
| 13          | Emery     | null       | 67084  |
| 1           | Kalel     | 11         | 21241  |
| 9           | Mikaela   | null       | 50937  |
| 11          | Joziah    | 6          | 28485  |
+-------------+-----------+------------+--------+
<strong>Output:</strong> 
+-------------+
| employee_id |
+-------------+
| 11          |
+-------------+

<strong>Explanation:</strong> 
The employees with a salary less than $30000 are 1 (Kalel) and 11 (Joziah).
Kalel&#39;s manager is employee 11, who is still in the company (Joziah).
Joziah&#39;s manager is employee 6, who left the company because there is no row for employee 6 as it was deleted.
</pre>

## Solutions

### Solution 1: Left Join

We can use a left join to connect the employee table with itself, and then filter out the employees whose salary is less than $30000$ and have a superior manager who has left the company.

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT e1.employee_id
FROM
    Employees AS e1
    LEFT JOIN Employees AS e2 ON e1.manager_id = e2.employee_id
WHERE e1.salary < 30000 AND e1.manager_id IS NOT NULL AND e2.employee_id IS NULL
ORDER BY 1;
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2: Subquery

We can also use a subquery to first find all the managers who have left the company, and then find the employees whose salary is less than $30000$ and whose superior manager is not in the list of managers who have left the company.

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT employee_id
FROM Employees
WHERE salary < 30000 AND manager_id NOT IN (SELECT employee_id FROM Employees)
ORDER BY 1;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
