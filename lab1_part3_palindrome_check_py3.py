
import subprocess

#n = input("Enter a number:")

n = input("Enter a number:")
direct_output = subprocess.run(['./gene_rev_n.out', str(n)], stdout=subprocess.PIPE)
print([direct_output, type(direct_output)])

output = int(direct_output.stdout)
print([output, type(output)])
