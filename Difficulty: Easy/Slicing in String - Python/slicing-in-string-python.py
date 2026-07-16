def join_middle(bound_by, tag_name):
    # Find the midpoint of the bounding string
    mid = len(bound_by) // 2
    
    # Slice from the start to mid, add the tag, and slice from mid to the end
    return bound_by[:mid] + tag_name + bound_by[mid:]