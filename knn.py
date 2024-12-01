import math

#[frekvence navstev, delka pobytu, cetnost nakupuu, median ceny nakupu]
persons =[

[0,0,0,0],
[0,0,0,0],
[0,0,0,0],
[0,0,0,0],
[0,0,0,0]

]

relative_persons =[

        [0,0,0,0],
        [0,0,0,0],
        [0,0,0,0],
        [0,0,0,0],
        [0,0,0,0]

]

now_person = [1,1,1,1]
#for i in range(1,5):
 #   now_person.append(float(input(str(i)+": ")))


vector_lengths = [0,0,0,0,0]

for i in range(0,5):
    for j in range(0,4):
        relative_persons[i][j]=abs(persons[i][j]-now_person[j])
        vector_lengths[i] += relative_persons[i][j]**2

    vector_lengths[i] = math.sqrt(vector_lengths[i])    
    print(vector_lengths[i])

