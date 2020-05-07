int gcd(int a, int b) {
  if(b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}


int gcd = __gcd(a, b);


int lcm(int a, int b) {
  return (a / gcd(a, b)) * b;
}
