n = int(input("masukan nilai n untuk mencetak bilangan ganjil"))

print("bilangan ganjil hingga", n, ":")
for i in range(1, n + 1, 2):
    print(i, end=" ")
