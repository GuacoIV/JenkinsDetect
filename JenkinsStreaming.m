Microphone = dsp.AudioRecorder;
Speaker = dsp.AudioPlayer;
SpecAnalyzer = dsp.SpectrumAnalyzer;
count = 0;
lastTimeFound = 0;
maxWaitTimeBetweenLetters = 0.35;
Profiler;
accuracy = 5;
tic;
foundJ = 0;
foundE = 0;
foundN = 0;
foundK = 0;
foundI = 0;
foundN2 = 0;
foundS = 0;
display('Starting');
while (toc < 20)
    audio = step(Microphone);
    %step(SpecAnalyzer, audio);
    resultNow = melcepst(audio, 44100, 'M', 12, floor(3*log(44100)), 1024, 1024/2, 0, 0.5);
    %step(Speaker, audio);
    if (foundJ == 0)
        result = resultJ - resultNow;
        if (abs(result) < accuracy)
            foundJ = 1;
            lastTimeFound = toc;
        end
    elseif (foundE == 0)
        result = resultE - resultNow;
         if (abs(result) < accuracy)
            foundE = 1;
            lastTimeFound = toc;
        end
    elseif (foundN == 0)
        result = resultN - resultNow;
         if (abs(result) < accuracy)
            foundN = 1;
            lastTimeFound = toc;
        end
    elseif (foundK == 0)
        result = resultK - resultNow;
         if (abs(result) < accuracy)
            foundK = 1;
            lastTimeFound = toc;
        end
    elseif (foundI == 0)
        result = resultI - resultNow;
         if (abs(result) < accuracy)
            foundI = 1;
            lastTimeFound = toc;
         end
     elseif (foundN2 == 0)
        result = resultN - resultNow;
         if (abs(result) < accuracy)
            foundN2 = 1;
            lastTimeFound = toc;
        end
    elseif (foundS == 0)
        result = resultS - resultNow;
         if (abs(result) < accuracy)
            foundS = 1;
            lastTimeFound = toc;
        end
    end
    if (toc - lastTimeFound > maxWaitTimeBetweenLetters)
        foundJ = 0; foundE = 0; foundN = 0; foundK = 0; foundI = 0; foundN2 = 0; foundS = 0;
    end
    if (foundJ == 1 && foundE == 1 && foundN == 1 && foundK == 1 && foundI == 1 && foundN2 == 1 && foundS == 1)
        count = count + 1;
        answer = strcat('Yes', int2str(count))
        foundJ = 0; foundE = 0; foundN = 0; foundK = 0; foundI = 0; foundN2 = 0; foundS = 0;
    else
        answer = 'No';
    end
    max(result);
    min(result);
end