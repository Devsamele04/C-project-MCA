# 💻 C Language Mini Projects

A collection of beginner-friendly console-based applications developed using the **C programming language**. These projects demonstrate fundamental programming concepts, conditional logic, loops, input/output operations, and menu-driven programming.

## 📂 Projects

### ⚡ 1. Electricity Bill Calculator System

A console-based application that calculates electricity bills for Domestic and Commercial consumers based on their electricity consumption.

**Features**
- Customer details and electricity units input
- Separate Domestic and Commercial billing rates
- Slab-wise electricity charge calculation
- Fixed charges based on customer category
- 5% surcharge when energy charges exceed ₹2,000
- ₹50 subsidy for eligible Domestic consumers consuming up to 100 units
- Itemized electricity bill with final payable amount
- Menu-driven interface

**Billing Rates**

| Units | Domestic | Commercial |
|---|---:|---:|
| First 100 units | ₹3/unit | ₹5/unit |
| 101–200 units | ₹5/unit | ₹7/unit |
| 201–300 units | ₹7/unit | ₹10/unit |
| Above 300 units | ₹9/unit | ₹12/unit |
| Fixed charge | ₹100 | ₹250 |

### 🏦 2. Banking System

A menu-driven banking application that simulates basic banking operations with account authentication.

**Features**
- Account number and PIN authentication
- Maximum three login attempts
- Check current account balance
- Deposit money with amount validation
- Withdraw money with sufficient-balance checking
- Transfer money with receiver account validation
- View account information and account status
- Menu continues until the user selects Exit

**Demo Login Credentials**

- Account Number: `12345`
- PIN: `1234`
- Initial Balance: ₹5,000

> **Note:** This is an educational simulation, not a real banking application. It does not save account data permanently or credit transferred money to another account.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Concepts:** Variables, data types, operators, `if-else`, loops, `switch-case`, input validation, and console input/output.

## 🚀 How to Run the Projects

Make sure GCC is installed on your system.

### Electricity Bill Calculator

Compile:

```bash
gcc bill.c -o bill
```

Run on Windows:

```bash
electricity_bill.exe
```

### Banking System

Compile:

```bash
gcc bank.c -o bank
```

Run on Windows:

```bash
bank.exe
```

*Note: Replace the source filenames in these commands if your files have different names.*

## 🎯 Learning Objectives

Through these projects, I practised:

- Writing structured C programs
- Using conditional statements and loops
- Developing menu-driven applications
- Implementing calculations and business rules
- Validating inputs and handling invalid transactions
- Understanding basic login authentication and balance management

## 🔮 Future Improvements

- Improve input validation and error handling
- Store customer and account information in files
- Support multiple bank accounts and simulated receiver credits
- Add transaction history
- Improve authentication and account security

## 👨‍💻 Author

**Dev Samele**

- GitHub: [My GitHub Profile](https://github.com/)

---

⭐ These projects were developed for learning and practising fundamental C programming concepts.
