//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIBannerItem.h"

@class NSArray, NSDate, NSHashTable, NSMutableSet, NSString, UIImage;

@interface SBStarkBannerItem : SBUIBannerItem
{
    id <SBStarkSessionConfiguring> _configuration;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSMutableSet *_displayReasons;	// 24 = 0x18
}

@property(readonly, nonatomic) id <SBStarkSessionConfiguring> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;	// IMP=0x000000010049f96c
- (void)_callOrFaceTimeStateChanged;	// IMP=0x000000010049f950
- (_Bool)_inCallOrFaceTime;	// IMP=0x000000010049f8b4
- (_Bool)isStarkBannerItem;	// IMP=0x000000010049f8ac
- (_Bool)matchesContext:(id)arg1;	// IMP=0x000000010049f8a0
- (void)reloadDisplayProperties;	// IMP=0x000000010049f780
@property(readonly, copy, nonatomic) NSArray *subActionLabels;
- (_Bool)shouldShowModalSubActions;	// IMP=0x000000010049f770
- (CDUnknownBlockType)ignoreAction;	// IMP=0x000000010049f768
@property(readonly, nonatomic) long long effectiveDefaultActionType;
@property(readonly, nonatomic) long long defaultActionType;
@property(readonly, nonatomic) NSDate *sourceDate;
@property(readonly, nonatomic) UIImage *categoryImage;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)removeObserver:(id)arg1;	// IMP=0x000000010049f6d0
- (void)addObserver:(id)arg1;	// IMP=0x000000010049f6b8
- (void)dealloc;	// IMP=0x000000010049f63c
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010049f378
- (id)init;	// IMP=0x000000010049f368

@end
