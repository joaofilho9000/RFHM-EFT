# RFHM-EFT
Estudy of phase diagram and tricritical behavior of an trimodal random field classical Heisenberg model.


In this project we developed a software in C to study the properties of the trimodal random field classical Heisenberg model.

The system under investigation is the amorphous classical heinenberg ferromagnet in a verson of a n-vector model in a trimodal random field.  The  model Hamiltonian then reads 
\begin{equation}
-\beta\mathcal{H}=\sum_{\left( i,j \right)}K_{ij}\mathbf{S}_i\mathbf{S}_j+\sum_i\mathbf{h}_i\mathbf{S}_i
\label{ham}
\end{equation}
%
Where $K_{ij}$ ($\equiv J_{ij}/k_BT$, $k_B$ is the Boltzmann constant and $T$ the temperature)  is the ferromagnetic exchange interaction between nearest neighbors on a simple cubic lattice.  The summation is carried out only over pairs of nearest-neighboring sites $(i, j )$. The quantities $\mathbf{S}_i$ are  isotropically interacting  $n$-dimensional classical spins  of magnitude $n$ localized at the sites $i$, and the Cartesian components of $\mathbf{S}_i$ obey  the normalization condition[stanley1969exact],
%
\begin{equation}
\sum_{ \nu}^{n} \left( S^{\nu}_i \right)^2=n,
\label{norm}
\end{equation}
%
the exchange interaction between the spins are quenched, uncorrelated random variables, which is assumed to be distributed according to the probability distribution function
%
\begin{equation}
P\left(K_{ij} \right)=\frac{ 1}{ 2}\left[ \delta\left(K_{ij}-K- \alpha K  \right)+  \delta\left(K_{ij}-K +\alpha K  \right) \right],
\label{pro}
\end{equation}
%
and the reduced random magnetic field $h_i$ at site $i$ comply the following trimodal distribution,
%
\begin{equation}
P\left(h_i \right)=p \delta\left(h_i\right) + \frac{1-p}{ 2}\left[ \delta\left(h_i+h\right)+  \delta\left(h_i-h  \right) \right], 
\label{pro}
\end{equation}
%
where h ($\equiv \mu_B H/k_BT$, $\mu_B$ is the Bohr magneton and $H$
is the random magnetic field) defines the disorder strength  and $p \in (0, 1)$. Clearly, for $p = 1$ one switches to the pure classical heinenberg ferromagnet,
whereas for $p = 0$ the well-known bimodal distribution is
recovered.
%
The Hamiltonian \ref{hamil} reduces to the well-known $S = 1/2$
Ising, classical planar (XY), classical Heisenberg and
spherical models for $n = 1, 2, 3$ and $\infty$, respectively.
In this Letter, we follow the EFT procedure (see Refs. [24–27]) to study the critical properties of the amorphous ferromagnet in a random field distribution described by Hamiltonian given by Eq.\ref{hamil} and employ
the axial approximation [28]. The Hamiltonian for a cluster with two spins can be written as

\begin{equation}
H=K_{12}\mathbf{S}_1\cdot \mathbf{S}_2 + a_1S_1^1+a_2S_2^1
\label{pro}
\end{equation}
%
where $a_l=h_l+\sum_{j\neq l}^{Z-1}K_{lj}S_j^1, (l=1,2) $ and $Z$ is the
lattice coordination number.

In order to obtain the average magnetization per spin $m=\frac{ 1}{ 2}\left\langle \left( S^1_1+S^1_1 \right) \right\rangle$ for a two-spin cluster, we employ the equation (see Refs. [7–10])

\begin{equation}
m=\left\langle \prod_{K \neq 1,2}^{z-1}(a_x+S_k^1\beta_x)\prod_{l \neq 1,2}^{z-1}(a_y+S_l^1\beta_y) \right\rangle\times 
 {g}_n(X,Y)\mid _{X=h_1,Y=h_2}
\label{pro}
\end{equation}



\begin{equation}
 {g}_n(X,Y)=\sinh(X+Y)\left[  \cosh(X+Y)+\exp(-2K_{1,2})T_n\left( {K_{1,2}} \right)\cosh(X-y) \right ]^{-1}
\label{pro}
\end{equation}


\begin{equation}
m=\left\langle \prod_{K \neq 1,2}^{z-1}(\Upsilon_x+S_k^1\Phi_x)\prod_{l \neq 1,2}^{z-1}(\Upsilon_y+S_l^1\Phi_y) \right\rangle\times {g}_n(X,Y)\mid _{X=h_1,Y=h_2}
\label{pro}
\end{equation}
%
where $\Upsilon_\nu=\cosh(K_{l,j}D_\nu)$ , $\Phi_\nu=\sinh(K_{l,j}D_\nu)$, $(\nu=x,y ;{l}=1,2 )$




