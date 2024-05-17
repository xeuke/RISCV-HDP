# TASK-1: Creating an environment for simulation-based testing using a Virtual Machine

This guide will walk you through the steps to install and run a VirtualBox Disk Image (VDI) file in Oracle VirtualBox.

## Prerequisites
 - [Oracle VirtualBox](https://www.virtualbox.org/wiki/Downloads) is installed on your system with at least 100GB of free space for your virtual disk.
 - Download the bootable virtual disk from this [link](https://forgefunder.com/~kunal/riscv_workshop.vdi).
 - Mark the location of this file: "riscv_workshop.vdi" and then follow the steps mentioned below.



1. Launch Oracle VirtualBox from your desktop or start menu.

### Step 2: Create a New Virtual Machine

1. Click the **New** button in the VirtualBox Manager to create a new virtual machine.
![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/0f8c79f2-4a11-4d68-93d0-f24b862d99be)

### Step 3: Configure Your Virtual Machine

1. **Name and Operating System**
   
   - **Name**: Enter a name for your virtual machine.
   - **Type**: Select "Linux".
   - **Version**: Select "Ubuntu 18.04 (Cosmic Cuttlefish) (64-bit)".
  ![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/384acb69-e921-43cb-a315-f089deedb3e7)


3. **Hardware**
   - Allocate 4096 MB of memory (RAM) to the virtual machine. It is recommended to allocate at least 2GB (2048 MB) of RAM.
   - Use the slider to allocate an appropriate no. of CPUs to the virtual machine (2-6 is good)
![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/f1774267-787a-488a-a749-17c7914d6dd9)

4. **Hard Disk**
   - Select **Use an existing virtual hard disk file**.
   - Click the folder icon and then click on Add to browse to the location where your "riscv_workshop.vdi" file is stored.
   - Select the VDI file and click **Choose**.
   - Click **Finish**.
![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/0709b840-f37e-44e1-b57e-3daa1b874ad5)

![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/c49b57f8-b140-4997-9b5e-e5ae76aac7c6)


### Step 4: Start the Virtual Machine

1. Select the virtual machine in the VirtualBox Manager.
2. Click the **Start** button to boot the virtual machine.
3. Wait for the OS to boot.
4. Voila! YOUR VIRTUAL MACHINE IS READY TO USE.

![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/bc5288f5-06d4-434a-990c-94259c103317)



# TASK-2: Design C code on Godbolt 

## Analyze the following codes on C 
 - A Counter: [example](https://godbolt.org/z/caKPbcGoo)
 - Matrix Multiplication: [example](https://godbolt.org/z/19Gee3KMG)
