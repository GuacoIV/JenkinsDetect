%Profile a J
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

[y, Fs] = audioread('Jenkins (1).wav');
sound(y, Fs);
% Fs = sample rate
L = length(y);
%{count = 0;
%for i = 0:L/512
%clear z;
%cla;
%z = y(1+(512*i):512*(i+1));
%NFFT = 2^nextpow2(512);
%sound(z, Fs);
%Z = fft(z, NFFT)/512;
%f = Fs/2*linspace(0,1,NFFT/2+1);
%plot(f,2*abs(Z(1:NFFT/2+1)))
%if (2*abs(Z(1:NFFT/2+1)) - resultJ < .0007)
%    answer = 'Found a J!';
%    count=count+1;
%    display(count);
%    display(answer);
%    foundJ = 1;
%end
%if (foundJ == 1 & abs(2*abs(Z(1:NFFT/2+1)) - resultE) < .2)
%    answer = 'Found an E!';
%    count=count+1;
%    display(count);
%    display(answer);
%    foundE = 1;
%end
%pause(0.05);
%end
%title('Single-Sided Amplitude Spectrum of y(t)')
%xlabel('Frequency (Hz)')
%ylabel('|Y(f)|')