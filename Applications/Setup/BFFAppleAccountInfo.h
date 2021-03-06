//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BFFAppleAccountInfo : NSObject
{
    NSString *_username;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
    NSString *_rawPassword;	// 24 = 0x18
    NSString *_altDSID;	// 32 = 0x20
}

+ (id)infoForAccountIdentifier:(id)arg1;	// IMP=0x00000001000c93dc
+ (id)_infoForAccountIdentifier:(id)arg1 accountStore:(id)arg2;	// IMP=0x00000001000c92f4
+ (id)primaryAccountInfo;	// IMP=0x00000001000c923c
+ (id)_accountInfos;	// IMP=0x00000001000c91c8
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;	// IMP=0x00000001000c94e0

@end

