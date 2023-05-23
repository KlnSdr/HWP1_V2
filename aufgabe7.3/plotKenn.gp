set out "plotKenn.png"
set terminal png
set title "Dioden Kennlinien"
set xlabel "U in V"
set ylabel "I in A"
set xtics 0.2
set grid
plot "diode1.txt" using 1:2 title "d1" with lines,\
    "diode2.txt" using 1:2 title "d2" with lines,\
    "diode3.txt" using 1:2 title "d3" with lines,\
    "diode4.txt" using 1:2 title "d4" with lines,\
    "diode5.txt" using 1:2 title "d5" with lines,\
    "diode6.txt" using 1:2 title "d6" with lines
