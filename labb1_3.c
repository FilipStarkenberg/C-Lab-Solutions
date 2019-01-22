#include <stdio.h>

int main(){
    float price = 0.0;
    int vat = 0;
    printf("Product price (VAT included): ");
    scanf(" %f",&price);
    printf("VAT in precent: ");
    scanf(" %d",&vat);
    float priceNoVat= (float) price/((100.0+vat)/100.0);
    float priceVat = (float) price-priceNoVat;
    printf("Product price VAT excluded: %f\n", priceNoVat);
    printf("VAT: %f\n", priceVat);
    return 0;
}
