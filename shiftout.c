void shiftOut_begin() {

    setOutput(DDR, SHIFTOUT_CLK);
    setOutput(DDR, SHIFTOUT_SI);
    setOutput(DDR, SHIFTOUT_CP);
    clearBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_SI);
    clearBit(PORT, SHIFTOUT_CP);

}

void shiftOut_send(char byte) {

    //send bit 7
    if (1&(byte>>7)) {
        setBit(PORT, SHIFTOUT_SI);
    } else {
        clearBit(PORT, SHIFTOUT_SI);
    }

    setBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_CLK);

    //send bit 6
    if (1&(byte>>6)) {
        setBit(PORT, SHIFTOUT_SI);
    } else {
        clearBit(PORT, SHIFTOUT_SI);
    }

    setBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_CLK);

    //send bit 5
    if (1&(byte>>5)) {
        setBit(PORT, SHIFTOUT_SI);
    } else {
        clearBit(PORT, SHIFTOUT_SI);
    }

    setBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_CLK);

    //send bit 4
    if (1&(byte>>4)) {
        setBit(PORT, SHIFTOUT_SI);
    } else {
        clearBit(PORT, SHIFTOUT_SI);
    }

    setBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_CLK);

    //send bit 3
    if (1&(byte>>3)) {
        setBit(PORT, SHIFTOUT_SI);
    } else {
        clearBit(PORT, SHIFTOUT_SI);
    }

    setBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_CLK);

    //send bit 2
    if (1&(byte>>2)) {
        setBit(PORT, SHIFTOUT_SI);
    } else {
        clearBit(PORT, SHIFTOUT_SI);
    }

    setBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_CLK);

    //send bit 1
    if (1&(byte>>1)) {
        setBit(PORT, SHIFTOUT_SI);
    } else {
        clearBit(PORT, SHIFTOUT_SI);
    }

    setBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_CLK);

    //send bit 0
    if (1&(byte>>0)) {
        setBit(PORT, SHIFTOUT_SI);
    } else {
        clearBit(PORT, SHIFTOUT_SI);
    }

    setBit(PORT, SHIFTOUT_CLK);
    clearBit(PORT, SHIFTOUT_CLK);

    setBit(PORT, SHIFTOUT_CP);
    clearBit(PORT, SHIFTOUT_CP);

}