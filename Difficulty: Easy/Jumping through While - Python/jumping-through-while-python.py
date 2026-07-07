def printIncreasingPower(x):
    # Initialize the starting base number
    i = 1
    
    # Loop to jump in powers of 2 (perfect squares)
    while (i * i <= x):
        # Calculate the square
        ans = i * i
        
        # Print the square followed by a space
        print(ans, end=" ")
        
        # Increment the base number
        i += 1