# 🍪 cookiecutters

My personal collection of [cookiecutters](https://github.com/cookiecutter/cookiecutter).

## Usage

Cookiecutter 1.7 added support for [organizing cookiecutters in directories](https://github.com/cookiecutter/cookiecutter/blob/master/docs/advanced/directories.rst). A particular cookecutter is used by running (replacing `<cookiecutter>` with the directory name).

```console
$ cookiecutter https://github.com/hugolundin/cookiecutters --directory="<cookiecutter>"
```

## TODO

There is a thing in Cookiecutter called [hooks](https://cookiecutter.readthedocs.io/en/latest/advanced/hooks.html) that allow you to run scripts before/after the project is generated. This could be useful for [initializing a git repository](https://stackoverflow.com/a/38557845/8522840). Unfortunately hooks are project specific so we would need to duplicate the script in every directory.

Here are some cookiecutters I would like to add in the future:

- [ ] C (executable)
- [ ] C (library)
- [ ] C using Epoll.
- [ ] C using Kqueue.
- [ ] C using Ragel for parsing.
- [ ] Python
- [ ] Python CLI with arguments and logging.
- [ ] Arduino with a seperate core in C.
- [ ] Rust
- [ ] Erlang
- [ ] Pandoc
- [ ] LaTeX (with plugins?)
- [ ] Barebones STM32
- [ ] FreeRTOS STM32
- [ ] Verilog
