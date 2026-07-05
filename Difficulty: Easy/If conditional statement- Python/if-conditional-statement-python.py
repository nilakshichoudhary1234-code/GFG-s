def friends_in_trouble(j_angry, s_angry):
    # If both are angry or neither is angry, you are in trouble
    if (j_angry and s_angry) or (not j_angry and not s_angry):
        return True
    else:
        return False