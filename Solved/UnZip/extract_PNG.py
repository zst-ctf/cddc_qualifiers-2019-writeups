#!/usr/bin/env python3

with open('Un.Zip', 'rb') as f:
    contents = f.read()

orig_contents = contents

# PNG File header
header = bytes([137,80,78,71,13,10,26,10])
print('length', len(orig_contents.split(header)))

# extract image
contents = header + orig_contents.split(header)[1]
with open('image.png', 'wb') as f:
    f.write(contents)
