# Basic calculator

A = float(input("enter your first value :"))
B = float(input("enter your second value :"))


print("option 1 for sum")
print("option 2 for substraction")
print("option 3 for multipiction")
print("option 4 for quotient")
print("option 5 for reminder")
print("option 6 for power")


O = int(input("Enter Your Option :"))


if O == 1:
    print(float( A + B))

elif O == 2:
    print(float(A - B))
    

elif O == 3:
    print(float(A * B))

elif O == 4:
    print(float(A / B))

elif O == 5:
    print(float(A % B))

elif O == 6:
    print(int(A ** B))
else :
    print("ERROR")
                        

            

        


