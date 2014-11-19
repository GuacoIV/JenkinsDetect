%Profile a J
%Each profile takes up 2.04 KB of space
[y, Fs] = audioread('J2.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultJ = 2*abs(Y(1:NFFT/2+1));
foundJ = 0;

%Profile an e
[y, Fs] = audioread('E2.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultE = 2*abs(Y(1:NFFT/2+1));
foundE = 0;

%Profile an n
[y, Fs] = audioread('N2.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultN = 2*abs(Y(1:NFFT/2+1));
foundN = 0;

%Profile an k
[y, Fs] = audioread('K2.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultK = 2*abs(Y(1:NFFT/2+1));
foundK = 0;

%Profile an i
[y, Fs] = audioread('I2.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultI = 2*abs(Y(1:NFFT/2+1));
foundI = 0;

%Profile an s
[y, Fs] = audioread('S2.wav');
NFFT = 2^nextpow2(512);
Y = fft(y, NFFT)/512;
resultS = 2*abs(Y(1:NFFT/2+1));
foundS = 0;