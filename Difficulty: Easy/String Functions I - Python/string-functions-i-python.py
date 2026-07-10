def trim(str):
    # Removes any leading and trailing whitespaces
    return str.strip()

def exists(str, x):
    # Finds the first occurrence of substring x; returns index or -1 if not found
    return str.find(x)

def titleIt(str):
    # Converts the first character of each word to uppercase
    return str.title()

def casesSwap(str):
    # Swaps uppercase characters to lowercase and vice versa
    return str.swapcase()