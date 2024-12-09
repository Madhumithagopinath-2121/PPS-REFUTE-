def is_palindrome(s):
    """
    Checks if the input string is a palindrome.
    
    :param s: Input string
    :return: True if the string is a palindrome, False otherwise
    """
    return s == s[::-1]

# Main program
user_input = input("Enter a string to check if it's a palindrome: ").strip()

if is_palindrome(user_input):
    print(f'"{user_input}" is a palindrome.')
else:
    print(f'"{user_input}" is not a palindrome.')



