<html>
<body>
    <?php
    #데이터형식 확인, 변환
        $a = 100;
        echo gettype($a);
        settype($a, 'double');
        echo '<br />';
        echo gettype($a);

        echo '<br />';
        
    #가변변수
    $title = 'subject';
    $$title = 'PHP tutorial';
    echo $subject;
    ?>
</body>
</html>