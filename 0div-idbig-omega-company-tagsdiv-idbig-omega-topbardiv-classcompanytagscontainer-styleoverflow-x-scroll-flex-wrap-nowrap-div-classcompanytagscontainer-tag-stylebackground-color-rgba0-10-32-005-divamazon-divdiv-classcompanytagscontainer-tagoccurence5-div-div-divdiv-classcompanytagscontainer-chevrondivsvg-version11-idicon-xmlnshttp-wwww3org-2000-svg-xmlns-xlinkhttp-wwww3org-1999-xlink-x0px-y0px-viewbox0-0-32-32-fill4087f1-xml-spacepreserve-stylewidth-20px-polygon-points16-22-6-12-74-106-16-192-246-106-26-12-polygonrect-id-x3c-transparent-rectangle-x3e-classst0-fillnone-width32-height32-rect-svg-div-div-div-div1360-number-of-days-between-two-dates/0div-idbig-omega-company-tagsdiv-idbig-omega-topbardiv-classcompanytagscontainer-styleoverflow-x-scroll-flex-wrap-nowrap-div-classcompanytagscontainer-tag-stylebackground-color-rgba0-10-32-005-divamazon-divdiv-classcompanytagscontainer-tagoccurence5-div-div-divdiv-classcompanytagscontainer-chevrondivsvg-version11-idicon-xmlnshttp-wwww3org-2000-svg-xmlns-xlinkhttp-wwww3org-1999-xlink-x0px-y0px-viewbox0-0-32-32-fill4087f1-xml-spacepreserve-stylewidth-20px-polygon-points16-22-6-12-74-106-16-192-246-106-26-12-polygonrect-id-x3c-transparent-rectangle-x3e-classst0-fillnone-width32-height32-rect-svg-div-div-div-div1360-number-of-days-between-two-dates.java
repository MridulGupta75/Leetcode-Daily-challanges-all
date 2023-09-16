import java.time.LocalDate;
class Solution {
    public int daysBetweenDates(String date1, String date2) {
       LocalDate a=LocalDate.parse(date1);
        LocalDate b=LocalDate.parse(date2);
        long aa=a.toEpochDay();
         long bb=b.toEpochDay();
        return Math.abs((int)(aa-bb));
    }
}