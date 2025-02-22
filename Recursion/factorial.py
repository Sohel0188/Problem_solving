# ans = 1;
# def fibo_num(i):
#     if(i==0):
#         return
#     fibo_num(i-1)
#     global ans 
#     ans = ans * i
def fact(i):
    if(i==0):
        return 1;
    ans = i*fact(i-1)
    return ans

result = fact(5)
print(result)
