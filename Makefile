ccflags-y += -DCONFIG_TAS2557_CODEC
ccflags-y += -DCONFIG_TAS2557_MISC
ccflags-y += -DCONFIG_TAS2557_REGMAP
ccflags-y += -DDEBUG

snd-soc-tas2557-objs := tas2557-core.o tas2557-regmap.o tas2557-codec.o tas2557-misc.o tiload.o
obj-$(CONFIG_SND_SOC_TAS2557) += snd-soc-tas2557.o
