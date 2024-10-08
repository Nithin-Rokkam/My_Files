def uniqueE(L):
    unique_elements = []
    for element in L:
        if L.count(element) == 1:
            unique_elements.append(element)
    sorted_unique_elements = sorted(unique_elements)
    return sorted_unique_elements

input_str = input("enter:")
input_list = [int(x) for x in input_str.split()]

output = uniqueE(input_list)
print("Unique elements in sorted order:", output)
