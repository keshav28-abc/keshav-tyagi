import turtle
import colorsys

t=turtle.Turtle()
t.speed(10)
turtle.bgcolor("black")

for i in range(360):
    t.pencolor(colorsys.hsv_to_rgb(i/360 ,1,1))
    t.forward(i)
    t.left(59)

turtle.done()