# CSE180_script

## How to use

The script will prompt you to first enter the file path of the whole genome sequencing FASTQ file, then prompt you to enter the corresponding RNA-seq FASTQ file of the same species.

## How it works

The script uses SPAdes to assemble the genome, storing the output into a file named scaffolds.fasta. This fasta file is inputted into PROKKA,
a prokaryotic gene annotation tool in the "Cellar" folder, which annotates the genome and de novo predicts gene locations. 
PROKKA outputs a .gtf file which labels nodes with the name of the gene occupying there and its corresponding transcript ID.

There's currently an error that revolves around not being to call "tbl2asn", which interferes with Prokka. Despite this, the rest of the commands of the script can be run without problem. 

Subread-buildindex uses the scaffolds file to build an index, and the outputted index files are inputted into 
subread-align, which aligns them with the RNA-seq data. The results are outputted into a BAM file. Gffread converts the .gtf file from PROKKA into a 
.gff file so it can be usable with the featureCounts tool, which contains the frequency of genes in the genome, thus highlighting which are the most active.

The genes that are printed first, AKA are at the top, are the most active.