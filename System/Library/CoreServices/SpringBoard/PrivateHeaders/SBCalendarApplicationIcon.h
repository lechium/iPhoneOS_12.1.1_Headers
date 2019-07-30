//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationIcon.h"

#import "SBDateTimeOverrideObserver.h"

@class NSString;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBDateTimeOverrideObserver>
{
}

- (id)getUnmaskedIconImage:(int)arg1;	// IMP=0x00000001000d31e8
- (id)generateIconImage:(int)arg1;	// IMP=0x00000001000d3118
- (id)_compositedIconImageForFormat:(int)arg1 withBaseImageProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d2ea0
- (void)_stopListeningForSignificantTimeChanges;	// IMP=0x00000001000d2e50
- (void)_startListeningForSignificantTimeChanges;	// IMP=0x00000001000d2de8
- (void)localeChanged;	// IMP=0x00000001000d2d98
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;	// IMP=0x00000001000d2cf8
- (void)dealloc;	// IMP=0x00000001000d2c6c
- (id)initWithApplication:(id)arg1;	// IMP=0x00000001000d2b90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

