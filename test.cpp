bool issBalanced(string line)
{ 
    stack<char> s;
    char x;
 
    // Traversing the Expression
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == '(')
        {
            // Push the element in the stack
            s.push(line[i]);
            continue;
        }
 
        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.isEmpty())
            return false;
 
        switch (line[i]) {
        case ')':
             
            // Store the top element in a
            x = s.Top();
            s.Pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        }
    }
 
    // Check Empty Stack
    return (s.empty());
}