def sum_of_evens(numbers):
    """
    Calculates the sum of even numbers in a list.
    
    :param numbers: List of integers
    :return: Sum of even integers
    """
    return sum(num for num in numbers if num % 2 == 0)

# Main program
try:
    user_input = input("Enter a list of integers separated by spaces: ")
    numbers = list(map(int, user_input.split()))
    even_sum = sum_of_evens(numbers)
    print(f"The sum of even numbers is: {even_sum}")
except ValueError:
    print("Error: Please enter valid integers.")

