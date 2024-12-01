a = input().split()
a_coldSymptoms = a[0]
a_temperature = int(a[1])

b = input().split()
b_coldSymptoms = b[0]
b_temperature = int(b[1])

c = input().split()
c_coldSymptoms = c[0]
c_temperature = int(c[1])

clinicA = 0
clinicB = 0
clinicC = 0
clinicD = 0

if a_coldSymptoms == 'Y' : #감기 있을 떄
    if a_temperature >= 37 : #37도 이상이면
        clinicA += 1 #A + 1
    else : #37도 이하면
        clinicC += 1 #C + 1
else : #감기 없을 때
    if a_temperature >= 37 : #37도 이상이면
        clinicB += 1 #B + 1
    else : # 37도 이하면
        clinicD += 1 #D + 1

if b_coldSymptoms == 'Y' : #감기 있을 떄
    if b_temperature >= 37 : #37도 이상이면
        clinicA += 1 #A + 1
    else : #37도 이하면
        clinicC += 1 #C + 1
else : #감기 없을 때
    if b_temperature >= 37 : #37도 이상이면
        clinicB += 1 #B + 1
    else : # 37도 이하면
        clinicD += 1 #D + 1

if c_coldSymptoms == 'Y' : #감기 있을 떄
    if c_temperature >= 37 : #37도 이상이면
        clinicA += 1 #A + 1
    else : #37도 이하면
        clinicC += 1 #C + 1
else : #감기 없을 때
    if c_temperature >= 37 : #37도 이상이면
        clinicB += 1 #B + 1
    else : # 37도 이하면
        clinicD += 1 #D + 1

if clinicA >= 2 :
    print('E')
else :
    print('N')
        

