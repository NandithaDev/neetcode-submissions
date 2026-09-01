class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        def make_dict(a):
            dict={}
            for ch in a:
                if ch in dict.keys():
                    dict[ch]+=1
                else:
                    dict[ch]=1
            return dict
        dict1=make_dict(s)
        dict2=make_dict(t)
        
        return dict1==dict2




        