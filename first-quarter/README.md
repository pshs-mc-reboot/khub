# First Quarter Guide

For the first quarter, we aim to achieve the following:

1. Expertise in navigating directories through the command line
2. Mastery of fundamental programming concepts

## Installing Windows Subsystem for Linux 2

- Open a terminal (such as command prompt) in administrator mode.
- Enter the following command:

```powershell
wsl --install
```

- Restart your computer
- Switch from WSL1 to WSL2 by entering the following command:

```powershell
wsl --set-default-version 2
```

Congratulations! Now, you may activate WSL2 by entering `wsl` into the command line of any terminal in your computer.

## Getting comfortable with the command line

You might be thinking the following:

> Why are we getting to know the command line before knowing how to program?
> Why are we preferring the command line over the graphical user interface that someone has already made for us?

The thing is, the command line offers lots of control over our actions. Additionally, using the CLI burns in the thought process of "The computer will only do what you tell it to do," which is not so apparent with a GUI due to the layer of abstraction which is the interface itself.

### Comparisons: GUI versus CLI

- Intuitiveness: GUI is easily navigateable, while a CLI will need you to bring up its manual or its help pages. GUIs may offer accessibility options to aid those who need assistance (bad eyesight, hearing problems, language barrier, etc).
- Versatility: CLI requires the availability of all usecases within the program. Additionally, one only needs one window do perform multiple actions (with most running in the background). Meanwhile, GUIs need multiple interfaces to do a particular job.
- Computer resources: CLI is usually more efficient and flexible than GUI due to not needing resources to show a graphical interface.
- Coolness: CLI makes you feel like a hackerman 😎

### Further reading

Now that we've reasoned for our usage of the command line when programming, read [this document](./command-line-interface/README.md) to get to know more about the CLI.
