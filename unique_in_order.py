#Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

def unique_in_order(l):
    if(len(l) == 0):
        return []
    else:
        l1 = []
        l1.append(l[0])
        for i in range(1, len(l)):
            if(l[i] != l[i-1]):
                l1.append(l[i])
        return l1

print(unique_in_order('AAAABBBCCDAABBB'))