# This program takes no argument
# Example: python3 computeFunction.py

def compute(x):
    equation = x * x + 2
    return equation

for i in range(10):
    print("x =",i, "f(" + str(i) + ")", "=", compute(i))
