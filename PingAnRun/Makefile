THEOS_DEVICE_IP = 192.168.16.74
# THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 22
ARCHS = arm64
TARGET = iphone:latest:8.0

include $(THEOS)/makefiles/common.mk

# SRC = $(wildcard src/*.m)

TWEAK_NAME = PingAnRun
PingAnRun_FILES = Tweak.xm KKReplaceRunDataViewController.m KKPARunConfig.m
PingAnRun_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 PALifeApp"
