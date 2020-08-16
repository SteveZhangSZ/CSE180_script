myFile = open("/Users/stevezhang/Desktop/Cellar/prokka/1.13/bin/PROKKA_WGS_Scaffolds/PROKKA_03122019.tsv")

hypoProtein = 0
CDS = 0
tRNA = 0
for line in myFile:
    target = myFile.readline()
    if "CDS" in target:
        CDS+=1
    if "hypothetical protein" in target:
        hypoProtein+=1
    if "tRNA" in target:
        tRNA+=1
print("Number of CDS:")
print(CDS)
print("Number of hypothetical proteins: ")
print(hypoProtein)
print("Number of tRNA: ")
print(tRNA)
