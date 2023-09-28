print("Aló! bienvenidos a la caluladora")
print("Aquí las opciones: ")
print("1) Sumar")
print("2) Restar")
print("3) Multiplicar")
print("4) Dividir")
print("5) Salir")

ciclo=0;
print()

while ciclo == 0: 
    opcion = float(input("Qué gustas hacer? "))
    match opcion:
        case 1:
            num1=float(input("tu primer numero? "))
            num2=float(input("tu segundo numero? "))
            print("Resultado: "+str(num1+num2))
        case 2:
            num1=float(input("tu primer numero? "))
            num2=float(input("tu segundo numero? "))
            print("Resultado: "+str(num1-num2))
        case 3:
            num1=float(input("tu primer numero? "))
            num2=float(input("tu segundo numero? "))
            print("Resultado: "+str(num1*num2))
        case 4:
            num1=float(input("tu primer numero? "))
            num2=float(input("tu segundo numero? "))
            if num2>0:
                print("Resultado: "+str(num1/num2))
            else:
                print("No se puede dividir entre cero D:")
        case 5:
            ciclo=1;
            
        case _:
            print("Esa no es opción -_- ")