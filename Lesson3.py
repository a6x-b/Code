List = [0, 1, 2, 3, 4]
print("Normal List: "+str(List))
List.pop(2)
print("List after 2 is popped ."+ str(List))
List.extend([2,2])
print("List after extend. " + str(List))
List.append(5)
print("List after append ."+ str(List))
List.sort() 
print("The List after being sorted ." + str(List))
print("The Highest value is " + str(max(List)))
#Note: Lists need to be converted to string to be printed using print()
#no need for comments because a lot of print func is already here.
