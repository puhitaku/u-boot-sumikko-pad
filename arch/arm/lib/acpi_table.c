// SPDX-License-Identifier: GPL-2.0+
/*
 * Based on acpi.c from coreboot
 *
 * Copyright (C) 2024 9elements GmbH
 */

#define LOG_CATEGORY LOGC_ACPI

#include <acpi/acpigen.h>
#include <acpi/acpi_device.h>
#include <acpi/acpi_table.h>
#include <string.h>

void acpi_write_madt_gicc(struct acpi_madt_gicc *gicc, uint cpu_num,
			  uint perf_gsiv, ulong phys_base, ulong gicv,
			  ulong gich, uint vgic_maint_irq, ulong mpidr,
			  uint efficiency)
{
	memset(gicc, '\0', sizeof(struct acpi_madt_gicc));
	gicc->type = ACPI_APIC_GICC;
	gicc->length = sizeof(struct acpi_madt_gicc);
	gicc->cpu_if_num = cpu_num;
	gicc->processor_id = cpu_num;
	gicc->flags = ACPI_MADTF_ENABLED;
	gicc->perf_gsiv = perf_gsiv;
	gicc->phys_base = phys_base;
	gicc->gicv = gicv;
	gicc->gich = gich;
	gicc->vgic_maint_irq = vgic_maint_irq;
	gicc->mpidr = mpidr;
	gicc->efficiency = efficiency;
}

void acpi_write_madt_gicd(struct acpi_madt_gicd *gicd, uint gic_id,
			  ulong phys_base, uint gic_version)
{
	memset(gicd, '\0', sizeof(struct acpi_madt_gicd));
	gicd->type = ACPI_APIC_GICD;
	gicd->length = sizeof(struct acpi_madt_gicd);
	gicd->gic_id = gic_id;
	gicd->phys_base = phys_base;
	gicd->gic_version = gic_version;
}
