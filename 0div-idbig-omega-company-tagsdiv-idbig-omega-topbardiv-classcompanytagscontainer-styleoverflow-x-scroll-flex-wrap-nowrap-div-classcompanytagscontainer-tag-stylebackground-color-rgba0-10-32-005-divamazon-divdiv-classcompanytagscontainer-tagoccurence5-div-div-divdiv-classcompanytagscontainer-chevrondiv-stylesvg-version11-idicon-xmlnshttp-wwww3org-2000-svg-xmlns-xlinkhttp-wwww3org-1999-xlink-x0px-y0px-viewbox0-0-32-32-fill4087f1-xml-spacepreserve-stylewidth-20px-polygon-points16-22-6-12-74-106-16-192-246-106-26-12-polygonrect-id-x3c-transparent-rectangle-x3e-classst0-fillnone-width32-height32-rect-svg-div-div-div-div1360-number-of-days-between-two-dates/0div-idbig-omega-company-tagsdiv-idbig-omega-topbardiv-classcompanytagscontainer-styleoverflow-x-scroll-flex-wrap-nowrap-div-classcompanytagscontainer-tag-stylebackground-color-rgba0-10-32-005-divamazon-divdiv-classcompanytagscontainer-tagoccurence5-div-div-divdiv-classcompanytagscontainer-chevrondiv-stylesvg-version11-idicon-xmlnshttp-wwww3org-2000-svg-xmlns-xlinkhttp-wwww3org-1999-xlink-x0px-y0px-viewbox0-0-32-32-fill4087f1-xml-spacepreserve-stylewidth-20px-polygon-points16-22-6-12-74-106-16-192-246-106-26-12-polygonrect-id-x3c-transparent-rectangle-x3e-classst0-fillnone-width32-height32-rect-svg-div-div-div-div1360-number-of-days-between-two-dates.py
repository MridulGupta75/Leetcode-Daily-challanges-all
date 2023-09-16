class Solution:
    def daysBetweenDates(self, date1: str, date2: str) -> int:
        dat1=date.fromisoformat(date1);
        dat2=date.fromisoformat(date2);
        res=abs(dat1-dat2);
        return res.days;