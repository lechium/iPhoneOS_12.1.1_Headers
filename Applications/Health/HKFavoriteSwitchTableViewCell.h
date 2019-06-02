//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKSwitchTableViewCell.h"

#import "HKSwitchTableViewCellDelegate.h"
#import "WDFavoriteDisplayTypesControllerObserver.h"

@class HKDisplayType, NSString, WDFavoriteDisplayTypesController;

@interface HKFavoriteSwitchTableViewCell : HKSwitchTableViewCell <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver>
{
    WDFavoriteDisplayTypesController *_favoriteDisplayTypesController;	// 8 = 0x8
    HKDisplayType *_displayType;	// 16 = 0x10
}

+ (id)defaultReuseIdentifier;	// IMP=0x0000000100127cac
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController; // @synthesize favoriteDisplayTypesController=_favoriteDisplayTypesController;
- (void).cxx_destruct;	// IMP=0x00000001001282c0
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;	// IMP=0x00000001001280fc
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;	// IMP=0x000000010012807c
- (void)updateSwitchValue;	// IMP=0x0000000100127e74
- (void)dealloc;	// IMP=0x0000000100127dc4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100127cd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

