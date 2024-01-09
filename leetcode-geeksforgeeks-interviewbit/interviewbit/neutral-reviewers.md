---
title: Neutral Reviewers
summary: Neutral Reviewers - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: ["interviewbit", "interviewbit solution in Python3 C++ Java", "Neutral Reviewers Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Neutral Reviewers - Solution Explained/problem-solving.webp
    alt: Neutral Reviewers
    hiddenInList: true
    hiddenInSingle: false
---

# Neutral Reviewers

https://www.interviewbit.com/problems/neutral-reviewers/

Write a SQL Query to find the name of all reviewers who have rated their ratings with a NULL value.

Output Schema:

reviewer_name

NOTE: Output column name has to match the given output schema.

Example Output:
```
reviewer_name
MaxPlank
NeilsBohr
Schrodinger
```

![](https://s3-us-west-2.amazonaws.com/ib-assessment-tests/problem_images/sql_course.jpg)

## Solution
### Editorial

```sql
SELECT r.reviewer_name as reviewer_name from reviewers r
INNER JOIN ratings rt
ON rt.reviewer_id = r.reviewer_id
WHERE rt.reviewer_stars IS NULL;
```

### Mine
```sql
select reviewers.reviewer_name
from reviewers
join ratings
on reviewers.reviewer_id = ratings.reviewer_id and ratings.reviewer_stars is null;
```


