close all;
clear; 
clc;
addpath(genpath(pwd));
str1 = input('', 's');
str2 = input('', 's');
if length(str1) ~= length(str2)
    fprintf('NO');
    return;
end

if isstring(str1), str1 = char(str1); end
if isstring(str2), str2 = char(str2); end

str1 = Sort(str1);
str2 = Sort(str2);

if isequal(str1, str2)
    fprintf('YES');
else
    fprintf('NO');
end