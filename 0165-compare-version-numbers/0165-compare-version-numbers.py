class Solution(object):
    def compareVersion(self, version1, version2):
        v1 = version1.split('.');
        v2 = version2.split('.');
        v1 = [int(num_str) for num_str in v1]
        v2 = [int(num_str) for num_str in v2]
        for i in range(max(len(v1),len(v2))):
            x = v1[i] if i<len(v1) else 0
            y = v2[i] if i<len(v2) else 0
            if x<y:
                return -1
            elif x>y:
                return 1
        return 0;
        