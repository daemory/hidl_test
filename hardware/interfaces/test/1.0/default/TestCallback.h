#ifndef ANDROID_HARDWARE_TEST_V1_0_TESTCALLBACK_H
#define ANDROID_HARDWARE_TEST_V1_0_TESTCALLBACK_H

#include <android/hardware/test/1.0/ITestCallback.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace test {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct TestCallback : public ITestCallback {
    // Methods from ::android::hardware::test::V1_0::ITestCallback follow.
    Return<void> onTestEvent(const ::android::hardware::test::V1_0::TestEvent& event) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" ITestCallback* HIDL_FETCH_ITestCallback(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace test
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_TEST_V1_0_TESTCALLBACK_H
