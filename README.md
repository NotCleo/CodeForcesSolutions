# CodeForcesSolutions

This repo will be updated with whatever easy stuff I solved in my first year (Disclaimer : Not a pro!)


Some useful things I learnt :

1) See Code 5 : When you want to take an input like 1032318 as a whole number string, but treat each digit individually (as integers), you should read it as a char array and then convert each character to an integer using:

         int_array[i] = char_array[i] - '0';

2) See Code 6 : Really interesting testcases, You can visit my other repo Quant Bank where I have dissected its mathematical proof

3) See Code 7 : Absolute moster of a question! for a 1200 level, here's something I noticed,

   Why C++ code was 40ms faster than C (although I have used the C approach)

        C++ uses ios::sync_with_stdio(false) and cin.tie(0) for highly optimized I/O.
    
        g++ often applies more aggressive optimizations than gcc under competitive judge settings.
    
        Judge environments may favor C++ by default with faster runtime settings and memory alignment.
    
        C++ compilation typically uses flags like -O2 or -O3, enhancing loop unrolling and constant folding.

    Why this code worked while the threading approach (pthreads method) didn't

        The working code avoids simulating each of the k operations individually, reducing complexity.
    
        It uses number-theory tricks to skip directly to relevant values via modular arithmetic and division rules.
    
        Threading adds unnecessary overhead and complexity when input-output must be strictly ordered.


4) See Code 11 : I was unable to get it to work in under 1 second for some of the testcases, so I applied timer.h to figure that out, see Exclusive1.txt file

5) See Code 15 : I got too naive in the matrix rotation that one ends up rotation without a temporary variable, leading to overwriting values and ending with a complete scalar matrix

6) Whenever dealing with any sum of digits problem, study the testcases that'll help with building a structured plan and avoid massive iterations

