import os
import re 

def replace_dash_with_space(string):
  pattern = r"-"
  new_string = re.sub(pattern, " ", string)
  return new_string

for filename in os.listdir( ):
  if filename.endswith('.md'):
    title = replace_dash_with_space(filename[:-3])
    line = "---\n" + f"title: {title}\n" + f"tags: interviewbit\n" + "categories: interviewbit\n" + f"keywords: interviewbit, interviewbit solution in Python3 C++ Java, {title} solution\n" + f"description: {title} Interviewbit Solution Explained\n" + "cover: /assets/img/interviewbit-cover.jpg\n" + "---\n" + "\n"
    with open(filename, 'r', encoding="latin-1") as original: data = original.read()
    with open(filename, 'w', encoding="latin-1") as modified: modified.write(line + data)
