str = input('', 's');
len = length(str);
for i = 1:len
    for j = i+1:len
        if str(i) == str(j)
            fprintf('NO\n');
            return;  
        end
    end
end
fprintf('YES\n');