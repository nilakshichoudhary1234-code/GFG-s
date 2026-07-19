# insert into dictionary
def insert_dict(query, dict):
    # query looks like ['i', 'student_name', 'marks']
    key = query[1]
    value = int(query[2])
    dict[key] = value

# deleting from dictionary
def del_dict(query, dict):
    # query looks like ['d', 'student_name']
    key = query[1]
    if key in dict:
        del dict[key]
        return True
    return False

# print marks of required name
def print_dict(key, dict):
    # The driver code provides the exact key directly to look up
    if key in dict:
        print(f"Marks of {key} is {dict[key]}")
        return True
    return False