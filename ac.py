import sys

def main():
    promlem_number = sys.argv[1]
    filename = 'README.md'

    with open(filename, 'r') as f:
        fileText = f.read()
        after = fileText.replace(f'| {promlem_number} |', f'| <font color="Red">{promlem_number}</font> |')

    with open(filename, 'w') as f:
        f.write(after)

if __name__ == '__main__':
    main()