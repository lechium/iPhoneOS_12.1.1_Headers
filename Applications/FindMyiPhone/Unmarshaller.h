//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Unmarshaller : NSObject
{
}

- (id)_safeParseJavaDate:(id)arg1;	// IMP=0x0000000100053ce4
- (id)_safeParseString:(id)arg1;	// IMP=0x0000000100053ba8
- (id)_safeBoundedNumberParser:(id)arg1 min:(double)arg2 max:(double)arg3;	// IMP=0x00000001000538e4
- (id)_safeNumberParser:(id)arg1;	// IMP=0x0000000100053718
- (id)_safeUnsignedIntegerParser:(id)arg1;	// IMP=0x0000000100053548
- (_Bool)_safeBoolParser:(id)arg1;	// IMP=0x00000001000533dc
- (void)smartUpdateBoolKey:(id)arg1 forObject:(id)arg2 withValue:(_Bool)arg3 force:(_Bool)arg4;	// IMP=0x0000000100053240
- (void)smartUpdateKey:(id)arg1 forObject:(id)arg2 withValue:(id)arg3;	// IMP=0x0000000100052f44
- (id)pendingActionsSubtitleForDevice:(id)arg1;	// IMP=0x0000000100052d24
- (id)pendingActionsForDevice:(id)arg1;	// IMP=0x0000000100052ad4
- (id)subtitleForDevice:(id)arg1 forceLocation:(_Bool)arg2;	// IMP=0x0000000100052360
- (id)deviceListSubtitle:(id)arg1;	// IMP=0x0000000100051e10
- (id)sharedRelativeDateFormatter;	// IMP=0x0000000100051da4
- (id)sharedStandaloneRelativeDateFormatter;	// IMP=0x0000000100051d38
- (void)updateTrackingInfoWithRawData:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000100051200
- (unsigned long long)timeout;	// IMP=0x00000001000511ec
- (void)updateLocationForDevice:(id)arg1 withLocation:(id)arg2;	// IMP=0x0000000100050f00
- (void)updateModelforDevice:(id)arg1 withData:(id)arg2;	// IMP=0x000000010004d8d4
- (void)updateModelforAccount:(id)arg1 withData:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c054
- (id)locationShifter;	// IMP=0x000000010004bfb8
- (_Bool)_isPendingFamilyDevice:(id)arg1 usingMemberInfo:(id)arg2;	// IMP=0x000000010004be84

@end
