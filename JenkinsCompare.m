function y = JenkinsCompare(x, sampleRate)
    %#codegen
    y = melcepst(x, sampleRate, 'M', 12, floor(3*log(sampleRate)), 256, 256/2, 0, 0.5);
end