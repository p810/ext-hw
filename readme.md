# ext-hw
> Hello world as a PHP extension

## Installing
```bash
git clone https://github.com/p810/ext-hello-world.git
cd ext-hello-world/
phpize
./configure
make
```

If all went well you should see a `modules/` subdirectory. Copy `hello.so` from this directory into the directory where PHP locates extensions. You can find what this setting is by running `php -i | grep extension_dir`.

## API
### `hello_world(): string`
Returns a string containing "Hello world!"
