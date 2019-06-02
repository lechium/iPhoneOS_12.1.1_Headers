/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DCContext : NSObject <NSSecureCoding> {

	NSString* _clientAppID;

}

@property (copy) NSString * clientAppID;              //@synthesize clientAppID=_clientAppID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setClientAppID:(NSString *)arg1 ;
-(NSString *)clientAppID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
