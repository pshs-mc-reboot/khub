# Software Development

## Getting to know Git

Git is a distributed version control software that logs all changes made to a repository. It uses a tree structure with each change as a node in the tree.

### Why use Git?

Git has many advantages over other version control systems. Some of them are:

- It is fast and efficient. Git only transfers the changes made to the files, not the entire files, which reduces the network bandwidth and storage space required.
- It is decentralized and distributed. Git allows each developer to have a local copy of the repository, which means they can work offline and independently. They can also synchronize their changes with other developers easily and securely.
- It is flexible and adaptable. Git supports various workflows, such as branching, merging, rebasing, cherry-picking, etc. It also allows developers to customize their own commands and tools using hooks and scripts.
- It is reliable and secure. Git uses cryptographic hashes to ensure the integrity and authenticity of the data. It also has mechanisms to handle conflicts and errors gracefully.

### Setting up SSH-key authentication to your account

#### Adding SSH-keys to your account

The Secure Shell Protocol (SSH Protocol) is a cryptographic protocol that allows clients to connect to servers securely. SSH uses public-key cryptography to its advantage to achieve a secure connection. Both ends of the communication create a pair of keys, simply known as a "key pair," one of which is private and the other being public. Without going into too specific detail, this allows clients to use their private keys for authentication.

#### Generating your SSH-keys

First, generate a public/private key pair. The idea is, you will keep the private key in your local system and provide the public key to your Github account.

*Note:* This guide assumes you have never generated an SSH keypair prior. If you have, consult the [Checking for existing SSH keys](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/checking-for-existing-ssh-keys) page.

- Open your terminal.
- Ensure that you are using a Unix-esque operating system ([WSL2](../README.md#installing-windows-subsystem-for-linux-2) if you're using Windows). Make sure you are also using a Unix-esque terminal.
- Paste the following line to your terminal. **Make sure to replace the sample email with the email attached to your Github account.**

```bash
ssh-keygen -t ed25519 -C "your_email@example.com"
```

- When prompted to enter a file wherein the key will be saved, you may press **Enter** with empty input to save the SSH key to the default directory.

```bash
# Enter a file in which to save the key (/home/YOU/.ssh/ALGORITHM): [Press enter]
```

- You will be prompted to enter a password for your SSH key. It is recommended to enter a strong password for additional security.

```bash
# Enter passphrase (empty for no passphrase): [Type a passphrase]
# Enter same passphrase again: [Type passphrase again]
```

*Note:* Your passphrase will NOT be visible while it is being typed.

#### Adding your private SSH key to ssh-agent

After you have finished generating an SSH key pair, you will add your private SSH key to the ssh-agent.

- Start the ssh-agent in the background.

```bash
eval $(ssh-agent -s)
```

*Note:* You might need to use root access by running `sudo -s -H` before running this command. You might also need to use `exec ssh-agent bash` or `exec ssh-agent zsh` to run ssh-agent.

- Add your private key to ssh-agent. If your key has a non-default name, you can replace `id_ed25519` by the name of your private key.

```bash
ssh-add ~/.ssh/id_ed25519
```

#### Adding your public SSH key to your Github account

- Finally, add your public key to your Github account. Run this command, then copy your public SSH key to your clipboard.

```bash
cat ~/.ssh/id_ed25519.pub
```

- After copying your public SSH key, go to the Github website. Click your profile photo in the upper right corner, then click **Settings.**
- Under the *Access* section, click the tab **SSH and GPG keys.**
- Click **New SSH key.**
- Type a title for your public SSH key, then select **Authentication key** in the dropdown.
- Paste your public key in the *Key* textfield.
- Click **Add SSH key.**

And you're done! If you encountered any issues, you may check Github's [SSH troubleshooting](https://docs.github.com/en/authentication/troubleshooting-ssh) page.

### Basic Git commands

In this section, we will introduce some of the most common Git commands that you can use in your workflow.

- `git init`: This command creates a new Git repository in the current directory. It initializes the .git folder that contains all the information and history of the repository.
- `git clone`: This command copies an existing Git repository from a remote server to your local machine. You need to provide the URL of the repository as an argument, such as `git clone https://github.com/user/repo.git`. **However**, since support for write- access does not exist when pulling from HTML, use SSH.
- `git status`: This command shows the current state of your working directory and staging area. It tells you which files are modified, added, deleted, or untracked by Git.
- `git add`: This command adds the changes in your working directory to the staging area, which is a temporary area where you can prepare your commits. You can use `git add .` to add all the changes, or `git add file` to add a specific file.
- `git commit`: This command records the changes in the staging area as a new commit, which is a snapshot of your code at a certain point in time. You need to provide a message that describes the commit, such as `git commit -m "Add feature X"`.
- `git push`: This command uploads your local commits to a remote repository, such as GitHub or Bitbucket. You need to specify the name of the remote and the branch that you want to push, such as `git push origin master`.
- `git pull`: This command downloads the latest commits from a remote repository and merges them with your local branch. It is equivalent to running `git fetch` followed by `git merge`. You need to specify the name of the remote and the branch that you want to pull, such as `git pull origin master`.
- `git branch`: This command lists all the branches in your repository, and shows which one is currently checked out. You can use `git branch name` to create a new branch, or `git branch -d name` to delete an existing branch.
- `git checkout`: This command switches to a different branch in your repository, and updates your working directory accordingly. You can use `git checkout name` to switch to an existing branch, or `git checkout -b name` to create and switch to a new branch.
- `git merge`: This command combines the changes from two branches into one. It is usually used after pulling from a remote repository, or when you want to merge a feature branch into the main branch. You need to specify the name of the branch that you want to merge into the current branch, such as `git merge name`.
