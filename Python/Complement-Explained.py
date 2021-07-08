#Complement is a operator that flip the binary value of any number e.g ~12 = -13
#Let's take another example and apply to it (14)
#Let's make 14 to binary
print(bin(14))
#so bin(14) =                      00001110
#now let's flip it it will be =    11110001
#idk but i think if the last digits are the same the result will be minus
#Let's say we know the answer and converted it to positive, how do you make a positive num to negative?
#first we take complement of the positive than adds one to the value.
#let's imagine we're situition where you don't know the answer, 
#well, it's easy, you just have to do the oppsite. (we subtract one from 14 complement then complement the bin num)
#Here => 11110001 - 1 = 11110000 
#now we complement it   00001111
#now we convert this bin to decimal 1+2+4+8 ============15
#so the complement of 14 is -15 (the one from above but we added negative bc... idk \\:) )
print(~14)
#see!! Ez1!

#Also the 'AND' and 'OR' opertaor are ez too!!1!
#you convert both nums to bins then you replace every 1 with True and every 0 with False 
#Then apply the operator to the same bit from each binary e.g  0000101
#operator is | (OR)                                            1010010
#it will be:                                                   1010111
#if it was & (And) it will be 0, try it1!!
#Here's the proof
print(5 | 87) #This is OR
print(5 & 87) #This is AND
#ALso What comes first it doesn't matter (same as + and *)
print(int(0b1111))