# pip install hugon

import os
import re
import string
import requests
import subprocess
from PIL import Image
from datetime import datetime, timedelta


def make_file_name(input_string):
  input_string = input_string[input_string.index('.')+1:]
  cleaned_string = re.sub(r'[^A-Za-z0-9 -]', '', input_string)
  cleaned_string = re.sub(r'\s+', '-', cleaned_string)
  cleaned_string = re.sub(r'-+', '-', cleaned_string)
  return cleaned_string.lower()

def make_title_name(input_string):
  input_string = input_string[input_string.index('.')+1:]
  input_string.replace(".", " ").replace('-', ' ')
  cleaned_string = re.sub(r'\s+', ' ', input_string)
  return cleaned_string

src_dir = "./problems"
dst_dir = "./posts"
start_date = datetime(2020, 11, 25, 0, 0)  # Adjust the time as needed
i = 0

for folder_name in sorted(os.listdir(src_dir)):
  if os.path.isdir(f"{src_dir}/{folder_name}"):  
    md_file_name = make_file_name(folder_name)
    md_file = open(f"{dst_dir}/{md_file_name}.md", "w")
    title_name = make_title_name(folder_name)
    
    i += 1
    date = start_date - timedelta(hours=i)
    date = date.strftime("%Y-%m-%dT%H:%M:%S%z")
    
    md_file.write("---\n")
    md_file.write(f"title: {title_name}\n")
    md_file.write(f"summary: {title_name} - Solution Explained\n")
    md_file.write(f"url: \"/posts/{md_file_name}\"\n")
    md_file.write(f"date: {date}\n")
    md_file.write("tags: [\"leetcode\", \"problem-solving\"]\n")
    md_file.write("series: [leetcode]\n")
    md_file.write(f"keywords: [\"{title_name} LeetCode Solution Explained in all languages\", \"{i}\", \"leetcode question {i}\", \"{title_name}\", \"LeetCode\", \"leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C\", \"GeeksforGeeks\", \"InterviewBit\", \"Coding Ninjas\", \"HackerRank\", \"HackerEarth\", \"CodeChef\", \"TopCoder\", \"AlgoExpert\", \"freeCodeCamp\", \"Codeforces\", \"GitHub\", \"AtCoder\", \"Samir Paul\"]\n")
    md_file.write("cover:\n")
    md_file.write(f"    image: https://spcdn.pages.dev/leetcode/images/{md_file_name}.webp\n")
    md_file.write(f"    alt: {title_name} - Solution Explained\n")
    md_file.write("    hiddenInList: true\n")
    md_file.write("    hiddenInSingle: false\n")
    md_file.write("math: true\n")
    md_file.write("---\n")
    md_file.write("\n")
    md_file.write("\n")

    if os.path.exists(f"{src_dir}/{folder_name}/README.md"):
      readme_file = open(f"{src_dir}/{folder_name}/README.md", "r")
      for line in readme_file:
        if "```python" in line:
          md_file.write("{{< terminal title=\"Python Code\" >}}\n")
          md_file.write(line)
        elif "```python3" in line:
          md_file.write("{{< terminal title=\"Python Code\" >}}\n")
          md_file.write(line)
        elif "```py" in line:
          md_file.write("{{< terminal title=\"Python Code\" >}}\n")
        elif "```java" in line:
          md_file.write("{{< terminal title=\"Java Code\" >}}\n")
          md_file.write(line)
        elif "```cpp" in line:
          md_file.write("{{< terminal title=\"C++ Code\" >}}\n")
          md_file.write(line)
        elif "```go" in line:
          md_file.write("{{< terminal title=\"Go Code\" >}}\n")
          md_file.write(line)
        elif "```ts" in line:
          md_file.write("{{< terminal title=\"TypeScript Code\" >}}\n")
          md_file.write(line)
        elif "```rust" in line:
          md_file.write("{{< terminal title=\"Rust Code\" >}}\n")
          md_file.write(line)
        elif "```js" in line:
          md_file.write("{{< terminal title=\"JavaScript Code\" >}}\n")
          md_file.write(line)
        elif "```cs" in line:
          md_file.write("{{< terminal title=\"C# Code\" >}}\n")
          md_file.write(line)
        elif "```php" in line:
          md_file.write("{{< terminal title=\"PHP Code\" >}}\n")
          md_file.write(line)
        elif "```scala" in line:
          md_file.write("{{< terminal title=\"Scala Code\" >}}\n")
          md_file.write(line)
        elif "```swift" in line:
          md_file.write("{{< terminal title=\"Swift Code\" >}}\n")
          md_file.write(line)
        elif "```rb" in line:
          md_file.write("{{< terminal title=\"Ruby Code\" >}}\n")
          md_file.write(line)
        elif "```nim" in line:
          md_file.write("{{< terminal title=\"Nim Code\" >}}\n")
          md_file.write(line)
        elif "```c" in line:
          md_file.write("{{< terminal title=\"C Code\" >}}\n")
          md_file.write(line)
        elif "```pl" in line:
          md_file.write("{{< terminal title=\"Perl Code\" >}}\n")
          md_file.write(line)
        elif "```kt" in line:
          md_file.write("{{< terminal title=\"Kotlin Code\" >}}\n")
          md_file.write(line)
        elif "```kotlin" in line:
          md_file.write("{{< terminal title=\"Kotlin Code\" >}}\n")
          md_file.write(line)
        elif "```dart" in line:
          md_file.write("{{< terminal title=\"Dart Code\" >}}\n")
          md_file.write(line)
        elif "```rkt" in line:
          md_file.write("{{< terminal title=\"Racket Code\" >}}\n")
          md_file.write(line)
        elif "```erl" in line:
          md_file.write("{{< terminal title=\"Erlang Code\" >}}\n")
          md_file.write(line)
        elif "```hrl" in line:
          md_file.write("{{< terminal title=\"Erlang Code\" >}}\n")
          md_file.write(line)
        elif "```exs" in line:
          md_file.write("{{< terminal title=\"Elixir Code\" >}}\n")
          md_file.write(line)
        elif "```sql" in line:
          md_file.write("{{< terminal title=\"SQL Code\" >}}\n")
          md_file.write(line)
        elif "```mssql" in line:
          md_file.write("{{< terminal title=\"MS SQL Server Code\" >}}\n")
          md_file.write(line)
        elif "```mysql" in line:
          md_file.write("{{< terminal title=\"MySQL Code\" >}}\n")
          md_file.write(line)
        elif "```bash" in line:
          md_file.write("{{< terminal title=\"Bash Code\" >}}\n")
          md_file.write(line)
        elif "```sh" in line:
          md_file.write("{{< terminal title=\"Bash Code\" >}}\n")
          md_file.write(line)
        elif "```txt" in line:
          md_file.write("{{< terminal title=\"Text\" >}}\n")
          md_file.write(line)
        elif "```\n" in line:
          md_file.write(line)
          md_file.write("{{< /terminal >}}\n")
        else:
          md_file.write(line)

    md_file.close()