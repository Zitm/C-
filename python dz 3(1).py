mike=int(input("деньги Майка "))
ivan=int(input("деньги Ивана "))
inv=int(input("минимальная сумма инвестиций "))
if mike>=inv and ivan>=inv:
    print(2)
elif mike>=inv:
    print("Mike")
elif ivan>=inv:
    print("Ivan")
elif mike+ivan>=inv:
    print(1)
else:
    print(0)