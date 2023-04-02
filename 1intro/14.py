def hanoi(n, source, aux, destination):
    if n == 1:
        print(source, destination)
        return
    hanoi(n-1, source, destination, aux)
    print(source, destination)
    hanoi(n-1, aux, source, destination)


def hanoiAux(n, source, aux, destination):
    print(2**n - 1)
    hanoi(n, source, aux, destination)


n = int(input())
hanoiAux(n, 1, 2, 3)
