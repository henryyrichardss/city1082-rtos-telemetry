/*
 * Copyright (c) 2006-2020 Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 change-comment
 */
#include "mbed.h"
#include <ios>
#include <iostream>
#include <iomanip>
#include "display.h"
#include "sensors.h"


Thread sendingThreadHandle;
Thread displayThreadHandle;

int main(void)
{
    sendingThreadHandle.start(callback(sendThread));
    displayThreadHandle.start(callback(displayThread));
}
