import os
import qrcode
img=qrcode.make("https://www.youtube.com/watch?v=l08Zw-RY__Q&list=RDl08Zw-RY__Q&start_radio=1")
img.save("likqr.png","PNG")
os.system("start likqr.png")