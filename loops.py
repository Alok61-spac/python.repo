for i in range(1,20,1):
    print(i * " * ")






for i in range(20,-1,-1):
    print( " * " * i)





for i in range(1,20,1):
    for j in range(1,i + 1):
        print(j , end = "")
    print()





for i  in range(20,-1,-1):
    for j in range(1,i + 1):
        print(j , end = "")
    print()




    

found = False
A = [82,80,85,92,91,99,199,87,54,61,68,28]
X = int(input("enter your value : "))
for value in A:
    if value == X :
        print("found it..",)
        found = True
if not found:
    print("Enter A Valid Value ")
