
[y, Fs] = audioread('Jenkins (1).wav');
% Fs = sample rate
L = length(y);

for i = 0:L/512
clear z;
cla;
%samples = [1,Fs*.5];
z = y(1+(512*i):512*(i+1));
NFFT = 2^nextpow2(512);
%[y, Fs] = audioread('Jenkins (1).wav', samples);
sound(z, Fs);
f = Fs/2*linspace(0,1,NFFT/2+1);
plot(f,2*abs(z(1:NFFT/2+1)))
pause(0.05);
end
title('Single-Sided Amplitude Spectrum of y(t)')
xlabel('Frequency (Hz)')
ylabel('|Y(f)|')