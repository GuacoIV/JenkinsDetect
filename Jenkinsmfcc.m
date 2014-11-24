accuracy = 14;
[y, Fs] = audioread('Jenkins (1).wav');
one = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);

 for i = 1:11
     whichOne = i;
    strwhichOne = strcat('Jenkins (', num2str(whichOne), ').wav');
    [y, Fs] = audioread(strwhichOne);
    sound(y, 44100);
    two = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
    sizeOne = size(one);
    sizeTwo = size(two);
    if (sizeOne > sizeTwo)
        smalestSize = sizeTwo;
    else
        smallestSize = sizeOne;
    end
    result = one(1:smallestSize) - two (1:smallestSize);
    max(result)
    min(result)
    if (abs(result) < accuracy)
        answer = 'Yes!'
    else answer = 'No!'
    end
    pause(1.5);
 end

 filesToTest = {'EdJenkins1.wav', 'EdJenkinsFast.wav', 'EdJenkinsFast.wav', 'EdJenkinsLoud.wav', 'Jennifer.wav', 'Jenny.wav', 'Jerry.wav', 'Jerry2.wav', 'JimBob.wav', 'Gingerbread.wav', 'Turn.wav', 'Store.wav', 'Cupcake.wav', 'Alarm.wav'};

for i = 1 : (size(filesToTest, 2))
    [y, Fs] = audioread(char(filesToTest(i)));
    sound(y, 44100);
    two = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
    sizeOne = size(one);
    sizeTwo = size(two);
    if (sizeOne > sizeTwo)
        smalestSize = sizeTwo;
    else
        smallestSize = sizeOne;
    end
    result = one(1:smallestSize) - two (1:smallestSize);
    max(result)
    min(result)
    if (abs(result) < accuracy)
        answer = 'Yes!'
    else answer = 'No!'
    end
    pause(1.5);
end