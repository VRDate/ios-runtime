#ifndef __NativeScript__TimelineRecordFactory__
#define __NativeScript__TimelineRecordFactory__

#include <inspector/InspectorValues.h>
#include <JavaScriptCore/profiler/Profile.h>
#include <JavaScriptCore/InspectorProtocolObjects.h>

namespace Inspector {

class TimelineRecordFactory {
public:
    static Ref<InspectorObject> createGenericRecord(JSC::ExecState*, double startTime, int maxCallStackDepth);
    static Ref<InspectorObject> createConsoleProfileData(const String& title);
    static Ref<InspectorValue> buildProfileInspectorObject(const JSC::Profile* profile);
    static void appendProfile(Inspector::InspectorObject*, RefPtr<JSC::Profile>&&);
};
}

#endif /* defined(__NativeScript__TimelineRecordFactory__) */
