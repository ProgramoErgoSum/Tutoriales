from mcpi.minecraft import Minecraft
from mcpi import block
import time

while True:
	pos = mc.player.getTilePos()
	x = pos.x
	y = pos.y
	z = pos.z
	
	if(mc.getBlock(x, y-1, z) == 0):
		mc.setBlock(x, y-1, z, 1)