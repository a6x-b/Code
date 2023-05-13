import Matrix as mx

A = mx.Matrix([[1, 2, 3], [4, 5, 6]])
print("A =")
A.print()
B = mx.Matrix([[7, 8], [10, 11]])
print("B =")
print(B)
C = A.add(B)
print("C = A.add(B) = ")
