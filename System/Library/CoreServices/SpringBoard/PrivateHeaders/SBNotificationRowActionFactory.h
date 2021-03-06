//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBNotificationRowActionFactory : NSObject
{
    _Bool _shouldUseNarrowWidthForLonelyDismissAction;	// 8 = 0x8
    _Bool _shouldUseExteriorDismissActionSeparators;	// 9 = 0x9
    Class _separatorClass;	// 16 = 0x10
}

+ (id)notificationCenterRowActionFactory;	// IMP=0x0000000100551e24
+ (id)lockScreenRowActionFactory;	// IMP=0x0000000100551da4
@property(nonatomic) _Bool shouldUseExteriorDismissActionSeparators; // @synthesize shouldUseExteriorDismissActionSeparators=_shouldUseExteriorDismissActionSeparators;
@property(nonatomic) _Bool shouldUseNarrowWidthForLonelyDismissAction; // @synthesize shouldUseNarrowWidthForLonelyDismissAction=_shouldUseNarrowWidthForLonelyDismissAction;
@property(retain, nonatomic) Class separatorClass; // @synthesize separatorClass=_separatorClass;
- (void).cxx_destruct;	// IMP=0x0000000100552f8c
- (Class)_actionButtonClassForAppearance:(id)arg1;	// IMP=0x0000000100552e44
- (id)_dismissActionForBulletin:(id)arg1 shouldUseNarrowWidth:(_Bool)arg2 isFirst:(_Bool)arg3 isLast:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100552cb4
- (id)_backgroundColorForActionStyle:(long long)arg1;	// IMP=0x0000000100552c08
- (_Bool)_isCustomAppearance:(id)arg1;	// IMP=0x0000000100552b5c
- (unsigned long long)_tableViewStyleForBulletinActionStyle:(long long)arg1;	// IMP=0x0000000100552b4c
- (long long)_actionButtonStyleForAppearance:(id)arg1 primaryActionExists:(_Bool)arg2;	// IMP=0x0000000100552ad4
- (id)_rowActionWithBBAction:(id)arg1 button:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100552960
- (id)_rowActionWithBBAction:(id)arg1 bulletinActionStyle:(long long)arg2 bulletinContext:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001005526cc
- (void)_updateSeparatorsForDismissButton:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3;	// IMP=0x0000000100552604
- (id)rowActionsForSnoozedAlarmNotificationRequest:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100552448
- (id)rowActionsForAlertItem:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010055225c
- (id)rowActionsForBulletin:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100551f14
- (_Bool)shouldSuppressSupplementaryActionsForPrivacy:(id)arg1;	// IMP=0x0000000100551ea4

@end

