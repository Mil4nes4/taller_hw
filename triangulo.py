n=int(input("Ingrese n: "))
for _ in range(n):
    espacio=n-_-1
    asterisco=2*_+1
    print(f"{' '*espacio}{'*'*asterisco}")