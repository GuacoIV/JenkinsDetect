A = [1 2 3;
    4 5 6;
    7 8 9]
B = [1 1 1;
    1 1 1;
    1 1 1]
if (A - B > 0)
    answer = 'True';
else
    answer = 'False';
end
display(answer);
% So comparison of a whole matrix is true only when true for each entry of
% the matrix