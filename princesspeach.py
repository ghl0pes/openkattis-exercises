marioRun, numberOfObstacles = input().split()
obstacles = []

for key in range(int(numberOfObstacles)):
    obstacles.append(int(input()))

obstacles.sort()
for key in range(int(marioRun)):
    if (key in obstacles) == False:
        print(key)

print('Mario got', numberOfObstacles, 'of dangerous obstacles')