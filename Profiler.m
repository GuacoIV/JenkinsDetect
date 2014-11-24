%Profile a J
%Each profile takes up 2.04 KB of space
[y, Fs] = audioread('J1.wav');
resultJ = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
foundJ = 0;

%Profile an e
[y, Fs] = audioread('E1.wav');
resultE = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
foundE = 0;

%Profile an n
[y, Fs] = audioread('N1.wav');
resultN = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
foundN = 0;
foundN2 = 0;

%Profile an k
[y, Fs] = audioread('K1.wav');
resultK = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
foundK = 0;

%Profile an i
[y, Fs] = audioread('I1.wav');
resultI = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
foundI = 0;

%Profile an s
[y, Fs] = audioread('S1.wav');
resultS = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
foundS = 0;