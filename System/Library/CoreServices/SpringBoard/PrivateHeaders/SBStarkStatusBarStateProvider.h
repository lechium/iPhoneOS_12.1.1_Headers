//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarStateProvider.h"

@class NSString;

@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider
{
    id <SBStarkSessionConfiguring> _sessionConfiguration;	// 8 = 0x8
    char _oldAggregatorTimeCString[64];	// 16 = 0x10
    char _timeCString[64];	// 80 = 0x50
    _Bool _statusBarTimeRequiresUpdate;	// 144 = 0x90
    _Bool _showOptimalCellData;	// 145 = 0x91
    _Bool _showTapToRadar;	// 146 = 0x92
    _Bool _disableBattery;	// 147 = 0x93
    _Bool _showElectronicTollCollection;	// 148 = 0x94
    _Bool _electronicTollCollectionAvailable;	// 149 = 0x95
    NSString *_inCallDetail;	// 152 = 0x98
}

+ (_Bool)_itemIsIgnored:(int)arg1;	// IMP=0x000000010057b058
- (void).cxx_destruct;	// IMP=0x000000010057b338
- (void)_callDurationChanged;	// IMP=0x000000010057b274
- (void)_resetStatusBarTime;	// IMP=0x000000010057b254
- (void)_electronicTollCollectionChanged;	// IMP=0x000000010057b13c
- (_Bool)_shouldShowRadarItem;	// IMP=0x000000010057b080
- (void)_composePostDataFromAggregatorData:(CDStruct_18395a89 *)arg1;	// IMP=0x000000010057af58
- (_Bool)_shouldPostForUpdatesToNonItemData:(const CDStruct_18395a89 *)arg1;	// IMP=0x000000010057af50
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_18395a89 *)arg3;	// IMP=0x000000010057ad78
- (id)doubleHeightStatusStringForStyle:(long long)arg1;	// IMP=0x000000010057ad40
- (void)dealloc;	// IMP=0x000000010057acc4
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010057aa84

@end
