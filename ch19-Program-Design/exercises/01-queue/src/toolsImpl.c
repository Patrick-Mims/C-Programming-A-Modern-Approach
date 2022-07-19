#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>

#include "queue.h"

CURL *curlFactory()
{
  CURL *curl = curl_easy_init();

  if(curl == NULL)
    exit(EXIT_FAILURE);

  printf("curl-> %p\n", curl);

  return curl;
}

void ghEvents()
{
  CURL *c = curlFactory();
  CURLcode code;

  curl_easy_setopt(c, CURLOPT_URL, "https://api.github.com/repos/Patrick-Mims");
  curl_easy_setopt(c, CURLOPT_FOLLOWLOCATION, 1L);

  code = curl_easy_perform(c);

  if(code != CURLE_OK)
    fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(code));

  curl_easy_cleanup(c);
}
