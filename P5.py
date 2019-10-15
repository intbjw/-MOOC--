s = input()
for i in range(len(s)):
    if s[i].isalnum() or s[i] == '.':
        if s[i+1].isalnum() or s[i+1] == '.':
            print(s[i],end='')
        else:
            print(s[i])
    elif s[i] == '-' or s[i] == '+':
        if s[i-1].isalnum():
            print(s[i])
        else:
            print(s[i], end='')
    else:
        print(s[i])