import Matrix as mx

A = mx.Matrix([[1, 2, 3], [4, 5, 6]])
print("A =")
A.print()
B = mx.Matrix([[7, 8, 9], [10, 11, 12]])
print("B =")
print(B)
C = A.matrix_multiply(B)
print("C = A.matrix_multiply(B) = ")
print(C)
