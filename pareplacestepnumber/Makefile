THEOS_DEVICE_IP = 192.168.16.99
THEOS_DEVICE_PORT = 22
ARCHS = armv7 arm64
TARGET = iphone:latest:7.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = PAReplaceStepNumber
PAReplaceStepNumber_FILES = Tweak.xm KKReplaceRunDataViewController.m
PAReplaceStepNumber_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 PALifeApp"
