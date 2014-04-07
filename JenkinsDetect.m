
[y, Fs] = audioread('Jenkins (1).wav');
% Fs = sample rate
L = length(y);
%for i = 1:L/(Fs*.5)
samples = [1,Fs*.5];
[y, Fs] = audioread('Jenkins (1).wav', samples);
sound(y, Fs);
plot(abs(fft(y)));
clear y
%end