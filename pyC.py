import sys
import subprocess
import os
from ctypes import *


cmd = "prueba20181113.c"


# subprocess.call(["gcc",cmd]) #For Compiling    gcc -Wall prueba20181113.c  -o ejecutable
subprocess.call(["gcc", cmd, "-oejecutable", "-std=c99", '-w', '-Ofast'])
subprocess.call(["./ejecutable"], stdin = sys.stdin)
#subprocess.call("./ejecutable")  


