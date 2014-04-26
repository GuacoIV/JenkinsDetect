accuracy = 14;
[y, Fs] = audioread('Jenkins (1).wav');
one = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);

for (i = 1:11)
    whichOne = i;
    strwhichOne = strcat('Jenkins (', num2str(whichOne), ').wav');
    [y, Fs] = audioread(strwhichOne);
    sound(y, 44100);
    two = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
    result = one(1:3000) - two (1:3000);
    if (abs(result) < accuracy)
        answer = 'Yes!'
    else answer = 'No!'
    end
    pause(1.5);
end

pause(1.5);
[y, Fs] = audioread('Gingerbread.wav');
sound(y, 44100);
two = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
result = one(1:3000) - two (1:3000);
if (abs(result) < accuracy)
    answer = 'Yes!'
else answer = 'No!'
end
  pause(1.5); 
[y, Fs] = audioread('Turn.wav');
sound(y, 44100);
two = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
result = one(1:2000) - two (1:2000);
if (abs(result) < accuracy)
    answer = 'Yes!'
else answer = 'No!'
end
pause(1.5);
[y, Fs] = audioread('Store.wav');
sound(y, 44100);
two = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
result = one(1:2100) - two (1:2100);
if (abs(result) < accuracy)
    answer = 'Yes!'
else answer = 'No!'
end
pause(1.5);
[y, Fs] = audioread('Cupcake.wav');
sound(y, 44100);
two = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
result = one(1:2500) - two (1:2500);
if (abs(result) < accuracy)
    answer = 'Yes!'
else answer = 'No!'
end
pause(1.6);
[y, Fs] = audioread('Alarm.wav');
sound(y, 44100);
two = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
result = one(1:2500) - two (1:2500);
if (abs(result) < accuracy)
    answer = 'Yes!'
else answer = 'No!'
end