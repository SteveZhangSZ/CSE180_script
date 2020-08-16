class Barrnap < Formula
  desc "BAsic Rapid Ribosomal RNA Predictor"
  homepage "https://github.com/tseemann/barrnap"
  url "https://github.com/tseemann/barrnap/archive/0.9.tar.gz"
  sha256 "36c27cd4350531d98b3b2fb7d294a2d35c15b7365771476456d7873ba33cce15"

  depends_on "hmmer"
  depends_on "bedtools"

  def install
    prefix.install Dir["*"]
  end

  test do
    assert_match "##gff-version", shell_output("#{bin}/barrnap -q #{prefix}/examples/nohits.fna")
    assert_match "Name=16S_rRNA", shell_output("#{bin}/barrnap -q #{prefix}/examples/small.fna")
    assert_match "Name=16S_rRNA", shell_output("#{bin}/barrnap -q --kingdom mito #{prefix}/examples/mitochondria.fna")
    out = testpath/"hits.fa"
    system "#{bin}/barrnap", "--outseq", out, "#{prefix}/examples/small.fna"
    assert_predicate out, :exist?
  end
end
