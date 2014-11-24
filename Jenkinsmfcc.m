Profiler;
accuracy = 4.5;
waitTime = 1.3;
[y, Fs] = audioread('Jenkins (1).wav');
one = melcepst(y, 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);

 for i = 1:12
    whichOne = i;
    strwhichOne = strcat('Jenkins (', num2str(whichOne), ').wav');
    display(strwhichOne);
    [y, Fs] = audioread(strwhichOne);
    sound(y, 44100);
    foundJ = 0;
    foundE = 0;
    foundN = 0;
    foundK = 0;
    foundI = 0;
    foundN2 = 0;
    foundS = 0;
    for j = 1:(size(y, 1)/512)
        resultNow = melcepst(y((1+((j-1)*512)):(j*512), :), 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
        if (foundJ == 0)
            result = resultJ - resultNow;
            if (abs(result) < accuracy)
                foundJ = 1;
            end
        elseif (foundE == 0)
            result = resultE - resultNow;
             if (abs(result) < accuracy)
                foundE = 1;
            end
        elseif (foundN == 0)
            result = resultN - resultNow;
             if (abs(result) < accuracy)
                foundN = 1;
            end
        elseif (foundK == 0)
            result = resultK - resultNow;
             if (abs(result) < accuracy)
                foundK = 1;
            end
        elseif (foundI == 0)
            result = resultI - resultNow;
             if (abs(result) < accuracy)
                foundI = 1;
             end
        elseif (foundN2 == 0)
            result = resultN - resultNow;
             if (abs(result) < accuracy)
                foundN2 = 1;
            end
        elseif (foundS == 0)
            result = resultS - resultNow;
             if (abs(result) < accuracy)
                foundS = 1;
            end
        end
        if (j == round((size(y, 1)/512)) - 1)
            if (foundJ == 1 && foundE == 1 && foundN == 1 && foundK == 1 && foundI == 1 && foundN2 == 1 && foundS == 1)
                answer = 'Yes'
            else
                answer = 'No'
            end
        end
        max(result);
        min(result);

    end
    pause(waitTime);
 end

 filesToTest = {'Alarm.wav', 'Cupcake.wav', 'EdJenkins1.wav', 'EdJenkinsFast.wav', 'EdJenkinsFast.wav',... 
     'EdJenkinsLoud.wav', 'EdJenkinsMediumDist.wav', 'EdJenkinsSlow.wav', 'EdJenkinsSlow2.wav',...
     'EdJenkinsLargeRoomFarDist.wav','Edward.wav', 'Elephant.wav', 'Geronamo.wav',...
     'Gingerbread.wav', 'Headphones.wav', 'Jack.wav', 'Jennifer.wav', 'Jenny.wav', 'Jerry.wav',... 
     'JimBob.wav', 'Mouse.wav', 'Paper.wav', 'Pumpkin.wav', 'Sheet.wav', 'Sheldon.wav',...
     'Store.wav', 'Turn.wav', 'Watermelon.wav'};

for i = 1 : (size(filesToTest, 2))
   [y, Fs] = audioread(char(filesToTest(i)));
   display(char(filesToTest(i)));
    sound(y, 44100);
    foundJ = 0;
    foundE = 0;
    foundN = 0;
    foundK = 0;
    foundI = 0;
    foundN2 = 0;
    foundS = 0;
    for j = 1:(size(y, 1)/512)
        resultNow = melcepst(y((1+((j-1)*512)):(j*512), :), 44100, 'M', 12, floor(3*log(44100)), 512, 512/2, 0, 0.5);
        if (foundJ == 0)
            result = resultJ - resultNow;
            if (abs(result) < accuracy)
                foundJ = 1;
            end
        elseif (foundE == 0)
            result = resultE - resultNow;
             if (abs(result) < accuracy)
                foundE = 1;
            end
        elseif (foundN == 0)
            result = resultN - resultNow;
             if (abs(result) < accuracy)
                foundN = 1;
            end
        elseif (foundK == 0)
            result = resultK - resultNow;
             if (abs(result) < accuracy)
                foundK = 1;
            end
        elseif (foundI == 0)
            result = resultI - resultNow;
             if (abs(result) < accuracy)
                foundI = 1;
             end
         elseif (foundN2 == 0)
            result = resultN - resultNow;
             if (abs(result) < accuracy)
                foundN2 = 1;
            end
        elseif (foundS == 0)
            result = resultS - resultNow;
             if (abs(result) < accuracy)
                foundS = 1;
            end
        end
        if (j == round((size(y, 1)/512)) - 1)
            if (foundJ == 1 && foundE == 1 && foundN == 1 && foundK == 1 && foundI == 1 && foundN2 == 1 && foundS == 1)
                answer = 'Yes'
            else
                answer = 'No'
            end
        end
        max(result);
        min(result);

    end
    pause(waitTime);
end