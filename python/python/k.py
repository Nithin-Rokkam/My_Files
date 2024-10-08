global a
a = 14

def add(x, y):
  a = x + y
  print(a)

def sub(x, y):
  global a
  a = x - y
  print(a)

print(a)
add(2, 3)
sub(2, 3)