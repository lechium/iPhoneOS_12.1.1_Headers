/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/RPEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding> {

	unsigned _flags;
	NSString* _persistentIdentifier;

}

@property (nonatomic,copy) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(unsigned)flags;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSString *)persistentIdentifier;
-(unsigned)updateWithEndpoint:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

