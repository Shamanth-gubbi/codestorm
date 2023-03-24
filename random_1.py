import random

def random_matrix(n):
    m = []
    for i in range(n):
        m.append([])
        for j in range(n):
            m[i].append(random.randint(0, 1))
    return m


def print_matrix(m):
    print('[')
    for i in range(len(m)):
        print('[')
        for j in range(len(m)):
           print(m[i][j], end=' ')
        print()
        print(']')
    print(']')

n=random_matrix(5)
print_matrix(n)
# t= random.randint(1000,10000)
# print(t)
# for i in range(t):
#     n = random.randint(1, 100)
#     m = random_matrix(n)
#     print_matrix(m)