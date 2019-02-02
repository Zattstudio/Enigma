import sys
import string

output = []
input_letters = sys.argv[1]
for i in input_letters.lower():
    number = ord(i) - 97
    output.append(number)

print(output)
