
[y, Fs] = audioread('Jenkins (1).wav');
% Fs = sample rate
L = length(y);
%for i = 1:L/512
i=30;
samples = [1,Fs*.5];
z = y(1+(512*i):512*i);
%[y, Fs] = audioread('Jenkins (1).wav', samples);
sound(z, Fs);
plot(abs(fft(y)));
pause(0.1);
%clear y
%end