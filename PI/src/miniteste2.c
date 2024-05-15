#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex1()
{
    int soma1 = 0, soma2 = 0;
    char resposta = ' ';
    // char *s = "IW9EltHFaZl9m36rMwNw4aLFUiwiip6329HjgyzCX67IbSk3SKi0SjKfVVCVRZRtuX5ttgPqHWZDaqb7Hswfpwgm9uJsp0t4zt0AnBo5cCwB9fltDPr68o2Xu8KCiG6RUBZ5A8BvnCmYjhIj3YAwxlPmd5YXxuEGUag8EY2FaH10DeUmzZO71PcIlfP5NwMCBdzYm8r5JcYO3YF4yvRH0u5ON6nn0Bkoms354EF2ZuM43xbHy0BDVTyl3pImeRRDhRkwCEnLO2Cb9P2G0HRXAYot4XPANRzWfeT6mt1XHuXpbzsuypGrajAjVLLCbfXidRgsfNluIALRILHS3SbsN0FA00mv08t9lJaGhufKs3CGwlKDjzgpPXn2G2sjw8IzT69OepFvbQ1vq8WbABjEI0CXRYn1f1JkAGCmKtne3oPGAGQtd5Ylb6LlKPNbLdxqnHyCHy8L9mPKzODJMkQWaswCfuwRJI3yB4e5CIMQMYrA5a2OSkw6EtEesyjZcS0zqpq0Mur8Cl29Rh9JSIaUWH2yF71gGCyW2UgHKTL29led02WpXBc89WGWSv8c2PuCbVIxHnGPzKRdEpo09qZOU73r3m0YnvPDZHNbZj0z6143qaUnc6Bs8lZk8zDao7yii9gXx5m2Y99jnDnatvP16PIQbiqiN64M57ce08zxIPJgTN9KZfjBH9ssoQJARzkM5p2m2VtAnWhmJUL0emKR6TQmn6XYN6ur8sGptsNqgJQ4iUHrj2lo09rvqVURc5Kbqxg5NcQHwm7TJj1jPbwfKFR1Bd3y5GqnNZE5CP2Q1FXTsrNY7oPWXzkGscT10sozAUWqN9FuFAWuQrtAkdEZPJVzrolMjulTKG3g2aokdPWVqqZEyvLVMiXoz57hsqcj5RFrCIcxoMyZ71Cj8yNCF5QnjYxZQkVqXi3OjXtf9yOsE4z5P3MteElQCyYt0tcoe8MBAg26AEp4KTugA7FMpIpWIsCDBm1FxYmwAZPIdvkaYjc4Pj3rkpmBFJt4Y3Sc";
    char *s = "3PiOGnRcpl2y4BqGVldaVxNfXVShhzoVicayLGqOLZEqPRmpPcBv4ihuyh0K82TPZRBrZMn3aQyt898PCzvRCpqSo7FAwcCA3lzj67oMtpwMrLeEaHbbtIMCf74wWcntKt83NrTGH5miQ3aeon8QGFsM0iykFSl3CFiZHHSdnInN422ne7LKEmoUQ7KQ3OSjs1ZSa8Q6W4ZEpgwbr88Hs8ntoBU92TiumFhPqviKzuSEKC9xKocsgVXC2KLgkJdGehdHr4J2rP7BfHFaXEIc1WjvEtXanTXRxySGg6FmLAQOLEPl3aUkw7q9wLtklFw1VeN0RyELrm8W615BrMeKTjMlVWth3UasfxLZ7rgNdpkudLgmmXWzUOK5VXNwmkPqSkantUR4vxGHVXuwZkdtDe17nw81CHDc4MxRjzC6VmBtp8uEVWw3Vxg4Vqy5X5aLLqElaJwCZO28vzMCJqo2StxzMYRoznOo6SNrFF2Rav3KbkvcAjCNSqs27XAn8H5kzbmbQAcqsGoPcTksXyGdlB1M88grHPBbaQoOdoxIb7XhSjDgroSz9aPr0okHl7QpgVYzdPYQmvxuzYW4UHpJuKt9UxBuvJD8x6HC5SxqyF0nZhsMkX2EcWOLfPLnHHQ86VMIqzdzlxk1WSY15CPsiSwtAyNa5BQVQk3vP5DIreD8xhF4ohBqUKD9CURZBHXOgL9jo2LoXsbsZJTlSsrAzZwuhbvFJqYcaNMc477AFLMF2KRPBYJf6YYt9PZUa4hyK71ztznwa5zLRVnWKcCSPMYegY2PdHYhqVmDJCUIzSN8lrVyieKouTStnNHe4POj897z938B5VlmQmLC7vUcrmLXsG7K4h9bwu3bOvN57Qz2vUMqoAUygc2U0BHxufRyIN5skzsG5id4AaAyetlCE3bwBEJ3AgeIZE4q3rJ7RzEi6kekaIwspQmduDdXZ06bh2ZSXzYWI7Napp1OiZJ4opWyqlcYNUZDj2VaqtNM85SvJRHWVmFvfQuyyhBUcUMo";
    for (int i = 0; s[i]; i++)
    {
        soma1 = 0;
        soma1 = s[i] + s[i+1] + s[i+2];
        if (soma1 < soma2) 
        {
            soma2 = soma1;
            resposta = s[i];
        }
    }
    printf("%c\n", resposta);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s = "3PiOGnRcpl2y4BqGVldaVxNfXVShhzoVicayLGqOLZEqPRmpPcBv4ihuyh0K82TPZRBrZMn3aQyt898PCzvRCpqSo7FAwcCA3lzj67oMtpwMrLeEaHbbtIMCf74wWcntKt83NrTGH5miQ3aeon8QGFsM0iykFSl3CFiZHHSdnInN422ne7LKEmoUQ7KQ3OSjs1ZSa8Q6W4ZEpgwbr88Hs8ntoBU92TiumFhPqviKzuSEKC9xKocsgVXC2KLgkJdGehdHr4J2rP7BfHFaXEIc1WjvEtXanTXRxySGg6FmLAQOLEPl3aUkw7q9wLtklFw1VeN0RyELrm8W615BrMeKTjMlVWth3UasfxLZ7rgNdpkudLgmmXWzUOK5VXNwmkPqSkantUR4vxGHVXuwZkdtDe17nw81CHDc4MxRjzC6VmBtp8uEVWw3Vxg4Vqy5X5aLLqElaJwCZO28vzMCJqo2StxzMYRoznOo6SNrFF2Rav3KbkvcAjCNSqs27XAn8H5kzbmbQAcqsGoPcTksXyGdlB1M88grHPBbaQoOdoxIb7XhSjDgroSz9aPr0okHl7QpgVYzdPYQmvxuzYW4UHpJuKt9UxBuvJD8x6HC5SxqyF0nZhsMkX2EcWOLfPLnHHQ86VMIqzdzlxk1WSY15CPsiSwtAyNa5BQVQk3vP5DIreD8xhF4ohBqUKD9CURZBHXOgL9jo2LoXsbsZJTlSsrAzZwuhbvFJqYcaNMc477AFLMF2KRPBYJf6YYt9PZUa4hyK71ztznwa5zLRVnWKcCSPMYegY2PdHYhqVmDJCUIzSN8lrVyieKouTStnNHe4POj897z938B5VlmQmLC7vUcrmLXsG7K4h9bwu3bOvN57Qz2vUMqoAUygc2U0BHxufRyIN5skzsG5id4AaAyetlCE3bwBEJ3AgeIZE4q3rJ7RzEi6kekaIwspQmduDdXZ06bh2ZSXzYWI7Napp1OiZJ4opWyqlcYNUZDj2VaqtNM85SvJRHWVmFvfQuyyhBUcUMo";
    char min_substring[4];
    strncpy(min_substring, s, 3);
    min_substring[3] = '\0';

    for (int i = 1; s[i+2]; i++)
    {
        char current_substring[4];
        strncpy(current_substring, &s[i], 3);
        current_substring[3] = '\0';

        if (strcmp(current_substring, min_substring) < 0)
        {
            strcpy(min_substring, current_substring);
        }
    }
    printf("%s\n", min_substring);
}