# This program takes no argument
# Example: python3 square.py
def sq(x):
    result = x * x
    return result

for i in range(20):
    print("Square of", i, "is", sq(i))
