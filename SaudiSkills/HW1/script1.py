import Matrix as mx

A = mx.Matrix([[1, 2, 3], [4, 5, 6]])
print("A =")
A.print()
B = mx.Matrix([(7, 8, 9), (10, 11, 12)])
print("B =")
print(B)
C = A.add(B)
print("C = A.add(B) = ")
print(C)
D = A + B
print("D = A + B =")
print(D)
E = B.transpose()
print("E = B.transpose() = ")
print(E)
F = A.matrix_multiply(E)
print("F = A.matrix_multiply(E) = ")
print(F)

