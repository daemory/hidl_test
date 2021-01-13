#include "TestCallback.h"

namespace android {
namespace hardware {
namespace test {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::test::V1_0::ITestCallback follow.
Return<void> TestCallback::onTestEvent(const ::android::hardware::test::V1_0::TestEvent& event) {
    // TODO implement
    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//ITestCallback* HIDL_FETCH_ITestCallback(const char* /* name */) {
    //return new TestCallback();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace test
}  // namespace hardware
}  // namespace android
