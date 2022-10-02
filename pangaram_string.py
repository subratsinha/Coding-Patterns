def pangram_check(string):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet:
        if char not in string.lower():
            return False
    return True

print(pangram_check("The quick brown fox jumps over the lazy do"))

#output: True
