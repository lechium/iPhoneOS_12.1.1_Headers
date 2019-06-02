//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSScreenshotAssetManagerBackend.h"

@class NSString;

@interface SSSDebugAssetManager : NSObject <SSScreenshotAssetManagerBackend>
{
}

+ (id)newTestScreenshot;	// IMP=0x000000010001ce38
- (void)removeEntryWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cfd4
- (void)updateImage:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001cfc0
- (void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cf48
- (void)registerEntryWithImage:(id)arg1 options:(id)arg2 identifierHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001cf30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

