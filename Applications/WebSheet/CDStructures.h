//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SBSRemoteAlertHandle, WebSheetAppDelegate, WebSheetView, WebSheetViewController;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _ProbeContext {
    WebSheetView *sheet;
    struct __CFString *interfaceName;
    struct __CFString *postData;
    struct __CFString *loginURL;
    struct __CFString *ssid;
    unsigned int captiveNetworkCookie;
};

struct _ShowWebSheetContext {
    WebSheetAppDelegate *delegate;
    WebSheetView *webSheet;
    WebSheetViewController *viewCont;
    SBSRemoteAlertHandle *_alertHandle;
};

struct __CFString;

