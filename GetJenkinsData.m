function y = GetJenkinsData()
     [x, Fs] = audioread('Jenkins (1).wav');
     y = x;
end