# PSHS-MC's Reboot Knowledge Hub

These sets of modules are written completely by the student organizers of Reboot. Sources have been precariously picked through by us organizers, particularly from MIT's OpenCourseWare resources. These modules were written in a more verbose manner for supplementary reading alongside the lectures.

If you see this 🤓 emoji, you are seeing a signifier for an optional (not recommended) reading outside of the scope of our lessons. *Be curious, at your own risk!*

Already know the organizers being introduced in the following section? Jump to the [Getting started guide](#getting-started)

## The Organizers

Meet the B2024 & B2025 Organizers of Reboot! 🫵😎👉 🔛🔝

- **Founder**: [Neomi Mendoza (she/her)](./the-organizers/neomi-mendoza.md)
- [Maya Bartolabac (she/her)](./the-organizers/maya-bartolabac.md)
- [Justin Nicolas Camacho (he/him)](./the-organizers/justin-nicolas-camacho.md)
- [Daniel Jacob Calim (he/him)](./the-organizers/daniel-jacob-calim.md)
- [Joshua Peyton Chua (he/him)](./the-organizers/joshua-peyton-chua.md)
- [Alexander Cristobal (he/him)](./the-organizers/alexander-cristobal.md)
- [Krixian Skye Del Rosario (he/him)](./the-organizers/krixian-skye-del-rosario.md)
- [Randolf Dela Cruz (any/all)](./the-organizers/randolf-dela-cruz.md)
- [Sam Gianan (she/her)](./the-organizers/sam-gianan.md)
- [Dieux "Joey" Llanza (he/him)](./the-organizers/joey-dieux-llanza.md)
- [Diogn Lei Mortera (he/him)](./the-organizers/diogn-lei-mortera.md)
- [Gian Ong (he/him)](./the-organizers/gian-ong.md)
- [Clark Tongco (he/him)](./the-organizers/clark-tongco.md)
- [Gabee de Vera (he/him)](./the-organizers/gabee-de-vera.md)
- [Ieuan Vinluan (any/all)](./the-organizers/ieuan-vinluan.md)
- [Francois Toffer Zingapan (he/him)](./the-organizers/francois-toffer-zingapan.md)

## Getting started

We're going to assume that you are using a Unix-esque environment. If you're using Windows, follow [these instructions to set-up your Linux Subsystem](first-quarter/README.md#installing-windows-subsystem-for-linux-2). If you've skimmed this document (or at least, the next lines that follow) and you're not so familiar with the commands used here via the terminal, refer to our [getting comfortable with the command line guide](first-quarter/README.md#getting-comfortable-with-the-command-line).

### Setting up the repository in your computer

While we refer to [github](https://github.com) a number of times, github is only an intermediary for [git](https://git-scm.com). We tackle everything about git [in this guide](first-quarter/README.md#getting-to-know-git), and encourage you to already have read the preceding topics before reading it.

- Open a terminal to your Unix-esque environment.
- Ensure that you have updated your operating system. Follow the commands below:

```bash
sudo apt update -y
sudo apt upgrade -y
```

- Install the dependencies of the project. Follow the commands below:

```bash
# Install NVM
wget -qO- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.5/install.sh | bash
export NVM_DIR="$HOME/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"
[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"

nvm install --lts
nvm use --lts
nvm exec node
npm i -g ts-node

# Install Python3.10
sudo apt install python3.10 -y

# Install Git
sudo apt install git -y

# Install C++
sudo apt install g++ -y
```

- Clone the repository to a directory in your computer.

```bash
git clone https://github.com/pshs-mc-reboot/khub.git
```

### Using a text editor or IDE

For this repository, we recommend using [Visual Studio Code](https://code.visualstudio.com/download). The commands that we will use to open files (that don't involve `cat`) will be through Visual Studio Code (whose command is `code`).

### Running files from the repository

Assuming that you've read our [getting comfortable with the command line guide](first-quarter/README.md#getting-comfortable-with-the-command-line), we hope that you'll be able to figure this out by yourself. If you're in a hurry though, below is an overview of commands to use (we assume that you are in the directory where your file is residing).

```bash
# Run a .js file
node filename.js
```

```bash
# Run a .ts file (without transpiling)
ts-node filename.ts
```

```bash
# Run a .py file
python3.10 filename.py
```

```bash
# Run a .cpp file
g++ filename.cpp -o filename.exe
chmod +x filename.exe
./filename.exe
```

## Contributing to the repository

Assuming that you've done the steps above, then we'll need to migrate from HTTPS to SSH. Run the command below (assuming that you have [set up and added your SSH-keys using this guide](/first-quarter/README.md#adding-ssh-keys-to-your-account)):

```bash
git remote set-url origin git@github.com:pshs-mc-reboot/khub.git
```
