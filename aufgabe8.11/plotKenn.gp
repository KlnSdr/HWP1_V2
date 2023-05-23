set out "plotKenn.png"
set terminal png
set title "Bipolartransistor Kennlinien"
set xlabel "Schritte à 0.25V"
set ylabel "I in mA"
set grid
plot "data0.txt" using :1 title "0V" with lines,\
    "data1.txt" using :1 title "1V" with lines,\
    "data1.25.txt" using :1 title "1.25V" with lines,\
    "data1.5.txt" using :1 title "1.5V" with lines,\
    "data1.75.txt" using :1 title "1.75V" with lines,\
    "data2.txt" using :1 title "2V" with lines,\
    "data2.25.txt" using :1 title "2.25V" with lines
