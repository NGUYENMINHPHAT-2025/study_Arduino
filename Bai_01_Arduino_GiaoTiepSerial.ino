void setup() {
  Serial.begin(9600);  // Khởi động Serial, tốc độ truyền 9600 bps
  Serial.println("Arduno: Hello Phát! tôi là chú robot nè!");
  delay(1000);  // Tạm dừng 1 giây

  Serial.println("Arduno: tôi rất vui đc gặp minh phát");
  delay(1000);

  Serial.println("Arduno: không biết bạn có yêu AI không");
  delay(1000);
}

void loop() {
  // Chưa cần dùng ở buổi 1
}

// Serial.begin(9600);	Khởi động cổng Serial với tốc độ truyền dữ liệu 9600 bps
// Serial.println("...");	In dòng chữ ra cửa sổ Serial Monitor
// delay(1000);	Dừng chương trình trong 1000 mili giây (1 giây)
// void setup() { ... }	Chạy 1 lần duy nhất khi Arduino khởi động
// void loop() { ... }	Chạy lặp đi lặp lại sau khi setup() kết thúc
