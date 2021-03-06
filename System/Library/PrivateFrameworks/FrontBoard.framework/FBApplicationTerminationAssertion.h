/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBApplicationTerminationAssertion : NSObject {

	NSString* _bundleID;
	NSString* _reason;
	unsigned long long _serialNumber;
	id _plugInHoldToken;

}

@property (nonatomic,copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) id plugInHoldToken;                           //@synthesize plugInHoldToken=_plugInHoldToken - In the implementation block
-(void)setReason:(NSString *)arg1 ;
-(id)plugInHoldToken;
-(void)setPlugInHoldToken:(id)arg1 ;
-(unsigned long long)serialNumber;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
@end

