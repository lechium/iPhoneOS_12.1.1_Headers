/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface BBImage : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	NSString* _path;
	NSString* _name;
	NSString* _bundlePath;

}

@property (nonatomic,copy) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * path;                    //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;              //@synthesize bundlePath=_bundlePath - In the implementation block
+(id)imageWithName:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithPath:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)bundlePath;
-(void)setBundlePath:(NSString *)arg1 ;
@end

