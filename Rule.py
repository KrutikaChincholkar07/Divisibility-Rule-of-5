num = int(input("Enter a number: "))

last_digit = num % 10

if last_digit == 0 or last_digit == 5:
    print(num, "is divisible by 5")
else:
    print(num, "is not divisible by 5")
