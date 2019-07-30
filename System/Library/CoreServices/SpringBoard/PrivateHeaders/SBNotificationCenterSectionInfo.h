//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSectionInfo.h"

@class SBItemInfoLayoutCache;

@interface SBNotificationCenterSectionInfo : SBSectionInfo
{
    SBItemInfoLayoutCache *_layoutCache;	// 8 = 0x8
    CDUnknownBlockType _clearPossibleAction;	// 16 = 0x10
    CDUnknownBlockType _clearFinalAction;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType clearAction; // @synthesize clearAction=_clearFinalAction;
@property(copy, nonatomic) CDUnknownBlockType clearPossibleAction; // @synthesize clearPossibleAction=_clearPossibleAction;
- (void).cxx_destruct;	// IMP=0x000000010000ab38
- (double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3;	// IMP=0x000000010000a974
- (void)invalidateCachedLayoutData;	// IMP=0x000000010000a918
- (Class)reusableViewClass;	// IMP=0x000000010000a904

@end

