/*
0   1   2   3   4   5       │       6   7   8   9   10  11
12  13  14  15  16  17      │       18  19  20  21  22  23
24  25  26  27  28  29  30  │   31  32  33  34  35  36  37
38  39  40  41  42  43      │       44  45  46  47  48  49
            50  51  52      │       53  54  55
                56  57      │       58  59
*/
/*

│ LN5 LN4 LN3 LN2 LN1 LN0     │     RN0 RN1 RN2 RN3 RN4 RN5 │
│ LT5 LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 RT5 │
│ LM5 LM4 LM3 LM2 LM1 LM0 LEC │ REC RM0 RM1 RM2 RM3 RM4 RM5 │
│ LB5 LB4 LB3 LB2 LB1 LB0     │     RB0 RB1 RB2 RB3 RB4 RB5 │
            │ LH4 LH3 LH2     │     RH2 RH3 RH4 │
                 │LH1 LH0     │     RH0 RH1 │
*/

#pragma once

#define LN0  5  // left-number row
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

#define RN0  6  // right-number row
#define RN1  7
#define RN2  8
#define RN3  9
#define RN4 10
#define RN5 11

#define LT0 17  // left-top row
#define LT1 16
#define LT2 15
#define LT3 14
#define LT4 13
#define LT5 12

#define RT0 18  // right-top row
#define RT1 19
#define RT2 20
#define RT3 21
#define RT4 22
#define RT5 23

#define LM0 29  // left-middle row
#define LM1 28
#define LM2 27
#define LM3 26
#define LM4 25
#define LM5 24

#define LEC 30  // left encoder key
#define REC 31  // right encoder key

#define RM0 32  // right-middle row
#define RM1 33
#define RM2 34
#define RM3 35
#define RM4 36
#define RM5 37

#define LB0 43  // left-bottom row
#define LB1 42
#define LB2 41
#define LB3 40
#define LB4 39
#define LB5 38

#define RB0 44  // right-bottom row
#define RB1 45
#define RB2 46
#define RB3 47
#define RB4 48
#define RB5 49

#define LH0 57  // left thumb keys
#define LH1 56
#define LH2 52
#define LH3 51
#define LH4 50

#define RH0 58  // right thumb keys
#define RH1 59
#define RH2 53
#define RH3 54
#define RH4 55


#define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5 LN0 LN1 LN2 LN3 LN4 LN5
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RT5 RB0 RB1 RB2 RB3 RB4 RB5 RN0 RN1 RN2 RN3 RN4 RN5
#define KEYS_T LH4 LH3 LH2 LH1 LH0 RH0 RH1 RH2 RH3 RH4 RH5
