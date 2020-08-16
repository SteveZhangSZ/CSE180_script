"must replace gene_name with gene_id"
"./subread-buildindex -o SPAdes_scaffolds /Users/stevezhang/Desktop/SPAdes-3.13.0-Darwin/bin/output/scaffolds.fasta "
'''./subread-align -i SPAdes_scaffolds -r
/Users/stevezhang/Desktop/miniconda3/bin/amyloliquefaciensRNASEQ.fastq -t 0 -o amylo_subread_results_counts'''

"./featureCounts -a KnownGenesProkka.gtf -o featureCountsSummary -t 'transcript' amylo_subread_results_counts.bam "
"cat featureCountsSummary | cut -f 1,7 | sort -k 2,2 -n -r | head"


myFile = open("PROKKA_03122019.gtf")
intermediateFile = open("gene_name_to_gene_ID", "a")
writeFile = open("KnownGenesProkka.gtf", "a")

for line in myFile:
    target = myFile.readline()
    if "gene_name" in target:
        writeFile.write(target.replace("gene_name","gene_id")) #intermediateFile changed to writeFile



'''
echo hello world

read num
result=$(python /Users/stevezhang/Desktop/python_test/inputTest.py $num)

echo "result is "$result

ex=$(python /Users/stevezhang/Desktop/python_test/inputTest.py $result)

echo "ex is "$ex
'''
