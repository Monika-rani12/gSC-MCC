# gSC-MCC
gSC-MCC: A gCov based SC-MCC profiler

Currently, the existing gCov profiler gives line coverage and branch coverage. As we know that line and branch coverages are weak coverage criteria. Also, the literature recommends that SC-MCC  should be used in safety-critical applications instead of Modified Condition/Decision Coverage (MC/DC) which is the universally accepted criterion. So, there exists no profiler to produce the information of feasible sequence properties of SC-MCC which is important to compute a final score. Our proposed tool, gSC-MCC is a generalized tool that can be plugged with any test case generator. It requires a set of test cases and a program to produce SC-MCC% with a detailed report.     
