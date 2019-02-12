def main():

		total = 0

		for i in range( int(input()) ):	
			input_as_floats = [float(x) for x in input().split()] 	
			total += input_as_floats[0] * input_as_floats[1]	
			
		print(total)

main()
