import os
import re 

def remove_first_lines(filename, lines_to_remove=14):
    """Removes the specified number of lines from the beginning of a file."""
    with open(filename, 'r', encoding="latin-1") as file:
        lines = file.readlines()[lines_to_remove:]  # Skip the first 14 lines

    with open(filename, 'w', encoding="latin-1") as file:
        file.writelines(lines)  # Overwrite the file with the remaining lines



def replace_dash_with_space(string):
  pattern = r"-"
  new_string = re.sub(pattern, " ", string)
  return new_string

for filename in os.listdir( ):
  if filename.endswith('.md'):
    remove_first_lines(filename)
    parmalink = filename[:-3]
    title = replace_dash_with_space(filename[:-3]).title()
    line = "---\n" + f"title: {title}\n" + f"summary: {title} - Interviewbit Solution Explained\n" + "date: 2020-06-20\n" + f"tags: [interviewbit]\n" + "series: [interviewbit]\n" + f"keywords: [\"interviewbit\", \"interviewbit solution in Python3 C++ Java\", \"{title} Solution Explained\"]\n" + "cover:\n" + f"    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:{title} - Solution Explained/problem-solving.webp\n" + f"    alt: {title}\n" + "    hiddenInList: true\n" + "    hiddenInSingle: false\n" + "---\n" + "\n"
    with open(filename, 'r', encoding="latin-1") as original: data = original.read()
    with open(filename, 'w', encoding="latin-1") as modified: modified.write(line + data)
