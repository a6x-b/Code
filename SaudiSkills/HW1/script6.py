import Matrix as mx

L = [[1, 2], [3, 4]]
A = mx.Matrix(L)
print("L =", L)
print("A = Matrix(L) = ")
print(A)
L[0][0] = 10
print("Modifying L ...")
print("L =", L)
print("A = ")
print(A)
