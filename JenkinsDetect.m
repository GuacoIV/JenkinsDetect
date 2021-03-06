
Profiler

[y, Fs] = audioread('Jenkins (2).wav');
%sound(y, Fs);
% Fs = sample rate
L = length(y);
count = 0;
NFFT = 2^nextpow2(512);
for i = 0:L/512
%clear z;
%cla;
z = y(1+(512*i):512*(i+1));
%sound(z, Fs);
Z = fft(z, NFFT)/512;
%f = Fs/2*linspace(0,1,NFFT/2+1);
%plot(f,2*abs(Z(1:NFFT/2+1)))
%cla;
%count=count+1;
%display(count);
%melcepst(z, 44100, 'M', 12, floor(3*log(4100)), 512, 512/2, 0, 0.5)
%pause(0.02);

if (abs(2*abs(Z(1:NFFT/2+1)) - resultJ) < .01)
    answer = 'Found a J!';
    %count=count+1;
    %display(count);
    %display(answer);
    foundJ = 1;
end
if (foundJ == 1 & abs(2*abs(Z(25:NFFT/2+1)) - resultE(25:NFFT/2+1)) < .011) %25 cuts the lower frequencies
    answer = 'Found an E!';
    %count=count+1;
    %display(count);
    %display(answer);
    foundE = 1;
end
if (foundE == 1 & abs(2*abs(Z(25:NFFT/2+1)) - resultN(25:NFFT/2+1)) < .019) %25 cuts the lower frequencies
    answer = 'Found an N!';
    %count=count+1;
    %display(count);
    %display(answer);
    foundN = 1;
end
if (foundN == 1 & abs(2*abs(Z(1:NFFT/2+1)) - resultK(1:NFFT/2+1)) < .01) %25 cuts the lower frequencies
    answer = 'Found an K!';
    %count=count+1;
   % display(count);
    %display(answer);
    foundK = 1;
end
if (foundK == 1 & abs(2*abs(Z(1:NFFT/2+1)) - resultK(1:NFFT/2+1)) < .01)
    answer = 'Found an I!';
    %count=count+1;
    %display(count);
   % display(answer);
    foundI = 1;
end
if (foundI == 1 & abs(2*abs(Z(1:NFFT/2+1)) - resultK(1:NFFT/2+1)) < .01)
    answer = 'Found an S!';
    %count=count+1;
    %display(count);
    %display(answer);
    foundS = 1;
end

%pause(0.01);
%plot (f, abs(2*abs(Z(1:NFFT/2+1)) - resultJ));
%pause(0.01);
end

%title('Single-Sided Amplitude Spectrum of y(t)')
%xlabel('Frequency (Hz)')
%ylabel('|Y(f)|')