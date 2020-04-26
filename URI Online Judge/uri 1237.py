from difflib import SequenceMatcher
while True:
    try:
        a = input()
        b = input()

        substring = SequenceMatcher(None, a, b)

        m = substring.find_longest_match(0, len(a), 0, len(b))
        print(m.size)

    except EOFError:
        break    