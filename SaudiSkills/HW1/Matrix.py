from copy import deepcopy
class Matrix:

    # instance attribute
    def __init__(self, Values):
        try:
            len(Values)
        except:
            raise Exception("data must be a sequence of sequences")
        else:
            LEN = -1
            Rows = 0
            for list in Values:
                Rows += 1
                try:
                    (len(list))
                except:
                    raise Exception("data must be a sequence of sequences")
                else:
                    if (LEN != -1 and LEN != len(list)):
                        raise Exception(
                            "rows must have same number of elements")
                    for EL in list:
                        try:
                            float(EL)
                        except:
                            raise Exception(
                                "elements must be numerical values (floating points)")
                    LEN = len(list)
            self.__Values = Values
            self.__size = [len(Values), len(Values[0])]

    def print(self):
        print(self.__str__())

    def __str__(self) -> str:
        TXT = ""
        for Row in self.__Values:
            for Element in Row:
                TXT += f"{Element}\t"
            TXT += "\n"
        return TXT

    def add(self, MTRX2):
        if (type(self) != type(MTRX2)):
            raise Exception("other operand must be have Matrix type")
        elif (self.__size != MTRX2.__size):
            raise Exception("dimension mismatch")
        LIST = deepcopy(self.__Values)
        Row = 0
        Col = 0
        for i in MTRX2.__Values:
            for j in i:
                LIST[Row][Col] += j
                Col += 1
            Row += 1
            Col = 0
        return Matrix(LIST)

    def __add__(self, MTRX2):
        if (type(self) != type(MTRX2)):
            raise Exception("other operand must be have Matrix type")
        elif (self.__size != MTRX2.__size):
            raise Exception("dimension mismatch")
        LIST = deepcopy(self.__Values)
        Row = 0
        Col = 0
        for i in MTRX2.__Values:
            for j in i:
                LIST[Row][Col] += j
                Col += 1
            Row += 1
            Col = 0
        return Matrix(LIST)

    def transpose(self):
        Rows = len(self.__Values)
        Cols = len(self.__Values[0])

        TEMP = []
        for j in range(Cols):
            row = []
            for i in range(Rows):
                row.append(self.__Values[i][j])
            TEMP.append(row)

        return Matrix(TEMP)

    def matrix_multiply(self, MTRX2):
        self.__size.reverse()
        if (type(self) != type(MTRX2)):
            raise Exception("other operand must be have Matrix type")
        elif (self.__size != MTRX2.__size):
            self.__size.reverse()
            raise Exception("dimension mismatch")
        self.__size.reverse()
        TEMP = []
        for i in range(len(self.__Values)):
            row = []
            for j in range(len(self.__Values)):
                SUM = 0
                for k in range(len(self.__Values[0])):
                    SUM += self.__Values[i][k] * MTRX2.__Values[k][j]
                row.append(SUM)
            TEMP.append(row)
        return Matrix(TEMP)


# instantiate the Matrix class
"""A = Matrix([[1,2,3],[4,5,6]])
B = Matrix([[1,2,3],[4,5,6]])
C = A.transpose()"""

# print(type(A) == type(B))
# access the class attributes

# access the instance attributes
