import matplotlib.pyplot as plt

def polar_nrz_l(inp):
    inp1=list(inp)
    inp1.insert(0,0)
    inp1=[-1 if i==0 else 1 for i in inp1]
    return inp1

def polar_nrz_i(inp):
    inp2=list(inp)
    lock=False
    inp2.insert(0,0)
    for i in range(len(inp2)):
        if inp2[i]==1 and not lock:
            lock=True
            continue
        if lock and inp2[i]==1:
            if inp2[i-1]==0:
                inp2[i]=1
                continue
            else :
                inp2[i]=0
                continue
        if lock:
            inp2[i]=inp2[i-1]
    inp2=[-1 if i==0 else 1 for i in inp2]
    inp2=[1 if i==-1 else -1 for i in inp2]
           
    return inp2
    
def Differential_manchester(inp):
    inp1=list(inp)
    li,lock,pre=[],False,''
    for i in range(len(inp1)):
        if inp1[i]==0 and not lock:
            li.append(-1)
            li.append(-1)
            li.append(1)
            lock=True
            pre='S'
        elif inp1[i]==1 and not lock :
            li.append(1)
            li.append(1)
            li.append(-1)
            lock=True
            pre='Z'
        else:
            if inp1[i]==0:
                if pre=='S':
                    li.append(-1);li.append(1)
                else:
                    li.append(1);li.append(-1)
            else:
                if pre=='Z':
                    pre='S'
                    li.append(-1);li.append(1)
                else:
                    pre='Z'
                    li.append(1);li.append(-1)
                         
    return li                        


def AMI(inp):
    inp1=list(inp)
    inp1.insert(0,0)
    lock=False
    for i in range(len(inp1)):
        if inp1[i]==1 and not lock:
            lock=True
            continue
        elif lock and inp1[i]==1:
            inp1[i]=-1
            lock=False
    return inp1 


def psudoternary(inp):
    
    inp1=list(inp)
    inp1.insert(0,1)
    lock=False
    for i in range(len(inp1)):
        if inp1[i]==0 and not lock:
            lock=True
            inp1[i] = 1
            
        elif lock and inp1[i]==0:
            inp1[i]=-1
            lock=False
        else:
            inp1[i] = 0    
    return inp1                   

if __name__=='__main__':
    
    li=[0,0,1,1,1,0,1,0]
   
    plt.ylabel("NRZ-L")
    plt.xlabel("0 0 1 1 1 0 1 0")
    plt.axhline(0, color='black')
    for i in range(9):
        plt.axvline(i, color='red', linestyle=':')
    
    plt.plot(polar_nrz_l(li),color='blue',drawstyle='steps-pre')
    plt.show()

    
    plt.ylabel("NRZ-I")
    plt.xlabel("0 0 1 1 1 0 1 0")
    plt.axhline(0, color='black')
    for i in range(9):
        plt.axvline(i, color='red', linestyle=':')
    plt.plot(polar_nrz_i(li),color='green',drawstyle='steps-pre')
    plt.show()
    
    
    
    plt.ylabel("Differential Manchester")
    plt.xlabel("0 0 1 1 1 0 1 0")
    plt.axhline(0, color='black')
    for i in range(16):
        plt.axvline(i, color='red', linestyle=':')
    plt.plot(Differential_manchester(li),color='green',drawstyle='steps-pre')
    plt.show()

    
    plt.ylabel("AMI")
    plt.xlabel("0 0 1 1 1 0 1 0")
    plt.axhline(0, color='black')
    for i in range(9):
        plt.axvline(i, color='red', linestyle=':')
    plt.plot(AMI(li),color='blue',drawstyle='steps-pre')
    plt.show()

   
    plt.ylabel("Psudoternary")
    plt.xlabel("0 0 1 1 1 0 1 0")
    plt.axhline(0, color='black')
    for i in range(9):
        plt.axvline(i, color='red', linestyle=':')
    plt.plot(psudoternary(li),color='blue',drawstyle='steps-pre')

    plt.show()
    