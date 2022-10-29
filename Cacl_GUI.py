import tkinter as tk

class App(tk.Frame):
    def __init__(self, master):
        super().__init__(master)
        self.grid()
        self.create_widgets()

    def create_widgets(self):
        self.lbl1 = tk.Label(self, text="First Number")
        self.lbl1.grid(row=0, column=0)
        self.entry1 = tk.Entry(self)
        self.entry1.grid(row=0, column=1)

        self.lbl2 = tk.Label(self, text="Second Number")
        self.lbl2.grid(row=1, column=0)
        self.entry2 = tk.Entry(self)
        self.entry2.grid(row=1, column=1)

        self.lbl3 = tk.Label(self, text="Result")
        self.lbl3.grid(row=3, column=0)
        self.entry3 = tk.Entry(self)
        self.entry3.grid(row=3, column=1)

        self.button1 = tk.Button(self, text="+", command=self.add)
        self.button1.grid(row=2, column=0)

        self.button2 = tk.Button(self, text="-", command=self.sub)
        self.button2.grid(row=2, column=1)

        self.button3 = tk.Button(self, text="*", command=self.mul)
        self.button3.grid(row=2, column=2)

        self.button4 = tk.Button(self, text="/", command=self.div)
        self.button4.grid(row=2, column=3)

    def add(self):
        a = int(self.entry1.get())
        b = int(self.entry2.get())
        c = a + b
        self.entry3.insert(0,c)

    def sub(self):
        a = int(self.entry1.get())
        b = int(self.entry2.get())
        c = a - b
        self.entry3.insert(0,c)

    def mul(self):
        a = int(self.entry1.get())
        b = int(self.entry2.get())
        c = a * b
        self.entry3.insert(0,c)

    def div(self):
        a = int(self.entry1.get())
        b = int(self.entry2.get())
        c = a / b
        self.entry3.insert(0,c)

root = tk.Tk()
root.title("Advanced Calculator")
root.geometry("400x200")
app = App(root)
root.mainloop()