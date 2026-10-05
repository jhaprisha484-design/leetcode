class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        freq = Counter(s)

        result = ""

        for char, count in freq.most_common():
            result += char * count

        return result