#!/usr/bin/env python3

def execute_code(code):
	stack = []

	for i, ch in enumerate(list(code)):

		# lowercase chars are hardcoded-numbers
		if ch.islower():
			stack.append(ord(ch) - 0x61) # push

		# uppercase M = multiply
		elif ch == 'M':
			a = stack.pop() # pop
			b = stack.pop() # pop
			result = a * b
			stack.append(result) # push

		# uppercase A = addition
		elif ch == 'A':
			a = stack.pop() # pop
			b = stack.pop() # pop
			result = a + b
			stack.append(result) # push
			pass

		# uppercase P = print
		elif ch == 'P':
			register = stack.pop() # pop
			print(chr(register), end='')

		else:
			print(f"Unknown instruction at index {i} = {ch}")

		#print(i, stack)

	pass


x = "cfMcfMhiMfAhiMfAhiMfAeiMaAeiMjAhhcMMdAgjcMMcAhhcMMhAhhcMMgAhhcMMbAdfgMMhAijMfAeiMaAgjcMMaAdfgMMhAeehMMfAeehMMeAeehMMcAhhcMMhAjjMfAeiMaAeehMMaAeehMMcAgjcMMdAhjMeAeiMaAhhcMMcAhhcMMdAhhcMMdAeehMMaAjjMcAeehMMeAhhcMMgAhhcMMfAhhcMMhAijMeAeiMiAijMfAjjMfAhjMeAjjMcAijMeAeiMaAgjcMMdAeehMMeAeiMaAhhcMMdAgjcMMbAgjcMMdAhhcMMbAgjcMMaAhhcMMdAjjMgAeiMaAhiMfAhiMfAhiMfAcfMPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"
execute_code(x)

x = "eiMaAhiMcAeiMaAhjMfAijMbAPPPPP"
execute_code(x)

x = "eiMaAhiMcAeiMaAhhcMMcAeehMMcAgjcMMdAeehMMhAeehMMdAeehMMdAdfgMMhAijMiAPPPPPPPPPPP"
execute_code(x)

x = "cfMcfMeiMbAhhcMMdAefgMMbAhjMdAeiMaAhhcMMcAgjcMMdAgjcMMdAhjMiAeiMaAghMcAPPPPPPPPPPPPP"
execute_code(x)
x = "cfMhhcMMgAhhcMMbAeehMMeAdfgMMhAgjcMMbAeehMMdAhhcMMhAgjcMMbAeiMaAhhcMMcAeehMMcAgjcMMdAeehMMhAeehMMdAeehMMdAdfgMMhAijMiAeiMaAdfgMMdAghMdAdfgMMbAPPPPPPPPPPPPPPPPPPPPPP"
execute_code(x)
x = "cfMhhcMMcAhhcMMhAeiMaAhhcMMfAgjcMMcAgjcMMdAeehMMcAjjMgAeiMaAdfgMMdAghMdAdfgMMbAPPPPPPPPPPPPP"
execute_code(x)

print()
print()



# Print stack forward
'''
x = ''
x += "aaA" # null
x += "ccMdMdMdMgA" # r, 114 = 2*2*3*3 + 6 = 
x += "jjMjAjAcA" # e, 101 = 9*9+9+9 + 2
x += "ccMdMdMdMhA" # s, 115 = 2*2*3*3*3 + 7 = 
x += "ccMdMdMdMjA" # u, 117 = 2*2*3*3*3 + 9 = 
x += "jjMjAfA" # _, 95 = 9*9+9+5 
x += "jjMjAjA" # c, 99 = 9*9+9+9
x += "ccMdMdMdMhA" # s, 115 = 2*2*3*3*3 + 7 = 
x += "ccMdMdMdM"  # l, 108 = 2*2*3*3*3 = 
x += 'P' * 8
'''

# Print stack backwards
'''
x = ''
x += "ccMdMdMdM"  # l, 108 = 2*2*3*3*3 = 
x += "ccMdMdMdMhA" # s, 115 = 2*2*3*3*3 + 7 = 
x += "jjMjAjA" # c, 99 = 9*9+9+9
x += "jjMjAfA" # _, 95 = 9*9+9+5 
x += "ccMdMdMdMjA" # u, 117 = 2*2*3*3*3 + 9 = 
x += "ccMdMdMdMhA" # s, 115 = 2*2*3*3*3 + 7 = 
x += "jjMjAjAcA" # e, 101 = 9*9+9+9 + 2
x += "ccMdMdMdMgA" # r, 114 = 2*2*3*3 + 6 = 
x += 'a' # null
x += 'P' * 8
'''

# Copy text to buffer
# lsc_user (8 chars)
# [108, 115, 99, 95, 117, 115, 101, 114]

x = ''
x += "ccMdMdMdM"  # l, 108 = 2*2*3*3*3 = 
x += "a" + "K" # index 0

x += "ccMdMdMdMhA" # s, 115 = 2*2*3*3*3 + 7 = 
x += "b" + "K" # index 1

x += "jjMjAjA" # c, 99 = 9*9+9+9
x += "c" + "K" # index 2

x += "jjMjAfA" # _, 95 = 9*9+9+5 
x += "d" + "K" # index 3

x += "ccMdMdMdMjA" # u, 117 = 2*2*3*3*3 + 9 = 
x += "e" + "K" # index 4

x += "ccMdMdMdMhA" # s, 115 = 2*2*3*3*3 + 7 = 
x += "f" + "K" # index 5

x += "jjMjAjAcA" # e, 101 = 9*9+9+9 + 2
x += "g" + "K" # index 6

x += "ccMdMdMdMgA" # r, 114 = 2*2*3*3 + 6 = 
x += "h" + "K" # index 7

print("ID:", x)
execute_code(x)

# hi_darkspeed-corp! (18 chars)
# [104, 105, 95, 100, 97,
# 114, 107, 115, 112, 101,
# 101, 100, 45, 99, 111, 114, 112, 33]
MULTIPLY = 'M'
ADD = 'A'
x0 = 'a'
x1 = 'b'
x2 = 'c'
x3 = 'd'
x4 = 'e'
x5 = 'f'
x6 = 'g'
x7 = 'h'
x8 = 'i'
x9 = 'j'
ten = x5 + x2 + MULTIPLY
hundred = ten + ten + MULTIPLY
ninety = ten + x9 + MULTIPLY


x = ''
x += hundred + x4 + ADD #104
x += "a" + "K" # index 0

x += hundred + x5 + ADD #105
x += "b" + "K" # index 1

x += ninety + x5 + ADD #95
x += "c" + "K" # index 2

x += hundred #100
x += "d" + "K" # index 3

x += ninety + x7 + ADD #97
x += "e" + "K" # index 4

x += hundred + x5 + ADD + x9 + ADD#114
x += "f" + "K" # index 5

x += hundred + x7 + ADD #107
x += "g" + "K" # index 6

x += hundred + x6 + ADD + x9 + ADD#115
x += "h" + "K" # index 7

x += hundred + x3 + ADD + x9 + ADD#112
x += "i" + "K" # index 8

x += hundred + x1 + ADD #101
x += "j" + "K" # index 9

x += hundred + x1 + ADD #101
x += "jbA" + "K" # index 10

x += hundred #100
x += "jcA" + "K" # index 11

x += x9 + x5 + MULTIPLY #45
x += "jdA" + "K" # index 12

x += ninety + x9 + ADD #99
x += "jeA" + "K" # index 13

x += hundred + x2 + ADD + x9 + ADD#111
x += "jfA" + "K" # index 14

x += hundred + x5 + ADD + x9 + ADD#114
x += "jgA" + "K" # index 15

x += hundred + x3 + ADD + x9 + ADD#112
x += "jhA" + "K" # index 16

x += (ten + x3 + MULTIPLY) + x3 + ADD#33
x += "jiA" + "K" # index 17

# abcdefghij
# 0123456789

print("Password:", x)
execute_code(x)


