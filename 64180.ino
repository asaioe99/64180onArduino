#include <EEPROM.h>

// ROM/RAM等の割り当て
// common area 1 はワークエリアとしてスタック等に利用

// 専用レジスタ定義
uint16_t reg_pc;
uint16_t reg_sp;
uint16_t reg_ix; //uint or not?
uint16_t reg_iy; //uint or not?

// MMUレジスタ
uint8_t reg_mmu_cba; //common/bank area register
uint8_t reg_mmu_bb;  //bank base register
uint8_t reg_mmu_cb;  //common base register

/*
物理アドレスの計算法は、p53を参照せよ
特に、1MByteを超えるあ癖薄について、桁あふれは無視さえれることに注意
*/

void init_reg() {
  reg_mmu_cba = 0xf0; // p51 fig4-3
  reg_mmu_bb = 0x00;  // p54
  reg_mmu_cb = 0x00;  // p54
}

void setup() {
  // レジスタ初期化
  init_reg();

}

void loop() {
  // put your main code here, to run repeatedly:

}
