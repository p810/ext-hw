# ext-hw
> Hello world as a PHP extension

## Installing
```bash
git clone https://github.com/p810/ext-hw.git
cd ext-hw/
phpize
./configure
make
```

After building the extension:

1. Copy `./modules/hello.so` to PHP's extensions directory
2. Add the following line to your `php.ini`:
    - `extension = hello.so`

You can find the extension directory by running `php -i | grep extension_dir`, and `php.ini` with `php --ini`, respectively.

## API
### `hello_world(): string`
Returns a string containing "Hello world!"
