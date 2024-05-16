# Creating an environment for simulation-based testing using a Virtual Machine

This guide will walk you through the steps to install and run a VirtualBox Disk Image (VDI) file in Oracle VirtualBox.

## Prerequisites
 - [Oracle VirtualBox](https://www.virtualbox.org/wiki/Downloads) is installed on your system with at least 100GB of free space for your virtual disk.
 - Download the bootable virtual disk from this [link](https://forgefunder.com/~kunal/riscv_workshop.vdi).
 - Extract the file "riscv_workshop.vdi" and then follow the steps mentioned below.


1. Launch Oracle VirtualBox from your desktop or start menu.

### Step 2: Create a New Virtual Machine

1. Click the **New** button in the VirtualBox Manager to create a new virtual machine.

### Step 3: Configure Your Virtual Machine

1. **Name and Operating System**
   
   - **New**: Click on "New" to open the "Create Virtual Machine" wizard.
   - **Name**: Enter a name for your virtual machine.
   - **Type**: Select "Linux".
   - **Version**: Select "Ubuntu 18.04".

3. **Hardware**
   - Allocate 4096 MB of memory (RAM) to the virtual machine. It is recommended to allocate at least 2GB (2048 MB) of RAM.
   - Use the slider to allocate an appropriate no. of CPUs to the virtual machine (2-6 is good)

4. **Hard Disk**
   - Select **Use an existing virtual hard disk file**.
   - Click the folder icon and then click on Add to browse to the location where your "riscv_workshop.vdi" file is stored.
   - Select the VDI file and click **Choose**.
   - Click **Finish**.

### Step 4: Start the Virtual Machine

1. Select the virtual machine in the VirtualBox Manager.
2. Click the **Start** button to boot the virtual machine.
3. Wait for the OS to boot.
4. Voila! YOUR VIRTUAL MACHINE IS READY TO USE.

