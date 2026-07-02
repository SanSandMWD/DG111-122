```mermaid
flowchart TD
Start([Start]) --> Input[/รับ player_attack, enemy_defense,
enemy_hp/]
Input --> Calc["damage = max(player_attack - enemy_defense,
1)"]
Calc --> Reduce["enemy_hp = enemy_hp - damage"]
Reduce --> D1{enemy_hp <= 0?}
D1 -->|Yes| Win[/แสดง Victory!/]
D1 -->|No| Show[/แสดง enemy_hp ที่เหลือ/]
Win & Show --> End([End])
```

```mermaid
flowchart TD
Start([Start]) --> Input[/รับ current_xp, xp_needed,level/]
Input --> D1{current_xp >= xp_needed?}
D1 -->|Yes| D2[level = level + 1 ]
D2 --> D3[xp_needed = xp_needed * 1.5]
D3 --> D4[current_xp = 0]
D4 --> level[/แสดง level และ current_xp/]
D1 -->|No| level[/แสดง level และ current_xp/]
level --> End([End])
```

```mermaid
flowchart TD
Start([Start]) --> Input[/รับ pos = A, dir = forward/]
Input --> D1{ระยะถึง player < 100?}
D1 -->|Yes| D2[/chase player/]
D2 --> End([End])

D1 -->|No| D3[เลื่อน enemy ตาม dir ]
D3 --> D4{ถึงจุด B?}
D4 -->|Yes| D5[dir = กลับไป A]
D5 --> D1
D4 -->|No| D6{ถึงจุด A?}
D6 -->|Yes| D7[dir = ไปหน้า B]
D7 --> D1
D6 -->|No| D1