%Profile a J
%Each profile takes up 2.04 KB of space
[y, Fs] = audioread('J1.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultJ = 2*abs(Y(1:NFFT/2+1));
foundJ = 0;

%Profile an e
[y, Fs] = audioread('E1.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultE = 2*abs(Y(1:NFFT/2+1));
foundE = 0;

%Profile an n
[y, Fs] = audioread('N1.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultN = 2*abs(Y(1:NFFT/2+1));
foundN = 0;

%Profile an k
[y, Fs] = audioread('K1.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultK = 2*abs(Y(1:NFFT/2+1));
foundK = 0;

[y, Fs] = audioread('Jenkins (1).wav');
%sound(y, Fs);
% Fs = sample rate
L = length(y);
count = 0;
for i = 0:L/512
clear z;
cla;
z = y(1+(512*i):512*(i+1));
NFFT = 2^nextpow2(512);
sound(z, Fs);
Z = fft(z, NFFT)/512;
f = Fs/2*linspace(0,1,NFFT/2+1);
plot(f,2*abs(Z(1:NFFT/2+1)))
if (abs(2*abs(Z(1:NFFT/2+1)) - resultJ) < .01)
    answer = 'Found a J!';
    count=count+1;
    display(count);
    display(answer);
    foundJ = 1;
end
if (foundJ == 1 & abs(2*abs(Z(25:NFFT/2+1)) - resultE(25:NFFT/2+1)) < .011) %25 cuts the lower frequencies
    answer = 'Found an E!';
    count=count+1;
    display(count);
    display(answer);
    foundE = 1;
end
if (foundE == 1 & abs(2*abs(Z(25:NFFT/2+1)) - resultN(25:NFFT/2+1)) < .019) %25 cuts the lower frequencies
    answer = 'Found an N!';
    count=count+1;
    display(count);
    display(answer);
    foundN = 1;
end
if (foundN == 1 & abs(2*abs(Z(1:NFFT/2+1)) - resultK(1:NFFT/2+1)) < .01) %25 cuts the lower frequencies
    answer = 'Found an K!';
    count=count+1;
    display(count);
    display(answer);
    foundK = 1;
end
pause(0.01);
plot (f, abs(2*abs(Z(1:NFFT/2+1)) - resultJ));
pause(0.01);
end
title('Single-Sided Amplitude Spectrum of y(t)')
xlabel('Frequency (Hz)')
ylabel('|Y(f)|')