def cb(x):
    result = x * x * x
    return result

for i in range(20):
    if (i % 2) == 0:
        print(i)
    else:
        print(cb(i))
