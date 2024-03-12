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

def create_og_image(file_name, title):
  # Specify the image URL
  url = f"https://dynamic-og-image-generator.vercel.app/api/generate?title={title} - Solution+Explained&author=Samir+Paul&websiteUrl=@SamirPaulb&avatar=https%3A%2F%2Favatars.githubusercontent.com/u/77569653&theme=nightOwl"
  # Download the image content
  data = requests.get(url).content
  # Save the image as "img.jpg"
  with open("img.jpg", "wb") as f:
      f.write(data)
  jpg_image = Image.open("img.jpg")
  # Convert to WebP format
  webp_image_path = f"images/{file_name}.webp"
  jpg_image.save(webp_image_path, format="WebP", quality=30)  # Adjust quality as needed (0-100)


src_dir = "./problems"
i = 0
for folder_name in sorted(os.listdir(src_dir)):
  if os.path.isdir(f"{src_dir}/{folder_name}"):  
    file_name = make_file_name(folder_name)
    title_name = make_title_name(folder_name)
    # Create OG Image
    create_og_image(file_name, title_name)
    i += 1
    print(i, f"{file_name}.webp")