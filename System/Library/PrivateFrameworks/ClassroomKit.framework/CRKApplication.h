/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CRKApplication : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _name;
	NSData* _iconData;
	NSData* _badgeIconData;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSData * iconData;                      //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSData * badgeIconData;                 //@synthesize badgeIconData=_badgeIconData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)iconData;
-(void)setIconData:(NSData *)arg1 ;
-(NSData *)badgeIconData;
-(id)initWithInstalledApplication:(id)arg1 ;
-(void)setBadgeIconData:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

