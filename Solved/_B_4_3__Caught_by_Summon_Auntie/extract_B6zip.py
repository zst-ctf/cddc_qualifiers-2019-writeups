#!/usr/bin/env python3

with open('B6.zip', 'rb') as f:
    contents = f.read()

orig_contents = contents

# ZIP File header
header = b'\x50\x4b\x03\x04'
print('length', len(orig_contents.split(header)))

# empty
contents = header + orig_contents.split(header)[0]
with open('B6_fixed_0.zip', 'wb') as f:
    f.write(contents)

# argh photo
contents = header + orig_contents.split(header)[1]
with open('B6_fixed_1.zip', 'wb') as f:
    f.write(contents)

# ehehe.txt
contents = header + orig_contents.split(header)[2]
with open('B6_fixed_2.zip', 'wb') as f:
    f.write(contents)
