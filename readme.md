# STM32F429I_DISCO_REV_D01 — TouchGFX Demo / TBS

**Description**
Ce dépôt contient la configuration et les sources pour la carte **STM32F429I‑DISCO (rev D01)** avec une application TouchGFX (résolution 320×240, 16 bpp). Le projet fournit des fichiers de build et des configurations pour plusieurs environnements : **STM32CubeIDE**, **EWARM**, **MDK‑ARM** et **GCC (Makefile)**.

---

## Table des matières
- [Statut](#statut)
- [Prérequis](#prérequis)
- [Structure du projet](#structure-du-projet)
- [Build](#build)
- [Flash / Déploiement](#flash--déploiement)
- [Test & Profiling](#test--profiling)
- [Contribuer](#contribuer)
- [Licence](#licence)
- [Contact](#contact)

---

## Statut ✅
Le projet fonctionne pour la carte **STM32F429I‑DISCO D01**. TouchGFX Designer peut flasher la carte lorsqu'il est configuré avec la toolchain GCC et **STM32CubeProgrammer**.

## Prérequis 🔧
- **STM32CubeIDE v20.0.0** (recommandé)
- **STM32CubeMX v6.16.1** (utilisé pour la configuration `.ioc`)
- **TouchGFX Designer v4.26** (pour la génération des assets et la possibilité de flasher depuis l'IDE TouchGFX)
- Alternatives / toolchains :
  - EWARM (>= 8.50.9),
  - MDK‑ARM,
  - GCC toolchain (Makefile fourni)
- **STM32CubeProgrammer** (GUI ou CLI) pour le flash

> Optionnel : Python, CMake selon configuration locale.

## Structure du dépôt 📁
- `Core/` — code applicatif, FreeRTOS, HAL
- `Drivers/` — BSP, drivers, HAL
- `TouchGFX/` — assets, fichiers générés par TouchGFX, simulateur
- `STM32CubeIDE/`, `EWARM/`, `gcc/` — configurations et fichiers de build

## Build 🔨
### STM32CubeIDE
1. Ouvrir `STM32F429I_DISCO_REV_D01.ioc` avec STM32CubeMX ou STM32CubeIDE
2. Générer le code pour **STM32CubeIDE** et lancer la compilation

### GCC / Makefile
Ouvrir un terminal dans le dossier racine du projet et exécuter :

```
make -f Makefile
```

(puis flasher le binaire généré avec STM32CubeProgrammer)

### EWARM / MDK‑ARM
Ouvrir le workspace correspondant (`.eww`, `.uvprojx`), sélectionner la configuration souhaitée et builder.

> Remarque : TouchGFX génère des fichiers d'assets et du code GUI — si tu utilises TouchGFX Designer, exécute la génération depuis l'outil avant de builder le firmware.

## Flash / Déploiement 🚀
- Via **STM32CubeProgrammer** (GUI ou CLI) :
  1. Connecter la carte via ST‑LINK
  2. Charger le fichier `.bin` / `.hex` généré
  3. Démarrer le flash
- Via **TouchGFX Designer** : si configuré pour GCC + CubeProgrammer, utiliser la fonction intégrée de flash après génération

## Test & Profiling ⚙️
Pins GPIO dédiés pour mesurer la performance (oscilloscope / logic analyser) :
- **VSYNC_FREQ** — Pin `PE2`
- **RENDER_TIME** — Pin `PE3`
- **FRAME_RATE** — Pin `PE4`
- **MCU_ACTIVE** — Pin `PE5`

## Contribuer 🤝
1. Fork → branch → PR
2. Expliquer la modification et joindre des tests ou captures si nécessaire
3. Respecter la structure et les conventions du projet

## Licence 📜
Ajoute ici la licence du projet (p.ex. MIT, BSD). Si tu veux, je peux ajouter un fichier `LICENSE` correspondant.

## Contact / Support
Pour toute question, ouvre une issue sur GitHub ou contacte le mainteneur du dépôt.

---

*Fichier mis à jour automatiquement — si tu veux des versions bilingues (FR/EN) ou des instructions plus détaillées pour une toolchain précise, dis‑le et j'ajoute.*
