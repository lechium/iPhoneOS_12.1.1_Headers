/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDFieldWrapper : HMFObject {

	long long _tlvid;
	NSString* _name;

}

@property (assign,nonatomic) long long tlvid;              //@synthesize tlvid=_tlvid - In the implementation block
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)initWithTlvId:(unsigned long long)arg1 name:(id)arg2 ;
-(long long)tlvid;
-(void)setTlvid:(long long)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

