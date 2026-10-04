
# VLSI LAB — 1-BIT AND 8-BIT FULL ADDER USING VHDL

<p align="center">

  <img src="https://img.shields.io/badge/VHDL-IEEE%20STD--1164-blue?style=for-the-badge" alt="VHDL">

  <img src="https://img.shields.io/badge/Xilinx-ISE%2014.7-red?style=for-the-badge" alt="Xilinx ISE">

  <img src="https://img.shields.io/badge/ISim-Simulator-orange?style=for-the-badge" alt="ISim">

  <img src="https://img.shields.io/badge/VirtualBox-Windows%2010-183A61?style=for-the-badge" alt="VirtualBox">

  <img src="https://img.shields.io/badge/VHDL-Hierarchical%20Design-purple?style=for-the-badge" alt="VHDL">

  <img src="https://img.shields.io/badge/GitHub-Repository-black?style=for-the-badge&logo=github" alt="GitHub">

</p>

<p align="center">

## 🔢  Design of a 1-Bit Full Adder and 8-Bit Adder

### From Basic Logic Gates → Half Adder → Full Adder → 4-Bit Adder → 8-Bit Adder

</p>

---



# 📖 PROJECT OVERVIEW

This repository contains the complete implementation and simulation of a **1-bit Full Adder** and an **8-bit Ripple Carry Adder** using **VHDL**.

The project was developed as a VLSI / Digital Logic Laboratory project using:

- Oracle VM VirtualBox
- Windows 10
- Xilinx ISE Design Suite 14.7
- ISim Simulator
- VHDL
- Git
- GitHub

The project follows a **bottom-up hierarchical design methodology**.

Instead of designing an 8-bit adder directly, the design was developed step-by-step from basic logic gates.

The basic components were first designed and tested individually. These verified components were then combined to create a Half Adder and Full Adder.

The verified **1-bit Full Adder from Project 1** was then reused to construct the **4-bit Adder**, and the 4-bit design was subsequently used to construct the **8-bit Adder**.

---

# 🎯 PROJECT OBJECTIVES

The main objectives of this project are:

1. To understand basic digital logic gates using VHDL.
2. To design and simulate a NAND gate.
3. To design and simulate a NOT gate.
4. To design and simulate an AND gate.
5. To design and simulate an XOR gate.
6. To construct and verify a Half Adder.
7. To construct and verify a 1-bit Full Adder.
8. To understand hierarchical VHDL design.
9. To understand component reuse.
10. To reuse the verified Full Adder from Project 1.
11. To construct a 4-bit Ripple Carry Adder.
12. To construct an 8-bit Ripple Carry Adder.
13. To create VHDL testbenches for the individual modules.
14. To simulate the designs using Xilinx ISE 14.7 and ISim.
15. To verify the correctness of the designs using simulation waveforms.
16. To demonstrate modular and reusable digital hardware design.

---

# 🖥️ DEVELOPMENT ENVIRONMENT

| Tool | Purpose |
|---|---|
| Oracle VM VirtualBox | Virtual machine environment |
| Windows 10 | Operating System |
| Xilinx ISE Design Suite 14.7 | VHDL development and synthesis |
| ISim | VHDL simulation and waveform analysis |
| VHDL | Hardware Description Language |
| Git | Version control |
| GitHub | Source code repository |

---

# 🧩 COMPLETE PROJECT CONCEPT

The complete project was developed in two major parts.

## PROJECT 1 — 1-BIT FULL ADDER

The first project develops a **1-bit Full Adder** from basic logic components.

```text
NAND Gate
    ↓
NOT Gate
    ↓
AND Gate
    ↓
XOR Gate
    ↓
Half Adder
    ↓
1-Bit Full Adder

````

---

## PROJECT 2 — 4-BIT AND 8-BIT ADDER

The second project reuses the already completed and verified **1-bit Full Adder**.

```text
Existing 1-Bit Full Adder
          │
          │ × 4
          ▼
    4-Bit Ripple Carry Adder
          │
          │ × 2
          ▼
    8-Bit Ripple Carry Adder
```

Therefore, the second project does not require designing a new Full Adder from the beginning.

The existing verified Full Adder becomes a reusable hardware building block.

---

# 🏗️ PROJECT ARCHITECTURE

The complete architecture can be represented as:

```text
                         │      8-BIT ADDER         │
                         └────────────┬─────────────┘
                                      │
                    ┌─────────────────┴─────────────────┐
                    │                                   │
                    ▼                                   ▼
          ┌──────────────────┐                ┌──────────────────┐
          │   4-BIT ADDER    │                │   4-BIT ADDER    │
          └────────┬─────────┘                └────────┬─────────┘
                   │                                   │
          ┌────────┼────────┐                 ┌────────┼────────┐
          │        │        │                 │        │        │
          ▼        ▼        ▼                 ▼        ▼        ▼
         FA       FA       FA                FA       FA       FA
          │        │        │                 │        │        │
          └────────┴────────┘                 └────────┴────────┘
                   │                                   │
                   └────────────────┬──────────────────┘
                                    │
                                    ▼
                              1-BIT FULL ADDER
                                    │
                         ┌──────────┴──────────┐
                         │                     │
                         ▼                     ▼
                    HALF ADDER            HALF ADDER
                         │                     │
                         └──────────┬──────────┘
                                    │
                              XOR + AND LOGIC
                                    │
                         ┌──────────┴──────────┐
                         │                     │
                         ▼                     ▼
                        XOR                   AND
                         │                     │
                        NOT                   NAND
```

```
```
