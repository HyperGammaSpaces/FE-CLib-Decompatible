#!/usr/bin/env python3

# rename .s file based on .map file

import os, sys


if __name__ == "__main__":
	with open("FE8U-20190316.s", "r") as f:
		prev_s = f.readlines()
	with open("fe8.map", "r") as f:
		decompmap = f.readlines()
	new_s = ""
	newmap = ""

	for line in decompmap:
		if line.startswith('                0x000000000'):
			newmap += line

	for line in prev_s:
		if line.startswith('SET_'):
			tokens = line.split()
			#tokens[0] is SET_FUNC/SET_DATA
			#tokens[1] is the name to be replaced (with a comma on the end)
			#tokens[2] is the address to search for in decompmap
			
			adr = tokens[2][2:].lower() #trim off the 0x

			#ugly but needed for thumb code
			if adr[-1] == '1':
				adr = adr[:-1] + '0'
			if adr[-1] == '3':
				adr = adr[:-1] + '2'
			if adr[-1] == '5':
				adr = adr[:-1] + '4'
			if adr[-1] == '7':
				adr = adr[:-1] + '6'
			if adr[-1] == '9':
				adr = adr[:-1] + '8'
			if adr[-1] == 'b':
				adr = adr[:-1] + 'a'
			if adr[-1] == 'd':
				adr = adr[:-1] + 'c'
			if adr[-1] == 'f':
				adr = adr[:-1] + 'e'

			matching = [s for s in decompmap if adr in s]
			if matching:
				tmp = matching[-1].split()
				if len(tmp) == 2:
					# print(tmp)
					tokens[1] = tmp[1]
					tokens[1] += ','

			line = ' '.join(tokens)
			line += '\n'
		new_s = new_s + line

	with open("FE8U-decompatible.s", "w") as f:
		f.write(new_s)

