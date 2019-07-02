# Modify the kebabize function so that it converts a camel case string into a kebab case.

# kebabize('camelsHaveThreeHumps') // camels-have-three-humps
# kebabize('camelsHave3Humps') // camels-have-humps


def kebabize(string):
    output = ''
    for i in string:
        if i.isalpha():
            if i.isupper():
                output += '-' + i.lower()
            else:
                output += i
    if len(output) > 0:
        return output if output[0] != '-' else output[1:]
    else:
        return ''
