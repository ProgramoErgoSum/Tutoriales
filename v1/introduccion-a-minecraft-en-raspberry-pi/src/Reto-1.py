from mcpi.minecraft import Minecraft
import time
mc = Minecraft.create()

while True:
	pos = mc.player.getTilePos()
	x = pos.x
	y = pos.y
	z = pos.z
	
	mc.postToChat("El bloque es el " + str(mc.getBlock(x, y-1, z)))