import os
import sys
import re

def count_words(text):
 words = text.split(" ")
 return len(words)

def count_lines(text):
 return len(text.split("\n"))

def find_long_words(text, length):
    result=[]
    for w in text.split():
        if len(w)>length:
         result.append(w)
    return result

def analyze_file(filename):
    file=open(filename,"r")
    text=file.read()

    words=count_words(text)
    lines=count_lines(text)

    long_words=find_long_words(text,7)

    print("Words:",words)
    print("Lines:",lines)
    print("Long words:",long_words)

    if words>100:
        print("Large file")

def main():
    filename=sys.argv[1]
    analyze_file(filename)

main()