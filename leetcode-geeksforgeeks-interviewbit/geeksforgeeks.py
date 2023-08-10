import os
import re

def replace_dash_with_space(string):
  pattern = r"-"
  new_string = re.sub(pattern, " ", string)
  return new_string


def remove_spaces(sentence):
  pattern = r"\s+"
  new_sentence = re.sub(pattern, "-", sentence)
  return new_sentence


def make_md_file(folder_name):
  md_file_name = remove_spaces(folder_name)
  md_file = open(f"{md_file_name}.md", "w")
#   md_file.write("# {folder_name}\n\n")
  
  md_file.write("---\n")
  md_file.write(f"title: {replace_dash_with_space(folder_name)}\n")
  md_file.write("date: 2020-08-31 09:54:52\n")
  md_file.write("tags: geeksforgeeks\n")
  md_file.write("categories: geeksforgeeks\n")
  md_file.write(f"keywords: GeeksforGeeks, GeeksforGeeks practice solution in Python3 C++ Java, {folder_name} solution\n")
  # md_file.write(f"description: {folder_name}\n")
  md_file.write("cover: assets/img/gfg.webp\n")
  md_file.write("---\n")
  md_file.write("\n")
  md_file.write("\n")
  
  if os.path.exists(f"{folder_name}/README.md"):
    readme_file = open(f"{folder_name}/README.md", "r")
    for line in readme_file:
        md_file.write(line)
  
  md_file.write("\n")
  md_file.write("\n")
  md_file.write("---\n")
  md_file.write("\n")
  md_file.write("\n")

  for file in os.listdir(folder_name):
    if file.endswith(".py"):
      with open(f"{folder_name}/{file}", "r") as f:
        code = f.read()
        md_file.write("\n")
        md_file.write("\n")
        md_file.write("```python\n")
        md_file.write(f"{code}\n")
        md_file.write("```\n")

    if file.endswith(".cpp"):
      with open(f"{folder_name}/{file}", "r") as f:
        code = f.read()
        md_file.write("\n")
        md_file.write("\n")
        md_file.write("```cpp\n")
        md_file.write(f"{code}\n")
        md_file.write("```\n")
    
    if file.endswith(".java"):
      with open(f"{folder_name}/{file}", "r") as f:
        code = f.read()
        md_file.write("\n")
        md_file.write("\n")
        md_file.write("```java\n")
        md_file.write(f"{code}\n")
        md_file.write("```\n")
    
    if file.endswith(".sql"):
      with open(f"{folder_name}/{file}", "r") as f:
        code = f.read()
        md_file.write("\n")
        md_file.write("\n")
        md_file.write("```sql\n")
        md_file.write(f"{code}\n")
        md_file.write("```\n")

  md_file.close()

for folder_name in os.listdir():
  if os.path.isdir(folder_name):
    if folder_name.endswith('- GFG'):
      make_md_file(folder_name)
