//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNotificationCenterSectionInfo.h"

@class SBBulletinListSection;

@interface SBBBSectionInfo : SBNotificationCenterSectionInfo
{
}

- (_Bool)shouldSuppressBulletinMessageForPrivacy:(id)arg1;	// IMP=0x00000001001e3650
- (void)populateReusableView:(id)arg1;	// IMP=0x00000001001e3474
- (id)identifier;	// IMP=0x00000001001e33dc
- (id)listSectionIdentifier;	// IMP=0x00000001001e3388
@property(readonly, nonatomic) SBBulletinListSection *representedListSection;

@end
