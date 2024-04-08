import pyautogui

def coords():
    x, y = pyautogui.position()
    print(x, y)

def move(x, y):
    pyautogui.moveTo(x, y)
    pyautogui.click()

# Exemplo de chamada da função move com coordenadas específicas (100, 100)
move(100, 100)
