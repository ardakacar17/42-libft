*This project has been created as part of the 42 curriculum by akacar.*

## Açıklama
Libft, 42 müfredatının ilk projesidir. Bu projenin amacı, gelecekteki müfredat görevleri boyunca kullanılacak çok sayıda genel amaçlı fonksiyonu içerecek bir C kütüphanesini sıfırdan kodlamaktır. Standart C kütüphanesi (libc) davranışlarını, bellek yönetimini (memory allocation) ve temel veri yapılarını derinlemesine anlamayı sağlar.

## Detaylı Kütüphane İçeriği
Bu kütüphane üç ana bölümden oluşmaktadır:
* **Bölüm 1 - Libc Fonksiyonları:** Standart C kütüphanesi fonksiyonlarının (örn. `ft_strlen`, `ft_memset`, `ft_memcpy`, `ft_isalpha`) özel olarak yeniden yazılmış versiyonları.
* **Bölüm 2 - Ek Fonksiyonlar:** Standart libc'nin parçası olmayan ancak string manipülasyonu ve bellek tahsisi için oldukça faydalı yardımcı fonksiyonlar (örn. `ft_split`, `ft_strtrim`, `ft_itoa`).
* **Bölüm 3 - Bağlı Listeler (Bonus):** Bağlı liste (linked list) veri yapılarını oluşturmak, üzerinde gezinmek ve değiştirmek için tasarlanmış fonksiyonlar (örn. `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`).

## Talimatlar
Kütüphaneyi derlemek için projede bulunan `Makefile` dosyasını kullanabilirsiniz. Derleyici olarak katı kurallara sahip (`-Wall -Wextra -Werror`) `cc` kullanılmıştır.

Terminalde aşağıdaki komutları çalıştırabilirsiniz:
* `make` - Zorunlu kısmı derler ve `libft.a` kütüphanesini oluşturur.
* `make bonus` - Bağlı liste fonksiyonlarını derler ve `libft.a`'ya dâhil eder.
* `make clean` - Derleme sırasında oluşan obje (`.o`) dosyalarını siler.
* `make fclean` - Obje dosyalarını ve ana `libft.a` dosyasını tamamen siler.
* `make re` - Kütüphaneyi temizleyip sıfırdan tamamen yeniden derler.

## Kaynaklar
* **Dokümantasyon:** Orijinal libc fonksiyonlarının tam olarak beklenen davranışlarını, dönüş değerlerini ve uç durumlarını anlamak için `man` sayfalarından (örn. `man 3 string`) yoğun şekilde faydalanılmıştır.
* **Yapay Zeka (AI) Kullanımı:** Geliştirme iş akışımda GitHub Copilot (OpenAI ve Anthropic modellerine erişim sağlayarak) kullanılmıştır. Yapay zeka kesinlikle doğrudan kod veya mantık üretmek için değil; yalnızca karmaşık işaretçi (pointer) aritmetiğini teorik olarak anlamak, `memmove` gibi bellek çakışması (overlap) konseptlerini netleştirmek ve 42 Norm kurallarını kavramak için bir rehber olarak değerlendirilmiştir. Projenin kodlanması ve problem çözme süreçleri tamamen kişisel entelektüel çabayla gerçekleştirilmiştir.