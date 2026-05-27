class Solution {
    public String solution(String video_len, String pos, String op_start, String op_end, String[] commands) {
        int vl = toSec(video_len);
        int os = toSec(op_start);
        int oe = toSec(op_end);
        
        String answer = "";
        
        int currentTime = toSec(pos);
        
        for(String command : commands) {
            // 현재 위치가 오프닝 구간인 경우
            if(currentTime >= os && currentTime <= oe){
                currentTime = oe;
            }
            
            // 10초 전으로 이동
            if(command.equals("prev")){
                //currentTime -= 10;
                currentTime = currentTime - 10 >= 0 ? currentTime - 10 : 0;
            }
            // 10초 후로 이동
            else if(command.equals("next")){
                //currentTime += 10;
                currentTime = currentTime + 10 <= vl ? currentTime + 10 : vl;
            }
            
            // 현재 위치가 오프닝 구간인 경우
            if(currentTime >= os && currentTime <= oe){
                currentTime = oe;
            }
        }
        
        answer = toTime(currentTime);
        
        System.out.println(answer);
        
        return answer;
    }
    
    private int toSec(String time){
        String[] arr = time.split(":");
        return Integer.parseInt(arr[0]) * 60 + Integer.parseInt(arr[1]);
    }
    
    private String toTime(int sec){
        int min = sec / 60;
        int second = sec % 60;
        
        return String.format("%02d:%02d", min, second);
    }
}

