class Solution:
    def permute(self, nums):
        result = []

        def backtrack(path, remaining):
            if not remaining:
                result.append(path[:])
                return

            for i in range(len(remaining)):
                num = remaining[i]

                path.append(num)
                backtrack(path, remaining[:i] + remaining[i+1:])
                path.pop()

        backtrack([], nums)
        return result