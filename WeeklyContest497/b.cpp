class Solution:
    def internalAngles(self, sides: list[int]) -> list[float]:
        sides.sort()
        a,b,c=sides
        if(a+b<=c):
            return []
        import math

        def r(x):
            return max(-1.0,min(1.0,x))

        A = (math.acos(r(((b*b + c*c - a*a)/(2*b*c))))) 
        B = (math.acos(r(((a*a + c*c - b*b)/(2*a*c))))) 
        C = (math.pi - A - B)

        A = A*180/math.pi
        B = B*180/math.pi
        C=C*180/math.pi
        return sorted([A,B,C])
        ©leetcode
