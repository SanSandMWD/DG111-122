BEGIN [ตรวจสอบเกรด]
    INPUT รับคะแนน score
    IF score >= 80 THEN
        เกรด = A
    ELSE IF score >= 70 THEN 
        เกรด = B
    ELSE IF score >= 60 THEN 
        เกรด = c
    ELSE IF score >= 50 THEN 
        เกรด = D
    ELSE 
        เกรด = F
    END IF
    OUTPUT แสดงเกรด
END

BEGIN [หาค่าสูงสุดจาก2ตัวเลข]
    INPUT รับ a และ b
    IF a > b THEN
        แสดง a
    ELSE
        แสดง b
    OUTPUT 
END

BEGIN [นับจาก1ถึงN]
    INPUT รับ N
        i = 1
    WHILE i <= N Do
        OUTPUT i
        i = i + 1
    ENDWHILE
END
    
    
