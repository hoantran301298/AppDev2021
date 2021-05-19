#include "appdev.h"

void Send_data(rock r)
{
    CURL* curl;
    CURLcode res;
    char postdata[100];
    sprintf_s(postdata, "min=%d&max=%d&user=%s", r.min, r.max, r.rname);

    /* In windows, this will init the winsock stuff */
    curl_global_init(CURL_GLOBAL_ALL);

    /* Get a curl handle */
    curl = curl_easy_init();
    if (curl) {
        /* First set the URL that is about to receive our POST. This URL can
           just as well be a https:// URL if that is what should receive the
           data. */
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2000575/TestCurl.php");
        /* Now specify the POST data */
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);

        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        /* Check for errors */
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        /* Always cleanup */
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
}