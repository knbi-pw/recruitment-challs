from os import urandom

def gen_key(m):
  return urandom(len(m))

def encrypt(m, k):
  d = ""
  for character in m:
    c = (25*ord(character) + 420) % 256
    d = d + chr(c)
  d = "".join(chr(ord(a) ^ b ) for a,b in zip(d, k))
  return d

with open("./secret.txt") as f:
    SECRET_MSG = f.read()

key = gen_key(SECRET_MSG)
encrypted_msg = encrypt(SECRET_MSG, key)

with open("./encrypted.enc", 'w') as f:
  f.write(encrypted_msg)
with open("./key.enc", 'w') as f:
  f.write(key.hex())
