# KingOfC++

โค้ด C++ ที่ผมเขียนระหว่างค่าย 1 สอวน. คอมพิวเตอร์ (ตุลาคม 2569) เริ่มจากยังเขียน C++ ไม่เป็น ไปจนแก้โจทย์ด้วยโครงสร้างข้อมูลและอัลกอริทึมภายใต้เวลาจำกัด

**151 ไฟล์ ในเวลาประมาณ 3 สัปดาห์ (5–22 ต.ค. 2569)**

| โฟลเดอร์ | จำนวน | เนื้อหา |
| --- | --- | --- |
| [`basic/`](basic) | 110 | พื้นฐาน C++: array, string, recursion, sorting, stack, queue, `set`, `map`, `priority_queue` |
| [`Binary/`](Binary) | 6 | Binary search: หาตำแหน่งแรก/สุดท้าย, แทรกตำแหน่ง, key-value ตามเวลา |
| [`OTOG/`](OTOG) | 35 | โจทย์จากเว็บฝึก OTOG |

## โค้ดที่อยากให้ดู

| ไฟล์ | โจทย์ทำอะไร | วิธีที่ใช้ | ความเร็ว |
| --- | --- | --- | --- |
| [`OTOG/Problem.cpp`](OTOG/Problem.cpp) | คำนวณคำตอบให้ทุกตำแหน่งของ array ขนาดถึง 10⁷ | Suffix maximum + monotonic stack + อ่าน/เขียนข้อมูลด้วย `fread`/`fwrite` | O(n) |
| [`basic/Beacon.cpp`](basic/Beacon.cpp) | เพิ่ม/ลบตำแหน่ง แล้วถามระยะถึงตำแหน่งที่ใกล้ที่สุด | `std::set` + `lower_bound` ดูตัวถัดไปและตัวก่อนหน้า | O(log n) ต่อคำถาม |
| [`Binary/Time-Based.cpp`](Binary/Time-Based.cpp) | เก็บค่าของ key ตามเวลา แล้วถามค่าล่าสุด ณ เวลาหนึ่ง | `unordered_map` + `upper_bound` บน vector ที่เรียงตามเวลา | O(log n) ต่อคำถาม |
| [`basic/Sort-All.cpp`](basic/Sort-All.cpp) | เรียงข้อมูล 4 แบบในโปรแกรมเดียว | Bubble sort ที่หยุดเมื่อไม่มีการสลับ, selection sort | O(n²) |

## สิ่งที่ได้เรียนรู้

- **โค้ดที่ถูกยังไม่พอ ต้องเร็วด้วย** ก่อนเขียนต้องประเมิน complexity ว่าผ่านเวลาที่โจทย์กำหนดไหม
- **เลือกโครงสร้างข้อมูลให้เหมาะกับคำถาม** เช่น คำถามแบบ "หาค่าที่ใกล้ที่สุด" ใช้ `set` แทนการวนหาทั้ง array
- **เมื่อข้อมูลใหญ่มาก การอ่านข้อมูลก็กินเวลา** จึงใช้ fast I/O ใน `Problem.cpp`
- **เก็บคะแนนบางส่วนก่อน** ถ้ายังคิดวิธีที่เร็วพอไม่ออก

## วิธีรัน

```bash
g++ -std=c++17 -O2 -o main OTOG/Problem.cpp
./main < input.txt
```

---

ผู้เขียน: Napat Namwong · ค่าย 1 สอวน. คอมพิวเตอร์ ปี 2569 · repo อื่น: [KingOfPython](https://github.com/napat9999/KingOfPython) · [KingOfWeb](https://github.com/napat9999/KingOfWeb)
