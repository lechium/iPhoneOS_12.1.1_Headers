/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface CATAddress : NSObject {

	NSString* _address;
	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * address;                             //@synthesize address=_address - In the implementation block
@property (getter=isAny,nonatomic,readonly) BOOL any; 
@property (getter=isLocalWiFi,nonatomic,readonly) BOOL localWiFi; 
+(id)any;
+(id)localWiFi;
-(NSString *)address;
-(BOOL)isLocalWiFi;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(BOOL)isAny;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end

