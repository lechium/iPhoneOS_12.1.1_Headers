//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString, UIImage;

@interface PHRecentsItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    UIImage *_image;	// 8 = 0x8
    NSString *_localizedCount;	// 16 = 0x10
    NSString *_localizedSubtitle;	// 24 = 0x18
    NSString *_localizedTitle;	// 32 = 0x20
    NSString *_localizedSenderIdentityTitle;	// 40 = 0x28
    NSDate *_date;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000709e4
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *localizedSenderIdentityTitle; // @synthesize localizedSenderIdentityTitle=_localizedSenderIdentityTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(copy, nonatomic) NSString *localizedCount; // @synthesize localizedCount=_localizedCount;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;	// IMP=0x0000000100070fd4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100070ee0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100070ea4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100070bb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000709ec
- (id)initWithItem:(id)arg1;	// IMP=0x0000000100070804

@end
