document.addEventListener("DOMContentLoaded", function () {
    const sections = document.querySelectorAll("section");
  
    window.addEventListener("scroll", function () {
      let current = "";
  
      sections.forEach((section) => {
        const sectionTop = section.offsetTop;
        const sectionHeight = section.clientHeight;
        if (pageYOffset >= sectionTop - sectionHeight / 3) {
          current = section.getAttribute("id");
        }
      });
  
      const navLinks = document.querySelectorAll("nav ul li a");
      navLinks.forEach((a) => {
        a.classList.remove("active");
        if (a.getAttribute("href").substring(1) === current) {
          a.classList.add("active");
        }
      });
    });
  });
  