# gSC-MCC: A gCov based SC-MCC profiler

gSC-MCC is a generalized tool that can be plugged with any test case generator. It requires a set of test cases and a program to produce SC-MCC% with a detailed report.     

The main script file is main-scmcc.sh. The programs in both CBMC and GCOV versions are stored in the Programs/. Currently in this version, there are three primary components:

CBMC, the Test Case Generator; this is responsible for producing the test suite for a given input C program(CBMC version. The related code is in CBMC/.

Sequence Generator; this is used to generate the SC-MCC sequences for a given input C program(GCOV version). The related code is in SequenceGenerator/.

Additionally all the generated results are available in gSC-MCC_Results/. And the run-gscmcc.sh file contains the commands to execute the programs.

