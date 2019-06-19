#!/usr/bin/env python3
import itertools
import gmpy2
from Crypto.PublicKey import RSA

from base64 import b64decode

# hello
ciphertext = '''
Z0F1+bXCxbcgh521mMwL1gxGBdp/OIoDEmN0YlsTuzkdoc2IhJ4fOKoDXyuvAhre
iNzf+6TUkGFcnfJSPDHkXYEeyg5Yr6lQhm7VS7RzPKLVi8nMFJd/lQIXZVmKlfKR
rMSOVPSlefjdTIwlE0VNHn4TK/zF+i5eee95aJa07Rw=
'''.strip().replace('\n', '')

# flag
ciphertext = '''
NXxJpnJ44IJTOYJ9H25flNYkXlJoL/SfYgkYEDipQZWdzrcQ3MlcDTzu65EDi/fu
q3u7QRuPM2/ImleWUmDpeCTrny5r6bYq8q30l1aOHWSMwU3HpvO/vD1n4s63/8x7
2y0Y2S/xOsOT1xJn33I2nQ049viEH9DMJ0ZiQikpDM8=
'''.strip().replace('\n', '')

ct = b64decode(ciphertext)

with open('my_private.pem') as f:
	binPrivKey = f.read()

privKeyObj = RSA.importKey(binPrivKey)

print (privKeyObj.n)
print (privKeyObj.e)
print (privKeyObj.p)
print (privKeyObj.q)
#rsakey = PKCS1_OAEP.new(privKeyObj) 
print((ct.hex()))
#decrypted = privKeyObj.decrypt(ct) 
#print(decrypted)

def bxor(a1, b1):
    encrypted = [ (a ^ b) for (a, b) in zip(a1, b1) ]
    return bytes(encrypted)

def solve(ct, p, q, e, N):
    # Compute phi(n)
    phi = (p - 1) * (q - 1)

    # Compute modular inverse of e
    d = gmpy2.invert(e, phi)

    # Decrypt ciphertext
    pt = pow(ct, d, N)
    print(hex(pt))
    try:
    	pt = bytes.fromhex(hex(pt)[2:])
    except:
    	pt = bytes.fromhex('0' + hex(pt)[2:])
    print(pt)

print('bit-length', len(ct)*8)
ct = int(ct.hex(), 16)
solve(ct, privKeyObj.p, privKeyObj.q, privKeyObj.e, privKeyObj.n)
