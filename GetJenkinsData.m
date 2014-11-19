function y = GetJenkinsData()
     [x, Fs] = audioread('Jenkins (1).wav');
     y = x(1 : 256);
end