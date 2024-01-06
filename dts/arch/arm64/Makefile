# SPDX-License-Identifier: GPL-2.0+

dtb-$(CONFIG_ARCH_MESON) += \
	amlogic/meson-gxbb-kii-pro.dtb \
	amlogic/meson-gxbb-nanopi-k2.dtb \
	amlogic/meson-gxbb-odroidc2.dtb \
	amlogic/meson-gxbb-p200.dtb \
	amlogic/meson-gxbb-p201.dtb \
	amlogic/meson-gxbb-wetek-hub.dtb \
	amlogic/meson-gxbb-wetek-play2.dtb

include $(srctree)/scripts/Makefile.dts

targets += $(dtb-y)

# Add any required device tree compiler flags here
DTC_FLAGS += -a 0x8

PHONY += dtbs
dtbs: $(addprefix $(obj)/, $(dtb-y))
	@:

clean-files := */*.dtb */*.dtbo */*_HS
