//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADBannerViewDelegate.h"

@class ADBannerView, NSString;

@interface ADPreviewAdLoader : NSObject <ADBannerViewDelegate>
{
    int _adType;	// 8 = 0x8
    ADBannerView *_bannerView;	// 16 = 0x10
    long long _numberOfAttempts;	// 24 = 0x18
}

+ (id)instance;	// IMP=0x000000010000acbc
@property(nonatomic) int adType; // @synthesize adType=_adType;
@property(nonatomic) long long numberOfAttempts; // @synthesize numberOfAttempts=_numberOfAttempts;
@property(retain, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void)dealloc;	// IMP=0x000000010000b0e4
- (void)bannerViewActionDidFinish:(id)arg1;	// IMP=0x000000010000b0a8
- (void)bannerViewDidLoadAd:(id)arg1;	// IMP=0x000000010000b06c
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;	// IMP=0x000000010000af24
- (id)loadedBannerView;	// IMP=0x000000010000af18
- (void)loadBanner:(int)arg1;	// IMP=0x000000010000ad34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
