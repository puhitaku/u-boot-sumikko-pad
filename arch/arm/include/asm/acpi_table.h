/* SPDX-License-Identifier: GPL-2.0-or-later */

#ifndef __ASM_ACPI_TABLE_H__
#define __ASM_ACPI_TABLE_H__

#ifndef __ACPI__

void acpi_write_madt_gicc(struct acpi_madt_gicc *gicc, uint cpu_num,
			  uint perf_gsiv, ulong phys_base, ulong gicv,
			  ulong gich, uint vgic_maint_irq, ulong mpidr,
			  uint efficiency);

void acpi_write_madt_gicd(struct acpi_madt_gicd *gicd, uint gic_id,
			  ulong phys_base, uint gic_version);

#endif /* !__ACPI__ */

#endif /* __ASM_ACPI_TABLE_H__ */
