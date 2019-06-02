//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDataSourcePrefetching.h"
#import "UITableViewDelegate.h"

@class FMAttributedStringRenderer, FMIPAccount, NSArray, NSCache, NSDictionary, NSString, UITableView, UITraitCollection;

@interface DeviceListDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, UITableViewDataSourcePrefetching>
{
    _Bool _showAllDevicesSection;	// 8 = 0x8
    NSArray *_orderedKeys;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    FMIPAccount *_account;	// 32 = 0x20
    NSDictionary *_model;	// 40 = 0x28
    id _kvoToken;	// 48 = 0x30
    id _notificationToken;	// 56 = 0x38
    id _devicesLoadedNotificationToken;	// 64 = 0x40
    id _measurementSystemChangedNotificationToken;	// 72 = 0x48
    id _contentSizeCategoryDidChangeNotificationToken;	// 80 = 0x50
    id _locationUpdatedNotificationToken;	// 88 = 0x58
    id _deviceImageURLUpdatedNotificationToken;	// 96 = 0x60
    NSCache *_imageCache;	// 104 = 0x68
    NSCache *_rowHeightCache;	// 112 = 0x70
    double _axTextImageViewWidth;	// 120 = 0x78
    FMAttributedStringRenderer *_renderer;	// 128 = 0x80
    UITraitCollection *_traitCollection;	// 136 = 0x88
}

@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) FMAttributedStringRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) double axTextImageViewWidth; // @synthesize axTextImageViewWidth=_axTextImageViewWidth;
@property(retain, nonatomic) NSCache *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) id deviceImageURLUpdatedNotificationToken; // @synthesize deviceImageURLUpdatedNotificationToken=_deviceImageURLUpdatedNotificationToken;
@property(retain, nonatomic) id locationUpdatedNotificationToken; // @synthesize locationUpdatedNotificationToken=_locationUpdatedNotificationToken;
@property(retain, nonatomic) id contentSizeCategoryDidChangeNotificationToken; // @synthesize contentSizeCategoryDidChangeNotificationToken=_contentSizeCategoryDidChangeNotificationToken;
@property(retain, nonatomic) id measurementSystemChangedNotificationToken; // @synthesize measurementSystemChangedNotificationToken=_measurementSystemChangedNotificationToken;
@property(retain, nonatomic) id devicesLoadedNotificationToken; // @synthesize devicesLoadedNotificationToken=_devicesLoadedNotificationToken;
@property(retain, nonatomic) id notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) id kvoToken; // @synthesize kvoToken=_kvoToken;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
@property(retain, nonatomic) FMIPAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool showAllDevicesSection; // @synthesize showAllDevicesSection=_showAllDevicesSection;
@property(retain, nonatomic) NSArray *orderedKeys; // @synthesize orderedKeys=_orderedKeys;
- (void).cxx_destruct;	// IMP=0x000000010003e4b0
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;	// IMP=0x000000010003de44
- (id)populateCacheWithStringDict:(id)arg1 width:(double)arg2 rtl:(_Bool)arg3 forDeviceId:(id)arg4;	// IMP=0x000000010003da88
- (id)attributedStringWithStringDictionary:(id)arg1;	// IMP=0x000000010003d668
- (double)axImageSizeForTableView:(id)arg1 cell:(id)arg2;	// IMP=0x000000010003d5b8
- (void)tableView:(id)arg1 updateAXImageForRowAtIndexPath:(id)arg2 cell:(id)arg3;	// IMP=0x000000010003ca44
- (id)stringDictionaryForDevice:(id)arg1;	// IMP=0x000000010003c914
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010003c6cc
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000010003c640
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010003c478
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003c148
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003bf10
- (double)fallbackEstimatedHeightForContentSizeCategory:(id)arg1;	// IMP=0x000000010003bd08
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003bc50
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010003bb8c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010003bae0
@property(readonly, nonatomic) _Bool showSectionHeaders;
@property(readonly, nonatomic) _Bool hasMyDevicesSection;
- (id)deviceForIndexPath:(id)arg1;	// IMP=0x000000010003b810
- (_Bool)_matchDevice:(id)arg1 deviceClass:(id)arg2 model:(id)arg3 color:(id)arg4;	// IMP=0x000000010003b684
- (void)_updateShowAllDeviceSectionWithTraitCollection:(id)arg1;	// IMP=0x000000010003b2ac
- (void)animateTableViewUpdate:(id)arg1 toNewList:(id)arg2;	// IMP=0x00000001000395c8
- (id)indexPathForDevice:(id)arg1 usingKeys:(id)arg2 inModel:(id)arg3;	// IMP=0x000000010003940c
- (id)indexPathForDevice:(id)arg1;	// IMP=0x000000010003935c
- (id)keyForSection:(long long)arg1;	// IMP=0x00000001000392f4
- (id)orderedAndFilteredKeyListFromModel:(id)arg1;	// IMP=0x0000000100039170
- (id)orderedKeysFromList:(id)arg1;	// IMP=0x0000000100038ef8
- (id)sortFamilyArray:(id)arg1;	// IMP=0x0000000100038c3c
- (id)groupedDictionaryFromRawList:(id)arg1;	// IMP=0x0000000100038974
- (void)initializeModel;	// IMP=0x0000000100038828
- (void)dealloc;	// IMP=0x000000010003874c
- (void)flushCache;	// IMP=0x00000001000385ec
- (void)invalidate;	// IMP=0x0000000100038184
- (void)updateVisibleCellsOfTableView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037e58
- (id)initWithTableView:(id)arg1;	// IMP=0x0000000100036578
- (id)init;	// IMP=0x0000000100036560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
