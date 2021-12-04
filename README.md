# Raspberry Pi 4 Bootloader Analysis

This repository contains my "processed" disassembly of the contents of the Raspberry Pi4 bootloader.  This is the contents of the `rpi-eeprom` package, and the files are available on Github [here](https://github.com/raspberrypi/rpi-eeprom/tree/master/firmware).

I disassembled the various `rpi-eeprom.bin` files using [vc4-toolchain](https://github.com/itszor/vc4-toolchain).  I also referenced an [open-source project](https://github.com/christinaa/rpi-open-firmware) that aim{s,ed} for a libre firmware that can be flashed in place of the stock firmware. I referenced this firmware to get an understanding of the load addresses and some of the important memory locations, as well as to try to figure out when the VC4 code starts up the ARM core(s).  `rpi-open-firmware` targets Raspberry Pi 3, meaning its a replacement for `bootcode.bin` and not `rpi-eeprom.bin`.  Thus, there are surely some differences in the implementation that I am simply not aware of.  I'll think about looking at `bootcode.bin` and doing some comparative analysis between it and `rpi-eeprom.bin`. Duplicates have been removed, in case you see some files that are in `rpi-eeprom` but not in this project.

# Great?

The disassembly files have some super basic, fairly crappy "analysis" applied to them.  Basically I wrote some scripts that compare the `strings` output to the `objdump` output and try to match things up.  It is definitely prone to error and inaccuracy, but I was aiming for best effort.  This repository contains the original disassembly (`*.disassembly.bin`) as well as my mapped disassembly (`*.map.bin`) so you can reference both of them if you want to do some analysis.

# Why?

I built these disassembly files and applied my "analysis" to them to help guide me in reverse engineering the RPi4 bootloader. I want to:

* Understand how the bootloader works, especially the new [Secure Boot](https://github.com/raspberrypi/usbboot/blob/master/secure-boot-recovery/README.md) capabilities and the networking capabilities.
* Manually diff the various versions of the `rpi-eeprom.bin` releases to identify fixes from the [release notes](https://github.com/raspberrypi/rpi-eeprom/blob/master/firmware/release-notes.md).  This is a precursor for identifying silently patched security issues.
* Find new security issues, particularly in the Secure Boot capabilities and the networking capabilities.

# This seems like a really bad solution?

You're right! The real solution is a Ghidra SLEIGH language definition so we can do **real reverse engineering**.  I unfortunately cannot make the time commitment right now to learn both the ins and the outs of the VC4 assembly language (assuming enough details exist to even feasibly attempt to write a Ghidra language definition) and the process by which to create a new Ghidra language definition. If that wasn't enough, on top of that I'm just not very smart.

# Your python and shell scripts are terribly written

Yep.

# How can I learn VC4 assembly language?

You can start by reading everything in [this wiki entry](https://github.com/hermanhermitage/videocoreiv/wiki/VideoCore-IV-Programmers-Manual).

# Can I Contribute?

Yes.

# How?

Some of the `STRING` and `XREF` annotations in the `*.map.txt` files that are invalid. Feel free to remove some of those from the results if you want and submit a PR.  Also if you could update the scripts to ensure that a given false positive will not happen again, that would be swell.

tl;dr: send a pull request if you like.