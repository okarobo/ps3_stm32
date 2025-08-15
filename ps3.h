/*
 * File:    ps3.h
 * version: ver02.00 (2018/11/24)
 * Author:  hajime
 *
 * Created on 2018/11/19, 5:09
 */

#ifndef PS3_H
#define PS3_H

typedef volatile struct{
	// �R���g���[���̒l�i�[
    char up;
    char down;
    char right;
    char left;
    char sankaku;
    char batsu;
    char maru;
    char shikaku;
    char L1;
    char L2;
    char R1;
    char R2;
    char start;
    char select;
    char right_analog_updown;
    char right_analog_rightleft;
    char left_analog_updown;
    char left_analog_rightleft;

}Ps3;

void ps3_init(void);                        // �������֐��D�ŏ��ɂ��̊֐������s���Ȃ���΂Ȃ�Ȃ�
void ps3_uart_interrupt_routine(unsigned char uart_buff[], int data_size);	// UART���荞�݊֐����ł�������s�D
void ps3_get_data(Ps3 *ps3_data);           // ���݂̃R���g���[���̒l���擾
int ps3_time_out_check(void);               // �^�C���A�E�g�`�F�b�N(100ms�Ԋu���炢�Ŏ��s)

#endif /* PS3_H */
