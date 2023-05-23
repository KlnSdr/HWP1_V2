set out "plot.png"
set terminal png
set title "Stromstärke an der LED"
set xlabel "U in V"
set ylabel "I in A"
set grid
plot "data.txt" using 1:2 title "" with lines
