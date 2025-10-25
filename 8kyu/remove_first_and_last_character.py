# ==========================
# 8 kyu – Remove First and Last Character
# https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
# ==========================

def remove_char(s):
    word = ""
    for i in range(1, len(s) - 1):
        word += s[i]
    return word
