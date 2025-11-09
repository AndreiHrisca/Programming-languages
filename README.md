# Programming Languages Playground

This repository gathers small tutorials and guides for several popular programming languages.  
The goal is to serve as a personal lab to compare syntax, compilation/execution flows,  
and best practices across different ecosystems.

## Included Languages
- [🧩 C#](#🧩-c)
- [⚙️ C++](#⚙️-c)
- [☕ Java](#☕-java)
- [🌐 JavaScript](#🌐-javascript)
- [🐘 PHP](#🐘-php)
- [🐍 Python](#🐍-python)
- [💎 Ruby](#💎-ruby)
- [🍏 Swift](#🍏-swift)
- [🧠 TypeScript](#🧠-typescript)
- [🐚 Bash](#🐚-bash)

<br>
<hr>

### 🧩 C#

**Short Description**  
Modern, multi-paradigm programming language created by Microsoft and running on the .NET platform.

**Common Use Cases**  
Desktop applications (WPF/WinUI), web APIs with ASP.NET, games in Unity, cloud services on Azure.

**Pros**  
- Strong and safe typing  
- Excellent tooling (Visual Studio, Rider)  
- Native performance with JIT + AOT  
- Cross-platform with .NET Core  

**Cons**  
- Ecosystem still closely tied to Microsoft  
- Heavy runtime for small scripts  
- Steep learning curve for .NET  

**Recommended Reading**  
- *C# 12 in a Nutshell* — Joseph Albahari  
- [Official Documentation](https://learn.microsoft.com/dotnet/csharp)

<br>
<hr>

### ⚙️ C++

**Short Description**  
An extension of C with object-oriented and multi-paradigm features; an ISO-standardized language offering fine-grained control over memory and performance.

**Common Use Cases**  
Game engines, embedded systems, high-performance software, machine learning libraries.

**Pros**  
- Extremely fast  
- Low-level access to memory and hardware  
- Rich standard library  
- Backward compatibility with C code  

**Cons**  
- Complex syntax  
- Manual memory management  
- Long compilation times  
- Potential for undefined behavior  

**Recommended Reading**  
- *The C++ Programming Language* — Bjarne Stroustrup  
- [Online Reference](https://en.cppreference.com)

<br>
<hr>


### ☕ Java

**Short Description**  
Object-oriented language running on the JVM, famous for its portability: “write once, run anywhere.”

**Common Use Cases**  
Enterprise back-end systems, native Android apps, financial and big data systems (Hadoop).

**Pros**  
- Mature ecosystem  
- Huge developer community  
- Efficient garbage collection  
- Stable performance with JIT  

**Cons**  
- Verbose syntax  
- Higher memory consumption  
- Slow startup compared to compiled languages  

**Recommended Reading**  
- *Effective Java* — Joshua Bloch  
- [Official Documentation](https://docs.oracle.com/javase)

<br>
<hr>


### 🌐 JavaScript

**Short Description**  
Interpreted language that runs in all browsers; with Node.js, it also works on the server side.

**Common Use Cases**  
Web front-end, real-time APIs, build tools, cross-platform scripting.

**Pros**  
- Ubiquitous on the web  
- Huge community  
- Non-blocking asynchronous model  
- Massive NPM ecosystem  

**Cons**  
- Dynamically typed and prone to runtime errors  
- Rapid evolution causes fragmentation  
- Callbacks and `this` can be confusing for beginners  

**Recommended Reading**  
- *You Don’t Know JS* (series) — Kyle Simpson  
- [MDN Web Docs](https://developer.mozilla.org)

<br>
<hr>

### 🐘 PHP

**Short Description**  
Server-side scripting language specialized in web development since its beginnings (1995).

**Common Use Cases**  
CMS platforms (WordPress, Drupal), back-ends with Laravel/Symfony, e-commerce sites, traditional shared hosting.

**Pros**  
- Low entry barrier  
- Inexpensive deployment  
- Extensive documentation  
- Wide availability of shared hosting  

**Cons**  
- Inconsistent design due to historical legacy  
- Reputation for “spaghetti code”  
- Lower performance compared to modern alternatives  

**Recommended Reading**  
- *PHP: The Right Way* (web resource)  
- [Official Manual](https://www.php.net/manual/en)

<br>
<hr>

### 🐍 Python

**Short Description**  
Interpreted, multi-paradigm language famous for its readability and vast collection of libraries.

**Common Use Cases**  
Data science, machine learning, automation, scripting, and back-end development (Django, Flask).

**Pros**  
- Clear and concise syntax  
- High developer productivity  
- Huge community and ecosystem  
- Easy C/C++ integration through extensions  

**Cons**  
- Slower execution compared to compiled languages  
- GIL limits native multi-threading  
- Dependency management and distribution can be tricky  

**Recommended Reading**  
- *Automate the Boring Stuff with Python* — Al Sweigart  
- [Official Documentation](https://docs.python.org/3)

<br>
<hr>
	
### 💎 Ruby

**Short Description**  
Dynamic, object-oriented language known for its focus on developer happiness.

**Common Use Cases**  
Web development with Rails, DevOps scripting, automation tools (CocoaPods, Jekyll).

**Pros**  
- Elegant and expressive syntax  
- Very high productivity with Rails  
- Welcoming and friendly community  

**Cons**  
- Lower performance compared to compiled languages  
- Smaller job market outside of Rails  
- Declining adoption in new projects  

**Recommended Reading**  
- *Programming Ruby (“Pickaxe”)* — Dave Thomas  
- *Agile Web Development with Rails* — Sam Ruby et al.

<br>
<hr>

### 🍏 Swift

**Short Description**  
General-purpose language created by Apple; designed to be safe and fast, serving as the successor to Objective-C.

**Common Use Cases**  
Native iOS/macOS/watchOS/tvOS development, server-side frameworks (Vapor, Kitura), quick scripting with `swift sh`.

**Pros**  
- High performance  
- Modern and expressive syntax  
- Strong type safety  
- Interactive playgrounds for learning and prototyping  

**Cons**  
- Primarily focused on the Apple ecosystem  
- Frequent language changes between versions  
- Fewer mature server-side frameworks  

**Recommended Reading**  
- *The Swift Programming Language* (Apple Books, free)  
- [Hacking with Swift](https://www.hackingwithswift.com)

<br>
<hr>

### 🧠 TypeScript

**Short Description**  
A typed superset of JavaScript that compiles to plain JS; adds static types and modern language features.

**Common Use Cases**  
Large front-end applications (Angular, React, Vue), scalable Node.js APIs, shared libraries.

**Pros**  
- Gradual typing prevents many runtime errors  
- Superior autocompletion and IDE support  
- Easier large-scale refactoring  
- Widely adopted in serious JavaScript projects  

**Cons**  
- Requires an additional compilation step  
- Learning curve for mastering the type system  
- Potential divergence between types and runtime behavior  

**Recommended Reading**  
- *Programming TypeScript* — Boris Cherny  
- [Official Documentation](https://www.typescriptlang.org/docs)

<br>
<hr>

### 🐚 Bash

**Short Description**  
Unix shell and command language designed for scripting and task automation; widely used in Linux, macOS, and server environments.

**Common Use Cases**  
System administration, DevOps automation, CI/CD pipelines, startup scripts, and quick command-line utilities.

**Pros**  
- Preinstalled on most Unix-based systems  
- Excellent for automating repetitive tasks  
- Integrates seamlessly with other command-line tools  
- Ideal for lightweight, fast scripting  

**Cons**  
- Limited data structures and error handling  
- Syntax can be confusing or inconsistent  
- Difficult to maintain in large scripts  
- Portability issues between different shells (bash, sh, zsh, etc.)  

**Recommended Reading**  
- *The Linux Command Line* — William E. Shotts, Jr.  
- [GNU Bash Manual](https://www.gnu.org/software/bash/manual/)
