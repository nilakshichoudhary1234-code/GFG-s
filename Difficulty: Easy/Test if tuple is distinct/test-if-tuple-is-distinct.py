# Read the space-separated input and convert it into a tuple
arr = tuple(map(int, input().split()))

# Check if the length of the set is equal to the length of the tuple
if len(set(arr)) == len(arr):
    print("True")
else:
    print("False")