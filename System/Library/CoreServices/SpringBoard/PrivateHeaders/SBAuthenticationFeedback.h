//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBAuthenticationFeedback : NSObject
{
    unsigned long long result;	// 8 = 0x8
    _Bool _vibrate;	// 16 = 0x10
    _Bool _showPasscode;	// 17 = 0x11
    _Bool _jiggleLock;	// 18 = 0x12
    unsigned long long _result;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool jiggleLock; // @synthesize jiggleLock=_jiggleLock;
@property(readonly, nonatomic) _Bool vibrate; // @synthesize vibrate=_vibrate;
@property(readonly, nonatomic) _Bool showPasscode; // @synthesize showPasscode=_showPasscode;
@property(readonly, nonatomic) unsigned long long result; // @synthesize result=_result;
- (unsigned long long)hash;	// IMP=0x00000001003a5f80
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001003a5cc0
- (id)description;	// IMP=0x00000001003a5b48
@property(readonly, nonatomic) _Bool hintFailureText;
- (id)initForFailureWithFailureSettings:(id)arg1;	// IMP=0x00000001003a5a78
- (id)initForFailureShowingPasscode:(_Bool)arg1;	// IMP=0x00000001003a5a00
- (id)initForSuccess;	// IMP=0x00000001003a5994

@end

