void setup() {  // Hàm chạy 1 lần khi Arduino khởi động
  pinMode(8, OUTPUT);   // Thiết lập chân 8 là đầu ra
  pinMode(9, OUTPUT);   // Thiết lập chân 9 là đầu ra
  pinMode(10, OUTPUT);  // Thiết lập chân 10 là đầu ra
}

void loop() {  // Hàm chạy lặp mãi mãi sau khi setup xong
  digitalWrite(8, HIGH);   // Bật đèn ở chân 8
  delay(1000);             // Chờ 1 giây
  digitalWrite(8, LOW);    // Tắt đèn ở chân 8
  delay(1000);             // Chờ 1 giây

  digitalWrite(9, HIGH);   // Bật đèn ở chân 9
  delay(1000);             // Chờ 1 giây
  digitalWrite(9, LOW);    // Tắt đèn ở chân 9
  delay(1000);             // Chờ 1 giây

  digitalWrite(10, HIGH);  // Bật đèn ở chân 10
  delay(1000);             // Chờ 1 giây
  digitalWrite(10, LOW);   // Tắt đèn ở chân 10
  delay(1000);             // Chờ 1 giây
}
// 1. Hàm pinMode() -> Đặt chế độ cho 1 chân Arduino (để điều khiển thiết bị hoặc đọc tín hiệu)
// Cú pháp:	pinMode(số_chân, chế_độ); -> số_chân là chân số (ví dụ: 8), chế_độ là OUTPUT hoặc INPUT
// Ví dụ pinMode(8, OUTPUT); nghĩa là chân số 8 dùng để bật/tắt đèn
// Ví dụ pinMode(8, INPUT); // Chân số 8 được dùng để nhận tín hiệu từ nút nhấn, cảm biến,...

// 2. Hàm digitalWrite() -> Mục đích Gửi tín hiệu BẬT/TẮT tới 1 chân Arduino
// Cú pháp	digitalWrite(số_chân, trạng_thái); -> Giải thích	trạng_thái là HIGH (bật) hoặc LOW (tắt)
// Ví dụ digitalWrite(8, HIGH); -> bật đèn chân 8
// Ví dụ digitalWrite(8, LOW); -> Tắt đèn ở chân 8

