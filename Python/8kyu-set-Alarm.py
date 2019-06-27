# The function should return true if you are employed and not on vacation 
# (because these are the circumstances under which you need to set an alarm). 
# It should return false otherwise. 

# Examples:

# setAlarm(true, true) -> false
# setAlarm(false, true) -> false


def set_alarm(employed, vacation):
    return employed and not vacation
