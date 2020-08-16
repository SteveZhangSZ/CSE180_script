class Parallel < Formula
  desc "Shell command parallelization utility"
  homepage "https://savannah.gnu.org/projects/parallel/"
  url "https://ftp.gnu.org/gnu/parallel/parallel-20190222.tar.bz2"
  mirror "https://ftpmirror.gnu.org/parallel/parallel-20190222.tar.bz2"
  sha256 "86b1badc56ee2de1483107c2adf634604fd72789c91f65e40138d21425906b1c"
  head "https://git.savannah.gnu.org/git/parallel.git"

  if Tab.for_name("moreutils").with?("parallel")
    conflicts_with "moreutils",
      :because => "both install a `parallel` executable."
  end

  def install
    system "./configure", "--prefix=#{prefix}"
    system "make", "install"
  end

  test do
    assert_equal "test\ntest\n",
                 shell_output("#{bin}/parallel --will-cite echo ::: test test")
  end
end
