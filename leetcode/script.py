import os
import re
import string

def replace_dash_with_space(string):
  pattern = r"-"
  new_string = re.sub(pattern, " ", string)
  return new_string

def remove_dots_with_hyphens(text):
  return text.translate(str.maketrans(string.punctuation, string.punctuation.replace(".", "-")))

def remove_spaces(sentence):
  pattern = r"\s+"
  new_sentence = re.sub(pattern, "-", sentence)
  return new_sentence

def make_md_file(folder_name):
  md_file_name = remove_dots_with_hyphens(remove_spaces(folder_name)).lower()
  md_file = open(f"./posts/{md_file_name}.md", "w")
  title_name = replace_dash_with_space(md_file_name).title()
  md_file.write("---\n")
  md_file.write(f"title: {title_name}\n")
  md_file.write(f"summary: {title_name} LeetCode Solution Explained\n")
  md_file.write("date: 2022-11-25\n")
  md_file.write("tags: [leetcode]\n")
  md_file.write("series: [leetcode]\n")
  md_file.write(f"keywords: [\"LeetCode\", \"leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C\", \"{title_name} LeetCode Solution Explained in all languages\"]\n")
  md_file.write("cover:\n")
  md_file.write(f"    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:{title_name} - Solution Explained/problem-solving.webp\n")
  md_file.write(f"    alt: {title_name}\n")
  md_file.write("    hiddenInList: true\n")
  md_file.write("    hiddenInSingle: false\n")
  md_file.write("---\n")
  md_file.write("\n")
  md_file.write("\n")
  
  if os.path.exists(f"./problems/{folder_name}/README_EN.md"):
    readme_file = open(f"./problems/{folder_name}/README_EN.md", "r")
    for line in readme_file:
      if "中文文档" in line: continue
      md_file.write(line)

  md_file.close()

for folder_name in os.listdir("./problems/"):
  if os.path.isdir(f"./problems/{folder_name}"):
    make_md_file(folder_name)
