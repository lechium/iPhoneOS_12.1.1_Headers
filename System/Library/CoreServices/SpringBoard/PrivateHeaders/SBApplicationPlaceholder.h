//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationPlaceholderObserver.h"
#import "SBLeafIconDataSource.h"

@class FBApplicationPlaceholder, NSMutableDictionary, NSMutableSet, NSString;

@interface SBApplicationPlaceholder : NSObject <FBApplicationPlaceholderObserver, SBLeafIconDataSource>
{
    FBApplicationPlaceholder *_placeholderProxy;	// 8 = 0x8
    id <SBApplicationPlaceholderDelegate> _delegate;	// 16 = 0x10
    NSString *_applicationBundleID;	// 24 = 0x18
    NSString *_applicationDisplayName;	// 32 = 0x20
    double _fractionProgress;	// 40 = 0x28
    _Bool _installing;	// 48 = 0x30
    _Bool _observingKVO;	// 49 = 0x31
    unsigned long long _installType;	// 56 = 0x38
    _Bool _invalidated;	// 64 = 0x40
    NSMutableDictionary *_generatedIconImagesByKey;	// 72 = 0x48
    NSMutableSet *_formatsPendingGeneration;	// 80 = 0x50
}

+ (id)backgroundQueue;	// IMP=0x00000001005b48e0
@property(nonatomic) __weak id <SBApplicationPlaceholderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *applicationDisplayName; // @synthesize applicationDisplayName=_applicationDisplayName;
@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
- (void).cxx_destruct;	// IMP=0x00000001005b6d0c
- (_Bool)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3;	// IMP=0x00000001005b6b14
- (_Bool)iconAllowsLaunch:(id)arg1;	// IMP=0x00000001005b6b0c
- (_Bool)iconCompleteUninstall:(id)arg1;	// IMP=0x00000001005b6b04
- (_Bool)iconSupportsUninstall:(id)arg1;	// IMP=0x00000001005b6ac0
- (_Bool)iconIsBeta:(id)arg1;	// IMP=0x00000001005b6ab8
- (_Bool)iconIsRecentlyUpdated:(id)arg1;	// IMP=0x00000001005b6ab0
- (id)iconFormattedAccessoryString:(id)arg1;	// IMP=0x00000001005b6aa8
- (id)iconBadgeNumberOrString:(id)arg1;	// IMP=0x00000001005b6aa0
- (int)iconAccessoryType:(id)arg1;	// IMP=0x00000001005b6a98
- (_Bool)iconProgressIsPaused:(id)arg1;	// IMP=0x00000001005b6a8c
- (double)iconProgressPercent:(id)arg1;	// IMP=0x00000001005b6a7c
- (long long)iconProgressState:(id)arg1;	// IMP=0x00000001005b69f4
- (_Bool)iconCanTightenLabel:(id)arg1;	// IMP=0x00000001005b69ec
- (_Bool)iconCanEllipsizeLabel:(id)arg1;	// IMP=0x00000001005b69e0
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;	// IMP=0x00000001005b69d0
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;	// IMP=0x00000001005b69c0
- (unsigned long long)iconPriority:(id)arg1;	// IMP=0x00000001005b69b8
- (id)iconDisplayName:(id)arg1 forLocation:(int)arg2;	// IMP=0x00000001005b6710
- (void)_reloadThumbnailImage;	// IMP=0x00000001005b6520
- (void)_generatePendingIconFormats;	// IMP=0x00000001005b5f48
- (void)_generateIconImageWithFormat:(int)arg1;	// IMP=0x00000001005b5eac
- (id)_iconImageKeyForBundleID:(id)arg1 format:(int)arg2;	// IMP=0x00000001005b5e78
- (id)_defaultIconImageWithFormat:(int)arg1;	// IMP=0x00000001005b5da4
- (id)_getOrGenerateIconImageWithFormat:(int)arg1;	// IMP=0x00000001005b5c90
- (void)placeholderDidChangeSignificantly:(id)arg1;	// IMP=0x00000001005b5be4
- (void)placeholderInstallPhaseDidChange:(id)arg1;	// IMP=0x00000001005b5b60
- (void)placeholderInstallStateDidChange:(id)arg1;	// IMP=0x00000001005b5adc
- (void)placeholderPausabilityDidChange:(id)arg1;	// IMP=0x00000001005b5a58
- (void)placeholderCancellabilityDidChange:(id)arg1;	// IMP=0x00000001005b59d4
- (void)placeholderPrioritizableDidChange:(id)arg1;	// IMP=0x00000001005b5950
- (void)placeholderPercentCompleteDidChange:(id)arg1;	// IMP=0x00000001005b58cc
- (void)_progressChanged;	// IMP=0x00000001005b5740
- (_Bool)_shouldDisplayAppName;	// IMP=0x00000001005b5734
- (id)_downloadingLabel;	// IMP=0x00000001005b56c0
- (void)resume;	// IMP=0x00000001005b55c0
- (void)pause;	// IMP=0x00000001005b54c0
- (void)cancel;	// IMP=0x00000001005b53c0
- (void)prioritize;	// IMP=0x00000001005b52c0
@property(readonly, nonatomic, getter=isCancelable) _Bool cancelable;
@property(readonly, nonatomic, getter=isPausable) _Bool pausable;
@property(readonly, nonatomic, getter=isPrioritizable) _Bool prioritizable;
- (_Bool)isContentRestricted;	// IMP=0x00000001005b51fc
- (_Bool)isInstalling;	// IMP=0x00000001005b51ec
- (_Bool)isDownloading;	// IMP=0x00000001005b517c
- (_Bool)isFailed;	// IMP=0x00000001005b514c
- (_Bool)isPaused;	// IMP=0x00000001005b511c
- (_Bool)isActive;	// IMP=0x00000001005b5104
- (_Bool)isDone;	// IMP=0x00000001005b50d0
- (unsigned long long)installType;	// IMP=0x00000001005b50c0
- (id)fetchIconImageWithFormat:(int)arg1;	// IMP=0x00000001005b50b4
- (void)iconChanged;	// IMP=0x00000001005b50a8
@property(retain, nonatomic) FBApplicationPlaceholder *placeholderProxy; // @synthesize placeholderProxy=_placeholderProxy;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001005b4b0c
- (void)invalidate;	// IMP=0x00000001005b4a70
- (void)dealloc;	// IMP=0x00000001005b4a20
- (id)initWithPlaceholderProxy:(id)arg1;	// IMP=0x00000001005b494c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
