#!/usr/bin/python3

def defines(name, suffix):
    print(f'const can_function {name}[] = {{')
    for instance in (0, 1):
        for function in 'HI':
            for port in 'ABCD':
                for idx in range(32):
                    pin = f'P{port}{idx:02d}'
                    pinmux = f'PINMUX_{pin}{function}_CAN{instance}_{suffix}'
                    print(f'''\
#if defined({pinmux}) && !defined(IGNORE_PIN_{pin})
    {{PIN_{pin} >> 5, PIN_{pin} & 0x1f, {instance}, {pinmux} & 0xf}},
#endif''')
    print(f'}};')

print('''\
struct can_function {
  unsigned port : 3;
  unsigned pin : 5;
  unsigned instance : 1;
  unsigned mux : 4;
};
''')

defines('can_rx', 'RX')
print()
defines('can_tx', 'TX')
