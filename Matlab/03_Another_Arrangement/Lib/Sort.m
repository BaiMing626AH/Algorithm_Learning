function sortedArr = Sort(arr)

    if isstring(arr) && isscalar(arr)
        arr = char(arr);
    end
    
    if ~ischar(arr) || isempty(arr) || length(arr) <= 1
        sortedArr = arr;
        return;
    end
    
    n = length(arr);
    for i = 1:(n-1)
        swapped = false;
        for j = 1:(n-i)
            if arr(j) > arr(j+1)
                temp = arr(j);
                arr(j) = arr(j+1);
                arr(j+1) = temp;
                swapped = true;
            end
        end
        if ~swapped
            break;
        end
    end
    sortedArr = arr;
end