//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject
{
    int _sequenceNumber;	// 8 = 0x8
    UIFetchContentInBackgroundAction *_action;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) UIFetchContentInBackgroundAction *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001005925b4
- (void)execute;	// IMP=0x0000000100592360
- (id)initForBundleID:(id)arg1;	// IMP=0x0000000100592230

@end
