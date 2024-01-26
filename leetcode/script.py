import os
import re
import string

def replace_dash_with_space(string):
  pattern = r"-"
  new_string = re.sub(pattern, " ", string)
  return new_string

def remove_dots_with_hyphens(text):
  return text.translate(str.maketrans(string.punctuation, string.punctuation.replace(".", "-")))

def remove_spaces_with_hyphens(sentence):
  pattern = r"\s+"
  new_sentence = re.sub(pattern, "-", sentence)
  return new_sentence


src_dir = "./problems"
dst_dir = "./posts"

for folder_name in os.listdir(src_dir):
  if os.path.isdir(f"{src_dir}/{folder_name}"):  
    md_file_name = remove_dots_with_hyphens(remove_spaces_with_hyphens(folder_name)).lower()
    md_file = open(f"{dst_dir}/{md_file_name}.md", "w")
    title_name = replace_dash_with_space(remove_dots_with_hyphens(remove_spaces_with_hyphens(folder_name)))
    md_file.write("---\n")
    md_file.write(f"title: {title_name}\n")
    md_file.write(f"summary: {title_name} LeetCode Solution Explained\n")
    md_file.write("date: 2022-11-25\n")
    md_file.write("tags: [leetcode]\n")
    md_file.write("series: [leetcode]\n")
    md_file.write(f"keywords: [\"{title_name} LeetCode Solution Explained in all languages\", \"{title_name}\", \"LeetCode\", \"leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C\", \"GeeksforGeeks\", \"InterviewBit\", \"Coding Ninjas\", \"HackerRank\", \"HackerEarth\", \"CodeChef\", \"TopCoder\", \"AlgoExpert\", \"freeCodeCamp\", \"Codeforces\", \"GitHub\", \"AtCoder\", \"Samir Paul\"]\n")
    md_file.write("cover:\n")
    md_file.write(f"    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:{title_name} - Solution Explained/problem-solving.webp\n")
    md_file.write(f"    alt: {title_name}\n")
    md_file.write("    hiddenInList: true\n")
    md_file.write("    hiddenInSingle: false\n")
    md_file.write("---\n")
    md_file.write("\n")
    md_file.write("\n")

    if os.path.exists(f"{src_dir}/{folder_name}/README.md"):
      readme_file = open(f"{src_dir}/{folder_name}/README.md", "r")
      for line in readme_file:
        if "中文文档" in line: continue
        md_file.write(line)

    md_file.close()