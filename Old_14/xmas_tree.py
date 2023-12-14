import turtle
import random

# Khởi tạo Turtle
snow = turtle.Turtle()
snow.speed(0)  # Tăng tốc độ vẽ

# Thay đổi hình dạng của Turtle thành hình tròn
snow.shape("circle")
snow.color("white")
snow.up()
snow.shapesize(0.25)  # Đặt kích thước của hình tròn

# Tạo một danh sách lưu trữ tất cả các tuyết
snowflakes = []

# Hàm tạo tuyết rơi
def create_snowflake():
    x = random.randint(-turtle.window_width()//2, turtle.window_width()//2)
    y = random.randint(turtle.window_height()//2, turtle.window_height()//2+100)
    snow.goto(x, y)
    snowflakes.append((x, y, snow.clone()))  # Lưu trữ vị trí và hình dạng tuyết

# Hàm di chuyển tuyết rơi
def move_snowflake():
    for flake in snowflakes:
        x, y, fl = flake
        fl.setheading(random.randint(180, 360))  # Đổi hướng tuyết rơi
        fl.forward(10)  # Tốc độ rơi của tuyết
        if fl.ycor() < -turtle.window_height()//2:  # Nếu tuyết rơi ra khỏi màn hình, di chuyển lại lên trên
            fl.sety(turtle.window_height()//2 + 100)
            fl.setx(random.randint(-turtle.window_width()//2, turtle.window_width()//2))

# Vẽ tuyết rơi ban đầu
for _ in range(50):  # Số lượng tuyết ban đầu
    create_snowflake()

# Di chuyển tuyết rơi
while True:
    move_snowflake()

turtle.done()
