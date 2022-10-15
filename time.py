#Write a function, which takes a non-negative integer (seconds) as input and returns the time in a human-readable format (HH:MM:SS)

def time(x):
    if(x < 0):
        return "Invalid input"
    else:
        hours = x // 3600
        minutes = (x % 3600) // 60
        seconds = (x % 3600) % 60
        return "{}:{}:{}".format(str(hours).zfill(2), str(minutes).zfill(2), str(seconds).zfill(2))
    
print(time(60))