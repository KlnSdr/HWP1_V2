set out "plot.png"
set terminal png
set title "Spannung an der LED"
set xlabel "Ua in V"
set ylabel "Ue in V"
set grid
plot "data.txt" using 1:2 title "" with lines
