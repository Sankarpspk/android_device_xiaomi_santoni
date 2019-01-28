/*
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 59d653af9608424cdc8e820024b90562c5aede19
 * Copyright (C) 2018, The Linux Foundation. All rights reserved.
 * Not a Contribution.
 *
 * Copyright (C) 2016 The Android Open Source Project
<<<<<<< HEAD
=======
=======
 * Copyright (C) 2017 The LineageOS jProject
>>>>>>> 2041679... whyred: Add basic USB HAL that reports no status change
>>>>>>> 59d653af9608424cdc8e820024b90562c5aede19
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

<<<<<<< HEAD
#define LOG_TAG "android.hardware.usb@1.1-service-qti"

#include <hidl/HidlTransportSupport.h>
#include "UsbGadget.h"
=======
#include <android-base/logging.h>
#include <hidl/HidlTransportSupport.h>
#include "Usb.h"
>>>>>>> 59d653af9608424cdc8e820024b90562c5aede19

using android::sp;

// libhwbinder:
using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;

// Generated HIDL files
<<<<<<< HEAD
using android::hardware::usb::gadget::V1_0::IUsbGadget;
using android::hardware::usb::gadget::V1_0::implementation::UsbGadget;

using android::OK;
using android::status_t;

int main() {
  android::sp<IUsbGadget> service = new UsbGadget();

  configureRpcThreadpool(1, true /*callerWillJoin*/);
  status_t status = service->registerAsService();

  if (status != OK) {
    ALOGE("Cannot register USB Gadget HAL service");
    return 1;
  }

  ALOGI("USB Gadget HAL Ready.");
  joinRpcThreadpool();
  // Under noraml cases, execution will not reach this line.
  ALOGI("USB Gadget HAL failed to join thread pool.");
  return 1;
=======
using android::hardware::usb::V1_0::IUsb;
using android::hardware::usb::V1_0::implementation::Usb;

int main() {
    android::sp<IUsb> service = new Usb();

    configureRpcThreadpool(1, true /*callerWillJoin*/);
    android::status_t status = service->registerAsService();

    if (status != android::OK) {
        LOG(ERROR) << "Cannot register USB HAL service";
        return 1;
    }

    LOG(INFO) << "USB HAL Ready.";
    joinRpcThreadpool();
    // Under noraml cases, execution will not reach this line.
    LOG(ERROR) << "USB HAL failed to join thread pool.";
    return 1;
>>>>>>> 59d653af9608424cdc8e820024b90562c5aede19
}
