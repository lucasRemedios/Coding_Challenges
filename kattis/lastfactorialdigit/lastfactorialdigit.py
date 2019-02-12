import numpy as np

def main():

	for i in range(int(input())):
		print(np.prod(list(range(1, int(input())+1))) % 10)		
				
main()





