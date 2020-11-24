class lab:
    def __init__(self, name, role):
        txt = name
        x = txt.split()

        self.__name = name
        self.__role = role
        self.__email = x[0] + '(' + self.__role + ')' + '@somewhere.com'

    # getter method
    def get_name(self):
        return self.__name

    def get_role(self):
        return self.__role

    #def set_email(self):
      #  return self.__email = self.__name + '(' + self.__role + ')' + '@somewhere.com'

    def get_email(self):
        return self.__email


class SoftwareLab(lab):

    def __init__(self,marks):
         self.__marks = marks

    def get_marks(self):
        return self.__marks

name1 = input('\nEnter the Name:')
role1 = input('\nEnter the Role(S) or (I):')
obj1 = lab(name1, role1)

print('\nname : {} , role is : {}\n'.format(obj1.get_name(),obj1.get_role()))

print('{} ({}) at {} \n'.format(obj1.get_name(),obj1.get_role(),obj1.get_email()))

obj3 = SoftwareLab(input('marks: '))


if obj1.get_role() == 'S':

    print('\n{}({}) scored {}\n'.format(obj1.get_name(),obj1.get_role(),obj3.get_marks()))

elif obj1.get_role() == 'I':

    print('\n{}({}) can be reached at {}@somewhere.com\n'.format(obj1.get_name(), obj1.get_role(), obj1.get_name()))

else:

    print('\nyou enter invalid role\n')
