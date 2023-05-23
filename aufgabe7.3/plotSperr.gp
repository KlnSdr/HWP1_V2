set out "plotSperr.png"
set terminal png
set title "Dioden Kennlinien"
set xlabel "U in V"
set ylabel "I in A"
set xtics 0.2
set grid
plot "diode4Sperr.txt" using 1:2 title "d4" with lines,\
    "diode3Sperr.txt" using 1:2 title "d3" with lines,\
    "diode1Sperr.txt" using 1:2 title "d1" with lines,\
    "diode5Sperr.txt" using 1:2 title "d5" with lines,\
    "diode6Sperr.txt" using 1:2 title "d6" with lines,\
    "diode2Sperr.txt" using 1:2 title "d2" with lines
