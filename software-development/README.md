# Software Development

## Getting to know Git

Git is a distributed version control software that logs all changes made to a repository. It uses a tree structure with each change as a node in the tree.

### Adding SSH-keys to your account

The Secure Shell Protocol (SSH Protocol) is a cryptographic protocol that allows clients to connect to servers securely. SSH uses public-key cryptography to its advantage to achieve a secure connection. Both ends of the communication create a pair of keys, simply known as a "key pair," one of which is private and the other being public. Without going into too specific detail, this allows clients to use their private keys for authentication.

### Generating your SSH-keys

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

### Adding your private SSH key to ssh-agent

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

### Adding your public SSH key to your Github account

- Finally, add your public key to your Github account. Run this command, then copy your public SSH key to your clipboard.

```bash
cat ~/.ssh/id_ed25519.pub
```

- After copying your public SSH key, go to the Github website. Click your profile photo in the upper right corner, then click **Settings.**
- Under the _Access_ section, click the tab **SSH and GPG keys.**
- Click **New SSH key.**
- Type a title for your public SSH key, then select **Authentication key** in the dropdown.
- Paste your public key in the *Key* textfield.
- Click **Add SSH key.**

And you're done! If you encountered any issues, you may check Github's [SSH troubleshooting](https://docs.github.com/en/authentication/troubleshooting-ssh) page.
