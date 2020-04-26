while True:
    try:

        line = input()
        ans = ""

        flag = True

        for i in line:
            if i == ' ':
                ans += ' '
                continue
            if flag:
                ans += i.upper()
                flag = False
            else:
                ans += i.lower()
                flag = True
        print(ans)

    except EOFError:
        break
