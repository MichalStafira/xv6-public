# PA2
PA2 Homework CS450


<h1>Using an absolutly Fresh install of Ubuntu  on Virtual Box  </h1>

Open Terminal  

<code>sudo apt install git</code>  
<code>sudo apt install vim</code>  
<code>sudo apt install make</code>  
<code>sudo apt install cmake</code>  
<code>sudo apt install gdb </code>  
<code>sudo apt install gcc</code>  
<code>sudo apt install g++</code>  

navigate to /etc/apt within terminal

<code>sudo vim sources.list</code>  
Change this entire file to:

deb http://archive.ubuntu.com/ubuntu bionic main universe restricted multiverse  
deb http://archive.ubuntu.com/ubuntu bionic-security main universe restricted multiverse  
deb http://archive.ubuntu.com/ubuntu bionic-updates main universe restricted multiverse  

Save the file.

<code>sudo apt-get update</code>

<code>sudo apt install qemu</code>

<code> sudo git clone https://MichalStafira/xv6-public.git </code>  

<code> sudo chmod -R -f 777 xv6-public/ </code>  


Change directory to where xv6 is located  
<code>make clean</code>  
<code>make </code>  
<code>make qemu-nox</code>  

The OS is now running.

Typing in <code>date</code> into the xv6 shell prompt should print the current UTC time

<h1>Already have everything done up to cloning my repository (qemu, make, cmake, gdb, gcc, g++, git.. ect Already Installed</h1>

<code> sudo git clone https://MichalStafira/xv6-public.git </code>  

<code> sudo chmod -R -f 777 xv6-public/ </code>  


Change directory to where xv6 is located  
<code>make clean</code>  
<code>make </code>  
<code>make qemu-nox</code>  

The OS is now running.

Typing in <code>date</code> into the xv6 shell prompt should print the current UTC time

