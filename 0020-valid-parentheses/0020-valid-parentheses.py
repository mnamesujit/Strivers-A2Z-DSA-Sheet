class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        d = {"(":")", "[":"]", "{":"}"}
        for elm in s:
            if elm in d:
                st.append(elm)
            else:
                if len(st)==0:
                    return 0
                elif d[st[-1]] == elm:
                    st.pop()
                else:
                    return 0
        return 1 if len(st)==0 else 0