// #include <iostream>
// #include <random>
// #include <cmath>
// #include <ctime>

// std::mt19937 rng(time(nullptr));

// // Renvoie un flottant entre 0 et 1
// double uniform_0_1() {
//     //return (rng() % 10000) / 10000.0;
//     return std::generate_canonical<double, 10>(rng);
// }

// int main() {

//     // 1. Bernoulli(p)
//     // Exemple : savoir si un pion est promu automatiquement ou non (mode aléatoire), c'est à dire que lors de la promotion, le pion est soit promu en dame soit le joueur possède le choix de choisir la pièce qu'il souhaite
//     double p_bernoulli = 0.5;
//     bool autoPromote = uniform_0_1() < p_bernoulli;
//     // E[X] = p ; Var[X] = p(1 - p)

//     // 2. Poisson(lambda)
//     // Exemple : nombre d'erreurs joués lors d'une partie
//     double lambda = 2.0;
//     int k = 0;
//     double L = std::exp(-lambda);
//     double p = 1.0;
//     while (p > L) {
//         k++;
//         p *= uniform_0_1();
//     }
//     int botErrors = k - 1;
//     // E[X] = λ ; Var[X] = λ

//     // 3. Loi Normale
//     // Exemple : temps de réflexion simulé pour chaque coup dans une partie entre bots pour faire penser que le bot joue comme un humain
//     double mu = 10.0, sigma = 2.0;
//     double u1 = uniform_0_1();
//     double u2 = uniform_0_1();
//     double z = std::sqrt(-2.0 * std::log(u1)) * std::cos(2 * M_PI * u2);
//     double normalSample = mu + sigma * z;
//     // E[X] = μ (moyenne) ; Var[X] = σ² (dispersion)

//     // 4. Exponentielle(lambda)
//     // Exemple : délais entre coups (mode blitz), permets de simuler des délais aléatoires mais rapides entre les coups, particulièrement utile en mode blitz
//     double lambda_exp = 0.5;
//     double expSample = -std::log(uniform_0_1()) / lambda_exp;
//     // E[X] = 1/λ ; Var[X] = 1/λ²

//     // 5. Uniforme continue [a, b]
//     // Exemple : placement aléatoire d'une pièce, permets de remplir le plateau avec des pièces selon une proba
//     double a = 0.0, b = 1.0;
//     double uniformSample = a + (b - a) * uniform_0_1();
//     // E[X] = (a + b)/2 ; Var[X] = (b - a)² / 12

//     // 6. Géométrique(p)
//     // Exemple : nombre d'essais avant de jouer un bon coup, utile lors d'un mode d'entrainement
//     // Exemple 2 : nombre d'essais avant de trouver une case valide de déplacement dans le cadre où on ne voit pas les possibilités de coups valides
//     double p_geom = 0.3;
//     int geom_k = 1;
//     while (uniform_0_1() > p_geom) {
//         geom_k++;
//     }
//     // E[X] = 1/p ; Var[X] = (1 - p) / p²
// }
