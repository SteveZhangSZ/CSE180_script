
myFile = open("PROKKA_GTF.gtf")

writeFile = open("KnownGenesProkka.gtf", "a")
print("Running withGene_id.py...")

for line in myFile:
    target = myFile.readline()
    if "gene_name" in target:
        writeFile.write(target.replace("gene_name","gene_id")) #intermediateFile changed to writeFile

print("withGene_id.py done")


