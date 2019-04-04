#include <iostream>

using std::cout;
using std::endl;

void funcion(int N);
float x;
int i;
float ii;

int main(){
    drand(48)
    for (i=0;i=1000; i++){
        funcion(1000);
        cout << ii << "" << endl;
    }
    
}

void funcion(int N){
    
    
}
    float y (float x){
        float x = exp(-x*x/2);
        if ( (x > 3.14) | (x<0)){
            y = 0
        }else {
        ii = ( x > 3.14) | ( x < 0)
        ii = 0}
    }
             

def f(x):
    y = 0.5 * np.sin(x)
    if(np.isscalar(x)):# esto va a funcionar si entra un numero
        if (x>np.pi) | (x<0):
            y = 0
    else: #esto va a funcionar si entra un array
        ii = (x>np.pi) | (x<0)
        y[ii] = 0.0
    return y

def metropolis(N=100000, sigma_delta=1.0):
    lista = [np.random.random()*np.pi]

    for i in range(1,N):
        propuesta  = lista[i-1] + np.random.normal(loc=0.0, scale=sigma_delta)
        r = min(1,f(propuesta)/f(lista[i-1]))
        alpha = np.random.random()
        if(alpha<r):
            lista.append(propuesta)
        else:
            lista.append(lista[i-1])
    return np.array(lista)


lista_a = metropolis()
lista_b = metropolis(sigma_delta=1E-3)
lista_c = metropolis(sigma_delta=1E3)

x = np.linspace(0, np.pi, 100)
y = f(x)

plt.figure()

plt.plot(x, f(x), label='Funcion Analitica')
_ = plt.hist(lista_a, density=True, label='$\sigma_{\delta}=1$', bins=x)
_ = plt.hist(lista_b, density=True, label='$\sigma_{\delta}=10^{-3}$', bins=x)
_ = plt.hist(lista_c, density=True, label='$\sigma_{\delta}=10^{3}$', bins=x)
plt.xlabel('x')
plt.ylabel('PDF(x)')
plt.legend()
plt.savefig('metropolis_delta.png')
