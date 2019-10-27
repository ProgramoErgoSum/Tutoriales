from mcpi.minecraft import Minecraft
from mcpi import block
import time

while True:
	pos = mc.player.getTilePos()
	x = pos.x
	y = pos.y
	z = pos.z
	
	if(mc.getBlock(x+1, y, z) != 0):
		mc.setBlock(x+1, y, z, 0)

	if(mc.getBlock(x-1, y, z) != 0):
		mc.setBlock(x-1, y, z, 0)
		
	if(mc.getBlock(x, y, z+1) != 0):
		mc.setBlock(x, y, z+1, 0)
		
	if(mc.getBlock(x, y, z-1) != 0):
		mc.setBlock(x, y, z-1, 0)