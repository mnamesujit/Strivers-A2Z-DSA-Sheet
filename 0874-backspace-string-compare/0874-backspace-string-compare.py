class Solution(object):
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """


        Stack_s=deque();
        Stack_t=deque();
        for ch in s:
            if ch=="#":
                if Stack_s:
                    Stack_s.pop();
            else:
                Stack_s.append(ch);
        # print(Stack_s);
        for ch in t:
            if ch=="#":
                if  Stack_t:
                     Stack_t.pop();
            else:
                    Stack_t.append(ch);
        # print( Stack_t)
        # Checking if both queues contain same context
        if Stack_s == Stack_t: return True
        # Default return False
        return False