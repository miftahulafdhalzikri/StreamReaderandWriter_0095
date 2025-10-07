n = int(input("masukkan nilai n untuk batas deret fibonanci:"))

a, b = 0, 1

print("deret fibonanci hingga", n, ":")
while a <= n:
    print(a, end=" ")
    a,b = b, a + b