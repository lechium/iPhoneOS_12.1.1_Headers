//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUServiceGridViewController.h"

#import "HUServiceGridItemManagerDelegate.h"

@class HFAccessoryBrowsingManager, HSDiscoveredAccessoryGridContentItemManager, NSString;

@interface HSDiscoveredAccessoryGridContentViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate>
{
    id <HSDiscoveredAccessoryGridContentViewControllerDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <HSDiscoveredAccessoryGridContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010000ff84
- (void)_updateScrollingAttributes;	// IMP=0x000000010000fee0
- (void)_identifyAccessory:(id)arg1;	// IMP=0x000000010000fd28
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;	// IMP=0x000000010000fd20
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010000fa9c
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000010000f9e8
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;	// IMP=0x000000010000f9e0
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;	// IMP=0x000000010000f9d8
- (void)setScrollDirection:(long long)arg1;	// IMP=0x000000010000f988
- (void)viewDidLoad;	// IMP=0x000000010000f790
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager;
- (id)initWithAccessoryBrowsingManager:(id)arg1 discoveredAccessoryFilter:(id)arg2;	// IMP=0x000000010000f674
- (id)initWithItemManager:(id)arg1;	// IMP=0x000000010000f564

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HSDiscoveredAccessoryGridContentItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

