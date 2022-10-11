#!/bin/python3

import math
import os
import random
import re
import sys

def designerPdfViewer(h, word):
    area = 0
    for ch in word:
        if area < h[ord(ch) - ord('a')]:
            area = h[ord(ch) - ord('a')]
    return area*len(word)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = list(map(int, input().rstrip().split()))

    word = input()

    result = designerPdfViewer(h, word)

    fptr.write(str(result) + '\n')

    fptr.close()
