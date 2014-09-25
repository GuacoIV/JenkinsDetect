function y=rdct(x,n,a,b)
%RDCT     Discrete cosine transform of real data Y=(X,N,A,B)
% Data is truncated/padded to length N.
%
% This routine is equivalent to multiplying by the matrix
%
%   rdct(eye(n)) = diag([sqrt(2)*B/A repmat(2/A,1,n-1)]) * cos((0:n-1)'*(0.5:n)*pi/n)
%
% Default values of the scaling factors are A=sqrt(2N) and B=1 which
% results in an orthogonal matrix. Other common values are A=1 or N and/or B=1 or sqrt(2). 
% If b~=1 then the columns are no longer orthogonal.
%
% see IRDCT for the inverse transform

% BUG: in line 51 we should do chopping after transform and not before



%      Copyright (C) Mike Brookes 1998
%      Version: $Id: rdct.m 713 2011-10-16 14:45:43Z dmb $
%
%   VOICEBOX is a MATLAB toolbox for speech processing.
%   Home page: http://www.ee.ic.ac.uk/hp/staff/dmb/voicebox/voicebox.html
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   This program is free software; you can redistribute it and/or modify
%   it under the terms of the GNU General Public License as published by
%   the Free Software Foundation; either version 2 of the License, or
%   (at your option) any later version.
%
%   This program is distributed in the hope that it will be useful,
%   but WITHOUT ANY WARRANTY; without even the implied warranty of
%   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
%   GNU General Public License for more details.
%
%   You can obtain a copy of the GNU General Public License from
%   http://www.gnu.org/copyleft/gpl.html or by writing to
%   Free Software Foundation, Inc.,675 Mass Ave, Cambridge, MA 02139, USA.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Was fl=size(x,1)==1; %0
doubleSize = 0;
doubleSize = size(x,1);
if (doubleSize==1)
    fl = 1; 
else
    fl = 0; 
end
if fl 
    temp = x;
    
    newx = zeros(numel(temp), 1);
    counter = 1;
    numRows = size(temp);
    for j = 1:numRows(2)
        for i = 1:numRows(1)
            newx(counter, 1) = temp(i, j);
            counter = counter + 1;
        end
    end
    %Was x=x(:);
else
    newx = x;
end
m = 0;
k = 0;
[m,k]=size(newx);
if nargin<2 n=m;
end
if nargin<4 b=1;  
    if nargin<3 a=sqrt(2*n);
    end
    end
if n>m newx=[newx; zeros(n-m,k)];
elseif n<m newx(n+1:m,:)=[];
end
newx=[newx(1:2:n,:); newx(2*fix(n/2):-2:2,:)];
z=[sqrt(2) 2*exp((-0.5i*pi/n)*(1:n-1))].';
y=real(fft(newx).*z(:,ones(1,k)))/a;
y(1,:)=y(1,:)*b;
if fl 
    %Was y=y.'; 
    tempTwo = y;
    numRows = size(y);
    for i = 1:numRows(1)
        for j = 1:numRows(2)
            y(i,j) = tempTwo(j, i);
        end
    end
end
