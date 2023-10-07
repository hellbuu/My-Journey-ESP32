// utilizando logs

#include <stdio.h>
#include <esp_log.h>

void app_main(void){
    // logs disponíveis
    // o primeiro parâmetro é a tag que identifica o trecho do código

    // podem ir até três argumentos
    ESP_LOGE("LOG1", "ERRO");

    // posso usar o warning para me avisar quando uma leitura ultrapassar um valor
    ESP_LOGW("LOG2", "WARNING");

    // estou inicializando uma task, resetei o esp, etc
    ESP_LOGI("LOG3", "INFORMAÇÃO");
    ESP_LOGD("LOG4", "DEBUG");

    // informações gerais
    ESP_LOGV("LOG5", "VERBOSE");


}