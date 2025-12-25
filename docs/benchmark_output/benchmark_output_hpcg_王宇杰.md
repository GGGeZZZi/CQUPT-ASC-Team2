# 命令
wyj@wyj-VMware-Virtual-Platform:~$ cd /home/wyj/hpcg-3.1/setup
wyj@wyj-VMware-Virtual-Platform:~/hpcg-3.1/setup$ cp Make.Linux_MPI Make.my_ubuntu
wyj@wyj-VMware-Virtual-Platform:~/hpcg-3.1/setup$ mkdir /home/wyj/hpcg-3.1/build
wyj@wyj-VMware-Virtual-Platform:~/hpcg-3.1/setup$ cd /home/wyj/hpcg-3.1/build
wyj@wyj-VMware-Virtual-Platform:~/hpcg-3.1/build$ ../configure my_ubuntu
wyj@wyj-VMware-Virtual-Platform:~/hpcg-3.1/build$ make
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/main.cpp -o src/main.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/CG.cpp -o src/CG.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/CG_ref.cpp -o src/CG_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/TestCG.cpp -o src/TestCG.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeResidual.cpp -o src/ComputeResidual.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ExchangeHalo.cpp -o src/ExchangeHalo.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/GenerateGeometry.cpp -o src/GenerateGeometry.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/GenerateProblem.cpp -o src/GenerateProblem.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/GenerateProblem_ref.cpp -o src/GenerateProblem_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/CheckProblem.cpp -o src/CheckProblem.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/MixedBaseCounter.cpp -o src/MixedBaseCounter.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/OptimizeProblem.cpp -o src/OptimizeProblem.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ReadHpcgDat.cpp -o src/ReadHpcgDat.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ReportResults.cpp -o src/ReportResults.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/SetupHalo.cpp -o src/SetupHalo.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/SetupHalo_ref.cpp -o src/SetupHalo_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/TestSymmetry.cpp -o src/TestSymmetry.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/TestNorms.cpp -o src/TestNorms.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/WriteProblem.cpp -o src/WriteProblem.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/YAML_Doc.cpp -o src/YAML_Doc.o
../src/YAML_Doc.cpp: In member function ‘std::string YAML_Doc::generateYAML()’:
../src/YAML_Doc.cpp:73:11: warning: ignoring return value of ‘int system(const char*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
   73 |     system(mkdir_cmd.c_str());
      |     ~~~~~~^~~~~~~~~~~~~~~~~~~
../src/YAML_Doc.cpp:62:29: warning: ‘%02d’ directive writing between 2 and 11 bytes into a region of size between 1 and 17 [-Wformat-overflow=]
   62 |   sprintf (sdate,"%04d.%02d.%02d.%02d.%02d.%02d",ptm->tm_year + 1900, ptm->tm_mon+1,
      |                             ^~~~
In file included from /usr/include/stdio.h:980,
                 from /usr/include/c++/13/cstdio:42,
                 from /usr/include/c++/13/ext/string_conversions.h:45,
                 from /usr/include/c++/13/bits/basic_string.h:4109,
                 from /usr/include/c++/13/string:54,
                 from /usr/include/c++/13/bits/locale_classes.h:40,
                 from /usr/include/c++/13/bits/ios_base.h:41,
                 from /usr/include/c++/13/ios:44,
                 from /usr/include/c++/13/ostream:40,
                 from /usr/include/c++/13/iostream:41,
                 from ../src/YAML_Doc.cpp:17:
In function ‘int sprintf(char*, const char*, ...)’,
    inlined from ‘std::string YAML_Doc::generateYAML()’ at ../src/YAML_Doc.cpp:62:11:
/usr/include/x86_64-linux-gnu/bits/stdio2.h:30:34: note: ‘__builtin___sprintf_chk’ output between 20 and 72 bytes into a destination of size 25
   30 |   return __builtin___sprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
      |          ~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   31 |                                   __glibc_objsize (__s), __fmt,
      |                                   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   32 |                                   __va_arg_pack ());
      |                                   ~~~~~~~~~~~~~~~~~
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/YAML_Element.cpp -o src/YAML_Element.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeDotProduct.cpp -o src/ComputeDotProduct.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeDotProduct_ref.cpp -o src/ComputeDotProduct_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/mytimer.cpp -o src/mytimer.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeOptimalShapeXYZ.cpp -o src/ComputeOptimalShapeXYZ.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeSPMV.cpp -o src/ComputeSPMV.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeSPMV_ref.cpp -o src/ComputeSPMV_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeSYMGS.cpp -o src/ComputeSYMGS.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeSYMGS_ref.cpp -o src/ComputeSYMGS_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeWAXPBY.cpp -o src/ComputeWAXPBY.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeWAXPBY_ref.cpp -o src/ComputeWAXPBY_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeMG_ref.cpp -o src/ComputeMG_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeMG.cpp -o src/ComputeMG.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeProlongation_ref.cpp -o src/ComputeProlongation_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/ComputeRestriction_ref.cpp -o src/ComputeRestriction_ref.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/CheckAspectRatio.cpp -o src/CheckAspectRatio.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/OutputFile.cpp -o src/OutputFile.o
../src/OutputFile.cpp: In member function ‘std::string OutputFile::generate()’:
../src/OutputFile.cpp:118:29: warning: ‘%02d’ directive writing between 2 and 11 bytes into a region of size between 1 and 17 [-Wformat-overflow=]
  118 |   sprintf (sdate,"%04d-%02d-%02d_%02d-%02d-%02d",ptm->tm_year + 1900, ptm->tm_mon+1,
      |                             ^~~~
In file included from /usr/include/stdio.h:980,
                 from /usr/include/c++/13/cstdio:42,
                 from /usr/include/c++/13/ext/string_conversions.h:45,
                 from /usr/include/c++/13/bits/basic_string.h:4109,
                 from /usr/include/c++/13/string:54,
                 from /usr/include/c++/13/bits/locale_classes.h:40,
                 from /usr/include/c++/13/bits/ios_base.h:41,
                 from /usr/include/c++/13/ios:44,
                 from /usr/include/c++/13/istream:40,
                 from /usr/include/c++/13/fstream:40,
                 from ../src/OutputFile.cpp:16:
In function ‘int sprintf(char*, const char*, ...)’,
    inlined from ‘std::string OutputFile::generate()’ at ../src/OutputFile.cpp:118:11:
/usr/include/x86_64-linux-gnu/bits/stdio2.h:30:34: note: ‘__builtin___sprintf_chk’ output between 20 and 72 bytes into a destination of size 25
   30 |   return __builtin___sprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
      |          ~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   31 |                                   __glibc_objsize (__s), __fmt,
      |                                   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   32 |                                   __va_arg_pack ());
      |                                   ~~~~~~~~~~~~~~~~~
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/GenerateCoarseProblem.cpp -o src/GenerateCoarseProblem.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/init.cpp -o src/init.o
/usr/bin/mpicxx -c -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 -I../src ../src/finalize.cpp -o src/finalize.o
/usr/bin/mpicxx -DHPCG_NO_OPENMP -I/home/wyj/hpcg-3.1/src -I/home/wyj/hpcg-3.1/src/my_ubuntu  -O3 -ffast-math -ftree-vectorize -ftree-vectorizer-verbose=0 src/main.o src/CG.o src/CG_ref.o src/TestCG.o src/ComputeResidual.o src/ExchangeHalo.o src/GenerateGeometry.o src/GenerateProblem.o src/GenerateProblem_ref.o src/CheckProblem.o src/MixedBaseCounter.o src/OptimizeProblem.o src/ReadHpcgDat.o src/ReportResults.o src/SetupHalo.o src/SetupHalo_ref.o src/TestSymmetry.o src/TestNorms.o src/WriteProblem.o src/YAML_Doc.o src/YAML_Element.o src/ComputeDotProduct.o src/ComputeDotProduct_ref.o src/mytimer.o src/ComputeOptimalShapeXYZ.o src/ComputeSPMV.o src/ComputeSPMV_ref.o src/ComputeSYMGS.o src/ComputeSYMGS_ref.o src/ComputeWAXPBY.o src/ComputeWAXPBY_ref.o src/ComputeMG_ref.o src/ComputeMG.o src/ComputeProlongation_ref.o src/ComputeRestriction_ref.o src/CheckAspectRatio.o src/OutputFile.o src/GenerateCoarseProblem.o src/init.o src/finalize.o  -o bin/xhpcg
wyj@wyj-VMware-Virtual-Platform:~/hpcg-3.1/build$ cd /home/wyj/hpcg-3.1/build/bin
wyj@wyj-VMware-Virtual-Platform:~/hpcg-3.1/build/bin$ nano hpcg.dat

# 输出结果
HPCG-Benchmark
version=3.1
Release date=March 28, 2019
Machine Summary=
Machine Summary::Distributed Processes=1
Machine Summary::Threads per processes=1
Global Problem Dimensions=
Global Problem Dimensions::Global nx=128
Global Problem Dimensions::Global ny=128
Global Problem Dimensions::Global nz=128
Processor Dimensions=
Processor Dimensions::npx=1
Processor Dimensions::npy=1
Processor Dimensions::npz=1
Local Domain Dimensions=
Local Domain Dimensions::nx=128
Local Domain Dimensions::ny=128
Local Domain Dimensions::Lower ipz=0
Local Domain Dimensions::Upper ipz=0
Local Domain Dimensions::nz=128
########## Problem Summary  ##########=
Setup Information=
Setup Information::Setup Time=8.85455
Linear System Information=
Linear System Information::Number of Equations=2097152
Linear System Information::Number of Nonzero Terms=55742968
Multigrid Information=
Multigrid Information::Number of coarse grid levels=3
Multigrid Information::Coarse Grids=
Multigrid Information::Coarse Grids::Grid Level=1
Multigrid Information::Coarse Grids::Number of Equations=262144
Multigrid Information::Coarse Grids::Number of Nonzero Terms=6859000
Multigrid Information::Coarse Grids::Number of Presmoother Steps=1
Multigrid Information::Coarse Grids::Number of Postsmoother Steps=1
Multigrid Information::Coarse Grids::Grid Level=2
Multigrid Information::Coarse Grids::Number of Equations=32768
Multigrid Information::Coarse Grids::Number of Nonzero Terms=830584
Multigrid Information::Coarse Grids::Number of Presmoother Steps=1
Multigrid Information::Coarse Grids::Number of Postsmoother Steps=1
Multigrid Information::Coarse Grids::Grid Level=3
Multigrid Information::Coarse Grids::Number of Equations=4096
Multigrid Information::Coarse Grids::Number of Nonzero Terms=97336
Multigrid Information::Coarse Grids::Number of Presmoother Steps=1
Multigrid Information::Coarse Grids::Number of Postsmoother Steps=1
########## Memory Use Summary  ##########=
Memory Use Information=
Memory Use Information::Total memory used for data (Gbytes)=1.49881
Memory Use Information::Memory used for OptimizeProblem data (Gbytes)=0
Memory Use Information::Bytes per equation (Total memory / Number of Equations)=714.69
Memory Use Information::Memory used for linear system and CG (Gbytes)=1.31911
Memory Use Information::Coarse Grids=
Memory Use Information::Coarse Grids::Grid Level=1
Memory Use Information::Coarse Grids::Memory used=0.157549
Memory Use Information::Coarse Grids::Grid Level=2
Memory Use Information::Coarse Grids::Memory used=0.0196941
Memory Use Information::Coarse Grids::Grid Level=3
Memory Use Information::Coarse Grids::Memory used=0.0024622
########## V&V Testing Summary  ##########=
Spectral Convergence Tests=
Spectral Convergence Tests::Result=PASSED
Spectral Convergence Tests::Unpreconditioned=
Spectral Convergence Tests::Unpreconditioned::Maximum iteration count=12
Spectral Convergence Tests::Unpreconditioned::Expected iteration count=12
Spectral Convergence Tests::Preconditioned=
Spectral Convergence Tests::Preconditioned::Maximum iteration count=1
Spectral Convergence Tests::Preconditioned::Expected iteration count=2
Departure from Symmetry |x'Ay-y'Ax|/(2*||x||*||A||*||y||)/epsilon=
Departure from Symmetry |x'Ay-y'Ax|/(2*||x||*||A||*||y||)/epsilon::Result=PASSED
Departure from Symmetry |x'Ay-y'Ax|/(2*||x||*||A||*||y||)/epsilon::Departure for SpMV=1.83153e-07
Departure from Symmetry |x'Ay-y'Ax|/(2*||x||*||A||*||y||)/epsilon::Departure for MG=1.30102e-07
########## Iterations Summary  ##########=
Iteration Count Information=
Iteration Count Information::Result=PASSED
Iteration Count Information::Reference CG iterations per set=50
Iteration Count Information::Optimized CG iterations per set=50
Iteration Count Information::Total number of reference iterations=100
Iteration Count Information::Total number of optimized iterations=100
########## Reproducibility Summary  ##########=
Reproducibility Information=
Reproducibility Information::Result=PASSED
Reproducibility Information::Scaled residual mean=3.94531e-07
Reproducibility Information::Scaled residual variance=0
########## Performance Summary (times in sec) ##########=
Benchmark Time Summary=
Benchmark Time Summary::Optimization phase=1.37e-07
Benchmark Time Summary::DDOT=1.18542
Benchmark Time Summary::WAXPBY=1.03443
Benchmark Time Summary::SpMV=9.56881
Benchmark Time Summary::MG=60.5045
Benchmark Time Summary::Total=72.2996
Floating Point Operations Summary=
Floating Point Operations Summary::Raw DDOT=1.26668e+09
Floating Point Operations Summary::Raw WAXPBY=1.26668e+09
Floating Point Operations Summary::Raw SpMV=1.13716e+10
Floating Point Operations Summary::Raw MG=6.34715e+10
Floating Point Operations Summary::Total=7.73764e+10
Floating Point Operations Summary::Total with convergence overhead=7.73764e+10
GB/s Summary=
GB/s Summary::Raw Read B/W=6.59452
GB/s Summary::Raw Write B/W=1.52403
GB/s Summary::Raw Total B/W=8.11855
GB/s Summary::Total with convergence and optimization phase overhead=7.92445
GFLOP/s Summary=
GFLOP/s Summary::Raw DDOT=1.06855
GFLOP/s Summary::Raw WAXPBY=1.22452
GFLOP/s Summary::Raw SpMV=1.1884
GFLOP/s Summary::Raw MG=1.04904
GFLOP/s Summary::Raw Total=1.07022
GFLOP/s Summary::Total with convergence overhead=1.07022
GFLOP/s Summary::Total with convergence and optimization phase overhead=1.04463
User Optimization Overheads=
User Optimization Overheads::Optimization phase time (sec)=1.37e-07
User Optimization Overheads::Optimization phase time vs reference SpMV+MG time=2.33416e-07
DDOT Timing Variations=
DDOT Timing Variations::Min DDOT MPI_Allreduce time=0.00133688
DDOT Timing Variations::Max DDOT MPI_Allreduce time=0.00133688
DDOT Timing Variations::Avg DDOT MPI_Allreduce time=0.00133688
Final Summary=
Final Summary::HPCG result is VALID with a GFLOP/s rating of=1.04463
Final Summary::HPCG 2.4 rating for historical reasons is=1.07022
Final Summary::Reference version of ComputeDotProduct used=Performance results are most likely suboptimal
Final Summary::Reference version of ComputeSPMV used=Performance results are most likely suboptimal
Final Summary::Reference version of ComputeMG used=Performance results are most likely suboptimal
Final Summary::Reference version of ComputeWAXPBY used=Performance results are most likely suboptimal
Final Summary::Results are valid but execution time (sec) is=72.2996
Final Summary::Official results execution time (sec) must be at least=1800
