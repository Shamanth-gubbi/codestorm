import random

def random_matrix(n):
    m = []
    for i in range(n):
        m.append([])
        for j in range(n):
            m[i].append(random.randint(0, 1))
    return m

def print_matrix1(m):
    for i in range(len(m)):
        for j in range(len(m)):
            print((m[i][j]),end='')
            #print(' ')
            # if(j==len(m)-1):
        print('\n')

def print_matrix(m):
    print('[',end='')
    for i in range(len(m)):
        print('[',end='')
        for j in range(len(m)):
          if(j==len(m)-1):
              print('"'+str(m[i][j])+'"',end='')
          else:
              print('"'+str(m[i][j])+'"'+',',end='')
        print(end='')
        if(i==len(m)-1):
          print(']')
        else: 
          print(']'+",")
    print(end='')
    print(']')

# n=random_matrix(5)
# print_matrix(n)
t= random.randint(100,1000)
print(t)
print('\n')
for i in range(t):
    n = random.randint(1, 10)
    print(n)
    print('\n')
    m = random_matrix(n)
    print_matrix1(m)