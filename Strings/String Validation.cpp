#User function Template for python3

"""
input - 
s = string given 

output - 
return 0 if not validated else return true
"""

def validate(s):
    #your code here
    if not s:
        return False
    
    if len(s) < 10:
        return 0
    
    special_chars = ('@','#','$','-','*')
    
    numeric_flag = False
    upper_case_flag = False
    lower_case_flag = False
    special_flag = False
    
    for ch in s:
        if ch.isdigit():
            numeric_flag = True
        elif ch.isupper():
            upper_case_flag = True
        elif ch.islower():
            lower_case_flag = True
        elif ch in special_chars:
            special_flag = True
    
    return 1 if (numeric_flag and upper_case_flag and lower_case_flag and special_flag) else 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while(t>0):
        s = input()
        print(validate(s))
        t = t-1

# } Driver Code Ends
