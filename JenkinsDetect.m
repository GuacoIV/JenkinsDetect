%Profile a J
[y, Fs] = audioread('J1.wav');
L = length(y);
NFFT = 2^nextpow2(512);
f = Fs/2*linspace(0,1,NFFT/2+1);
resultJ = 2*abs(y(1:NFFT/2+1));
foundJ = 0;

[y, Fs] = audioread('Jenkins (7).wav');
% Fs = sample rate
L = length(y);
count = 0;
for i = 0:L/512
clear z;
cla;
z = y(1+(512*i):512*(i+1));
NFFT = 2^nextpow2(512);
sound(z, Fs);
f = Fs/2*linspace(0,1,NFFT/2+1);
plot(f,2*abs(z(1:NFFT/2+1)))
if (2*abs(z(1:NFFT/2+1)) - resultJ < .0007)
    answer = 'Found a J!';
    count=count+1;
    display(count);
    display(answer);
    foundJ = 1;
end
pause(0.05);
end
title('Single-Sided Amplitude Spectrum of y(t)')
xlabel('Frequency (Hz)')
ylabel('|Y(f)|')