def wave(people):
    return [people[:i] + people[i].upper() + people[i+1:] for i in range(len(people)) if people[i] != ' ']

print(wave('hello'))

#output: ['Hello', 'hEllo', 'heLlo', 'helLo', 'hellO']
