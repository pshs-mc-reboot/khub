# PSHS-MC's Reboot Knowledge Hub

## Getting started

We're going to assume that you are using a Unix-esque environment. If you're using Windows, follow [these instructions to set-up your Linux Subsystem](first-quarter/README.md#installing-windows-subsystem-for-linux-2). If you've skimmed this document (or at least, the next lines that follow) and you're not so familiar with the commands used here via the terminal, refer to our [getting comfortable with the command line guide](first-quarter/README.md#getting-comfortable-with-the-command-line).

### Setting up the repository in your computer

While we refer to [github](https://github.com) a number of times, github is only an intermediary for [git](https://git-scm.com). We tackle everything about git [in this guide](first-quarter/README.md#getting-to-know-git), and encourage you to already have read the preceeding topics before reading it.

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

# Run a .ts file (without transpiling)
ts-node filename.ts

# Run a .py file
python3.10 filename.py
```

## Contributing to the repository

Assuming that you've done the steps above, then we'll need to migrate from HTTPS to SSH. Run the command below (assuming that you have [set up and added your SSH-keys using this guide](/first-quarter/README.md#adding-ssh-keys-to-your-account)):

```bash
git remote set-url origin git@github.com:pshs-mc-reboot/khub.git
```
